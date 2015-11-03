#ifndef QTAPP_H
#define QTAPP_H
#include <QApplication>


class qtapp : public QApplication
{
    Q_OBJECT
public:
    explicit qtapp(int argc = 0, char **argv = NULL);


};

#endif // QTAPP_H
