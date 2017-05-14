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
	{//从除零外的所有数中挑一个最小的出来
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
	{//把所有的零加到刚刚挑出来的那个数后面
		number += '0';
		count[0]--;
	}
	for (int i = 1; i < 10; i++)
	{//然后把所有数按照顺序加到后面
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