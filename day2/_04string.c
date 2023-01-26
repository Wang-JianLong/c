#include <stdio.h>
#include <string.h>

int main1() {
  char str[] = "abcdefg";              // 会自动添加 \0 标识符
  int len = strlen(str);               // 除去字符串结束符号的长度
  printf("%d\n", len);                 // 实际字符串字符的长度
  printf("size of %d\n", sizeof(str)); // char 数组的长度
  return 0;
}

int main() {
  //	char strone[] = "abcc";
  //	char strtwo[] =strone;
  // 以上字符串赋值会报错的

  char str1[] = "String One";
  char str2[] = "String Two";

  char str3[100];
  // 会将2 的值一直读取至 结束符号的位置 赋值且覆盖原char数组的值1
  strcpy(str1, str2);
  strncpy(str3, str1, 6);
  // 加结束标志符 但是本机测试下不用加也行
  str3[6] = '\0';

  // 拼接
  strcat(str3, "AAA");
  // char* strncat(char* s, const char* ct, size_t n)
  // //将字符串ct中最多前n个字符连接到s的尾部，覆盖s末尾原本的'\0'，ct中如果提前遇到'\0'则立即停止（连接'\0'），不足n个字符的部分，不做处理。返回s。如果连接占用的长度超出了s的容量，会内存越界（末尾的'\0'超出也是越界）。
  strncat(str3, "BBB", 2);
  printf("%s\n", str1);
  printf("%s\n", str2);
  printf("%s\n", str3);

  char go[] = "GO";
  char go1[] = "GO";
  // 一致返回0 比较ASCII值，前大于后，返回值>0；相等，返回0；前小于后，返回值<0
  printf("%d\n", strcmp(go, go1));

  return 0;
}
