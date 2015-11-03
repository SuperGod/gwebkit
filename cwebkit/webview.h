#ifndef WEBVIEW_H
#define WEBVIEW_H
#include "cwebkit_global.h"

EXTERN void* CWEBKITSHARED_EXPORT webview_new();
EXTERN void CWEBKITSHARED_EXPORT webview_delete(void* p);
EXTERN void CWEBKITSHARED_EXPORT webview_setsize(void* p, int width, int height);
EXTERN void CWEBKITSHARED_EXPORT webview_show(void* p);
EXTERN void CWEBKITSHARED_EXPORT webview_seturl(void* p, const char* url, int urllen);
EXTERN void CWEBKITSHARED_EXPORT webview_setbuf(void* p, const char* buf, int buflen);
EXTERN void CWEBKITSHARED_EXPORT webview_sethtml(void* p, const char* html, int htmllen);
EXTERN void CWEBKITSHARED_EXPORT webview_onfinished(void* p, void *call);


#endif // WEBVIEW_H
