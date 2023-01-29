// 将 函数指针作为返回值
#include <stdio.h>

int sub(int a, int b);
int add(int a, int b);
// int calc(int (*)(int,int),	int, int); // 参数
// int (*select(char))(int,int);  // 返回值  两个可以抽取

typedef int (*PTR_TO_FUN)(int, int);

int calc(PTR_TO_FUN, int, int);
PTR_TO_FUN select(char);

int sub(int a, int b) { return a - b; }

int add(int a, int b) { return a + b; }

int calc(int (*fp)(int, int), int a, int b) {
  // return fp(a,b);
  return (*fp)(a, b);
}

int (*select(char op))(int, int) {
  switch (op) {
  case '-':
    return sub;
  case '+':
    return add;
  }
  return NULL;
}

int main() {
  int num1, num2;
  char op;
  printf("请输入一个数学运算式 如 1+3 ：");
  scanf("%d%c%d", &num1, &op, &num2);
  int (*fp)(int, int) = select(op);
  printf("%d\n", fp(num1, num2));
  return 0;
}
