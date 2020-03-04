#include <stdio.h>
#include <stdbool.h>
long get_long(void);
int main() {
//假设一个处理非负数证书的循环，用户输入了负数
	long n;
	//Get the first value
	scanf("%ld", &n);
	
	//Check whether it is in the range
	while (n >= 0)
	{
		//Handle n
		scanf("%ld", &n);  // Get next value	
	}

//如果用户输入错误类型的值
	while (scanf("%ld", &n) == 1 && n >= 0)  //当输入是一个整数且该整数为正时
	{
		/*Handle n*/
		scanf("%ld", &n);	
	}

}

//如果错误，输入中却类型的值/直接退出程序
long get_long(void)
{
	long input;
	char ch;
	while (scanf("%ld", &input) != 1) {
		while ((ch = getchar()) != '\n') {
			putchar(ch);
			printf("is not an integer.\nPlease enter an ");
			printf("integer value, such as 25, -178, or 3: ");
		}
	}
	return input;
}
