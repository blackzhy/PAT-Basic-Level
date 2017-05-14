/*
	1002. 写出这个数 (20)

	读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

	输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10100。

	输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。

	输入样例：
	1234567890987654321123456789
	输出样例：
	yi san wu
*/
#include<stdlib.h>
#include<stdio.h>

void trans(int temp)
{
	switch (temp)
	{
	case 0:
		printf("ling"); break;
	case 1:
		printf("yi"); break;
	case 2:
		printf("er"); break;
	case 3:
		printf("san"); break;
	case 4:
		printf("si"); break;
	case 5:
		printf("wu"); break;
	case 6:
		printf("liu"); break;
	case 7:
		printf("qi"); break;
	case 8:
		printf("ba"); break;
	case 9:
		printf("jiu"); break;
	default:
		break;
	}
}
int main()
{
	char num;
	int result=0;
	int temp[3];
	int i = 0;
	num = getchar();
	while (num!=EOF&&num != '\n')
	{
		result += (num - '0');
		num = getchar();
	}
	while (result != 0)
	{
		temp[i++] = result % 10;
		result = result / 10;
	}
	while (i > 1)
	{
		i--;
		trans(temp[i]);
		printf(" ");
	}
	trans(temp[--i]);
	return 0;
}