#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()
{
	int count[10] = { 0 };
	string number;
	for (int i = 0; i < 10; i++)
		cin >> count[i];
	for (int i = 1; i < 10; i++)
	{//�ӳ����������������һ����С�ĳ���
		if (count[i] == 0)
			continue;
		else
		{
			number += '0' + i;
			count[i]--;
			break;
		}
	}
	while (count[0])
	{//�����е���ӵ��ո����������Ǹ�������
		number += '0';
		count[0]--;
	}
	for (int i = 1; i < 10; i++)
	{//Ȼ�������������˳��ӵ�����
		while(count[i])
		{
			number += '0' + i;
			count[i]--;
		}
	}
	cout << number;
	system("pause");
	return 0;
}