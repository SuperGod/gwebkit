#ifndef CWEBVIEW_H
#define CWEBVIEW_H

#include <QWebView>
typedef void (*callWithBool)(bool);
class cwebview : public QWebView
{
    Q_OBJECT
public:
    explicit cwebview(QWidget *parent = NULL);
    virtual ~cwebview();

    void setLoadFinishedCall(callWithBool cl);

public slots:
    void onLoadFinished(bool ret);

private:
    callWithBool finishedCall;
};

#endif // CWEBVIEW_H
