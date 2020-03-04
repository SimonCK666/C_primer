// 假设prog为可执行程序
#include <stdio.h>
#include <stdlib.h>   //为了使用exit();
int main() {
	int ch;
	FILE * fp;
	char fname[50];  //储存文件名
	printf("Enter the name of the file: \n");
	scanf("%s", fname);
	fp = fopen(fname, "r");  //打开待读取的文件
	if (fp == NULL)  //如果失败
	{
		printf("Failed to open file. Bye~\n");
		exit(1);  //退出程序	
	}
	//getc(fp)从打开的文件中获取一个字符
	while ((ch = getc(fp) != EOF)) {
		putchar(ch);
		fclose(fp);   //关闭文件
		return 0;
	}
}
/*
1. 把输出重定向至文件： >
	prog > file1
2. 把输入重定向至文件： <
	prog < file2
3. 组合重定向：
	prog <file2 >file1
	prog >file1 <file2
> 将file2作为输入，file1作为输出
*/
