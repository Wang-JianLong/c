// 共用体
// 共用体的所有成员共享同一个内存地址
//  共用体只可以直接声明变量  而不使用名字
#include <stdio.h>
#include <string.h>

union Test {
  int i;
  char s[4];
};

typedef union Test TEST;

int main(void) {
  TEST test;
  test.i = 1;
  strcpy(test.s, "sss");
  printf("addr of test.i  %p\n", &test.i);
  printf("addr of test.s  %p\n", test.s);
  // addr of test.i  0x7ffce90d6f0c
  // addr of test.s  0x7ffce90d6f0c
  printf("value of test.i  %d\n", test.i);
  printf("value of test.s  %s\n", test.s);
  /*
  value of test.i  7566195
  value of test.s  sss
  同一个内存地址 赋值会导致互相覆盖 只有最后一个才正确
   */
  printf("size of test %d\n", sizeof(test)); // 4
  return 0;
}
