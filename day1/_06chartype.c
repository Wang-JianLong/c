#include <stdio.h>
#define A 'a'
int main() {
  char a = 'C';
  printf("%c = %d\n", a, a);
  unsigned char height;// 无修饰输出-86
  height = 170;
  printf("%d\n", height);
  // 注意  char 类型存放 数字类型需要标明是否有无符号
  // 否则根据操作系统 ascii 码表决定
  return 0;
}
