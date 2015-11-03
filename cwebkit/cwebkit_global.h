#ifndef CWEBKIT_GLOBAL_H
#define CWEBKIT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CWEBKIT_LIBRARY)
#  define CWEBKITSHARED_EXPORT Q_DECL_EXPORT
#else
#  define CWEBKITSHARED_EXPORT Q_DECL_IMPORT
#endif

#define EXTERN extern "C"

#endif // CWEBKIT_GLOBAL_H
