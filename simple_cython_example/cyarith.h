#ifndef __PYX_HAVE__cyarith
#define __PYX_HAVE__cyarith


#ifndef __PYX_HAVE_API__cyarith

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

__PYX_EXTERN_C DL_IMPORT(int) Add(int, int);

#endif /* !__PYX_HAVE_API__cyarith */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC initcyarith(void);
#else
PyMODINIT_FUNC PyInit_cyarith(void);
#endif

#endif /* !__PYX_HAVE__cyarith */
