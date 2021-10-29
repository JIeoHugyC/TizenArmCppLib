#ifndef _SHAREDLIBRARY_H_
#define _SHAREDLIBRARY_H_

/**
 * This header file is included to define _EXPORT_.
 */

#ifdef __cplusplus
extern "C" {
#endif

// This method is exported from sharedlibrary.so
int tizensharedlibrary(void);

#ifdef __cplusplus
}
#endif
#endif // _SHAREDLIBRARY_H_

