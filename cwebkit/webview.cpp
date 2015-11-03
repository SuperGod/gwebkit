#include "webview.h"

#include "cwebview.h"

#define WEBVIEW cwebview
#define GET_WEB_PTR(web,p)     if (p==NULL) \
{ return;}\
WEBVIEW* web = (WEBVIEW*)p;

// QWebEnginePage is not avalibe of mingw
//#include <QWebEnginePage>
//#define WEBVIEW QWebEnginePage
void* webview_new()
{
    WEBVIEW* web = new WEBVIEW();
    return web;
}

void webview_delete(void* p)
{
    if (p!=NULL)
    {
        delete (QObject*)p;
    }
}
void webview_setsize(void* p, int width, int height)
{
    GET_WEB_PTR(web, p)
    web->setFixedSize(QSize(width, height));
}

void webview_show(void* p)
{
    GET_WEB_PTR(web, p)
    web->show();
}

void webview_seturl(void* p, const char* url, int urllen)
{
    GET_WEB_PTR(web, p)
    QString urlstr = QString::fromUtf8(url, urllen);
    QUrl qurl(urlstr);
    web->setUrl(qurl);
}

void webview_setbuf(void* p, const char* buf, int buflen)
{
    GET_WEB_PTR(web, p)
    QByteArray data(buf, buflen);
    web->setContent(data);

}

void webview_sethtml(void* p, const char* html, int htmllen)
{
    GET_WEB_PTR(web, p)
    QString htmlstr = QString::fromUtf8(html, htmllen);
    web->setHtml(htmlstr);
}

void webview_onfinished(void* p, void *call)
{
    GET_WEB_PTR(web, p)
    web->setLoadFinishedCall((callWithBool)call);
}

