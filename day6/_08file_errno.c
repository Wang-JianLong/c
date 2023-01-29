#include <stdio.h>
#include <stdlib.h>
// 错误码的信息在里面
// 对应的perror函数可以直观地打印出错误信息
#include <errno.h>
#include <string.h>
int main()
{
		FILE *fp;
		char *s;
		fp = fopen("不存在","rw");
		//printf("错误原因%d\n",errno);
		perror("打开文件失败 原因是：");
		// 输出 打开文件失败 原因是：: No such file or directory
		fprintf(stderr,"出错了！！！ 原因竟然是 --> %s <-- 这个\n",strerror(errno));
//		fclose(fp);
		return 0;
}
