#ifdef __OBJC__
#import <Cocoa/Cocoa.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "NBULog.h"
#import "NBULogContextDescription.h"
#import "NBULogFormatter.h"

FOUNDATION_EXPORT double NBULogVersionNumber;
FOUNDATION_EXPORT const unsigned char NBULogVersionString[];

