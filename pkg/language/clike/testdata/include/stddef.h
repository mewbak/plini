#ifndef _STDDEF_H_
#define _STDDEF_H_

#define NULL ((void *)0)

// https://en.wikipedia.org/wiki/Offsetof
#define offsetof(st, m) __builtin_offsetof(st, m)

typedef __PTRDIFF_TYPE__ ptrdiff_t;
typedef __SIZE_TYPE__ size_t;
typedef __WCHAR_TYPE__ wchar_t;

#endif				/* _STDDEF_H_ */
