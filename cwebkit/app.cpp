#include "app.h"
#include <memory>
#include "qtapp.h"
static std::shared_ptr<qtapp> theApp;
void* app_init()
{
    if (!theApp)
    {
        theApp = std::shared_ptr<qtapp>(new qtapp());
    }
    return theApp.get();
}

std::shared_ptr<qtapp> app_get()
{
    return theApp;
}

int app_run(void* app)
{
    if (app == NULL)
    {
        return 1;
    }
    qtapp* mainApp = (qtapp*)app;
    return mainApp->exec();
}
