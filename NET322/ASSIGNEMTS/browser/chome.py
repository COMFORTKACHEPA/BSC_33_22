
from PyQt5.QtCore import *
import sys
from PyQt5.QtWebEngineWidgets import *
from PyQt5.QtWidgets import *
from PyQt5.QtGui import QIcon
import requests
from pathlib import Path
#browser to priotize local search
path = Path(__file__).parent / 'UnimaLogo.png'
local_url = "http://127.0.0.1:8000"   #  http://127.0.0.1:8000/register 

class MainWindow(QMainWindow):
    def __init__(self):
        super(MainWindow, self).__init__()
        self.browser = QWebEngineView()
        self.setCentralWidget(self.browser)
        self.resize(1000, 800)

        # Navigation Bar
        self.nav_bar = QToolBar()
        self.addToolBar(self.nav_bar)

        #back
        self.back_btn = QAction(QIcon('icons8-back-48.png'),'Back', self)
        self.back_btn.triggered.connect(self.browser.back)
        self.nav_bar.addAction(self.back_btn)
        #forwad
        self.forward_btn = QAction(QIcon('icons8-forward-48.png'),'Forward', self)
        self.forward_btn.triggered.connect(self.browser.forward)
        self.nav_bar.addAction(self.forward_btn)
        #reload
        self.reload_btn = QAction(QIcon('icons8-reload-50.png'),'Reload', self)
        self.reload_btn.triggered.connect(self.browser.reload)
        self.nav_bar.addAction(self.reload_btn)

        #searh input
        self.url_bar = QLineEdit()
        self.url_bar.setPlaceholderText("Enter URL or search")
        self.nav_bar.addWidget(self.url_bar)
        self.url_bar.returnPressed.connect(self.change_to_url)  

        #other search uffer button
        self.option_butn = QPushButton()
        self.nav_bar.addWidget(self.option_butn)
        self.option_butn.setText("")
        self.option_butn.clicked.connect(self.connect) 
        self.option_butn.setFlat(True)
        self.option_butn.setDisabled(True)


        #setting home page from local server
        if self.check_page_loaded(local_url):  
            self.browser.setUrl(QUrl(local_url))
        else:
            self.go_to_fail_option()

    #see succes load
    def check_page_loaded(self, url):
        """Checks if the page loads successfully."""
        try:
            response = requests.get(url, timeout=5)
            return response.status_code == 200  
        except requests.RequestException:
            return False

    # handlle url
    def change_to_url(self):
        url = self.url_bar.text().strip()
        if self.check_page_loaded(url):
            self.browser.setUrl(QUrl(url))
            self.option_butn.setText("")

        else:
            self.go_to_fail_option()

    # other searh
    def go_to_fail_option(self):
        self.option_butn.setText("Try Google")
        self.option_butn.setDisabled(False)
        html = "<h1>Document Not Found</h1>" \
        "<p>The requested document does not exist on the local server or.</p>" \
        "<p>Try searching externally.</p>"
        self.browser.setHtml(html)

    #google searh
    def connect(self):
        self.browser.setUrl(QUrl("https://www.google.com"))
        
app = QApplication(sys.argv)
QApplication.setApplicationName("Like Chrome")
QApplication.setWindowIcon(QIcon(str(f"{path}")))
window = MainWindow()
window.show()
sys.exit(app.exec_())