#include "cwebview.h"
#include <QWebView>

cwebview::cwebview(QWidget *parent)
    :QWebView(parent)
{
    connect(this, SIGNAL(loadFinished(bool)), this, SLOT(onLoadFinished(bool)));
}

cwebview::~cwebview()
{

}

void cwebview::setLoadFinishedCall(callWithBool cl)
{
    finishedCall = cl;
}

void cwebview::onLoadFinished(bool ret)
{
    if (finishedCall)
    {
        finishedCall(ret);
    }
}
