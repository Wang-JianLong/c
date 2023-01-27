#include <stdio.h>

// 定义一个函数
// 声明 Declaration 告诉编译器要使用这个函数
// 你没有找到这个函数定义不要紧稍后我会补上 程序是由上至下编译的
void print_C();

int main() {
  print_C();
  print_C();
  print_C();
  return 0;
}

void print_C() {
  printf(" ######\n");
  printf("##    ##\n");
  printf("##   \n");
  printf("##   \n");
  printf("##    ## \n");
  printf(" ######   \n");
}
