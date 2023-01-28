// 宏定义
// 只是简单的进行替换，并且由于预处理器是在编译之前进行
// 而编译工作的任务之一就是语法检查 所以编译器不会对宏定义进行语法检查
// 且不是说明语句 不用加分号 宏定义域的作用是定义开始至整个程序结束 可以用#undef
// 来终止宏定义的作用域 宏定义允许嵌套 只是简单的文本替换 在带参数的宏定义中
//		- # 运算符后面应该跟着一个参数 预处理器会将这个参数转换为字符串
//		- ## 运算符被称为记号连接运算符 会连接两个参数
#define PI 3.14
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#include <stdio.h>
// # 将x转换为字符串
#define TOSTRING(x) #x
#define TOGETHER(a, b) a##b
// 可变参数
#define PRINTF(...) printf(#__VA_ARGS__)
// 转换字符串和连接字符
#define PTF(format,...) printf(# format, ##__VA_ARGS__)
int main() {
  int x, y;
  printf("%d\n", MAX(1, 5));
  printf("%s\n", TOSTRING(WJL));   // WJL
  printf("%s\n", TOSTRING("WJL")); //"WJL"
  printf("%d\n", TOGETHER(1, 3));  // 13

  PRINTF(1, 23, "jfkldsfjas", "fsd",\n); //1, 23, "jfkldsfjas", "fsd",

  PTF(a = %d  b = %d\n,1,2); // a = 1  b = 2
  return 0;
}
