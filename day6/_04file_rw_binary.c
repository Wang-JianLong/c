// 二进制读写文件
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct User 
{
	char name[12];
	int age;
};

int main()
{
		FILE *fp;
		struct User *read_u,*write_u;

	
		read_u = (struct User *)malloc(sizeof(struct User));	
		write_u = (struct User *)malloc(sizeof(struct User));	
		if (read_u ==NULL ||write_u == NULL)	
		{
			printf("申请内存失败！！\n");	
			exit(EXIT_FAILURE);
		}
		
		strcpy(write_u -> name,"张三");
		write_u -> age = 12;

		if((fp = fopen("binary.txt","w")) == NULL)
		{
				printf("打开文件失败!\n");
				exit(EXIT_FAILURE);
		}
		fwrite(write_u,sizeof(struct User),1,fp);

		fclose(fp);
		free(write_u);

		// read 
		if((fp = fopen("binary.txt","r")) == NULL)
		{
				printf("打开文件失败!\n");
				exit(EXIT_FAILURE);
		}
		fread(read_u,sizeof(struct User),1,fp);
		printf("read_u  name =  %s,  age = %d  \n",read_u->name,read_u->age);
		fclose(fp);
		free(read_u);
		return 0;
}
