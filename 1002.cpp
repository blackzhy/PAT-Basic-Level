/*
	1002. д������� (20)

	����һ����Ȼ��n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�

	�����ʽ��ÿ�������������1��������������������Ȼ��n��ֵ�����ﱣ֤nС��10100��

	�����ʽ����һ�������n�ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ���1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�

	����������
	1234567890987654321123456789
	���������
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