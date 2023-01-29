// 枚举
#include <stdio.h>
// 枚举类型 是整形常量 默认0开始  可以自定义数值
//  编译期常量 不要试图修改
int main(void) {
  enum Color { red = 11, green, blue };
  enum Color rgb;
  for (rgb = red; rgb <= blue; rgb++) {
    // 自增 c可以 c++不行
    printf("rgb = %d\n", rgb);
  }
  return 0;
}
