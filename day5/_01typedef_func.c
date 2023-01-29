#include <stdio.h>

typedef int *(*PTR_TO_FUN)(int); // int *(*pf)(int); 函数指针
// int *(*array[3])(int); 括号 首先是个数组  指针数组 数组里是  int* func(int)
// 类型的指针 (int* (*pf)(int))

int *a(int);
int *b(int);
int *c(int);
// funA 函数 参数为整形和 一个参数为整形的函数指针b b返回值为一个
// 参数为int的void 函数  a返回值同b
void (*funA(int, void (*funB)(int)))(int);
// 起别名
typedef void (*PTR_FUNC_2)(int);
// 变函数

PTR_FUNC_2 funAA(int, PTR_FUNC_2);

int main() {
  PTR_TO_FUN pfs[3] = {&a, &b, &c};
  for (int i = 0; i < 3; i++) {
    printf("%p\n", (*pfs[i])(i));
  }

  return 0;
}

int *a(int x) { return &x; }
int *b(int x) { return &x; }
int *c(int x) { return &x; }
