#ifndef _STDARG_H_
#define _STDARG_H_

#define va_arg(ap, type) __builtin_va_arg(ap, type)
#define va_copy(dest, src) __builtin_va_copy(dest, src)
#define va_end(ap) __builtin_va_end(ap)
#define va_start(ap, arg) __builtin_va_start(ap, arg)

typedef __builtin_va_list va_list;

#endif				/* _STDARG_H_ */
