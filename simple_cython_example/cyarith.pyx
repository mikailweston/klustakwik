cdef extern from "arith.h":
    int add(int a,int b)
    int multipy(int a,int b)

cpdef add2(int a, int b):
    return add(a, b)