#include<iostream>

using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	auto e = new int[num+1];
	for (int i = 0; i < num+1; i++)
		e[i] = 0;
	int mile = 0;
	for (int i = 0; i < num; i++)
	{
		cin >> mile;
		if (mile > num)
			e[num]++;
		else
			e[mile]++;
	}
	int count = e[num];
	for (int i = num; i >= 0; i--)
	{
		if (count >= i)
		{
			cout << i;
			break;
		}
		else if (i == 0)
			cout << 0;
		else
			count += e[i - 1];
	}
	system("pause");
	return 0;
}