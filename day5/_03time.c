#include <stdio.h>
#include <time.h>

int main(void) {
  struct tm *p;
  time_t t;
  time(&t); // 当前秒数
  printf("%ul\n", t);

  p = localtime(&t);

  return 0;
}
