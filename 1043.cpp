#include<iostream>
#include<string>
using namespace std;

int main()
{
	int min = 0;
	auto num = new int[6];
	string  pat = "PATest";
	string str;
	for (int i = 0; i < 6; i++)
		num[i] = 0;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		for (int j = 0; j < 6; j++)
			if (str[i] == pat[j])
				num[j]++;
	}
	for (int i = 0; i < 6; i++)
		if (num[min] > num[i])
			min = i;
	for (int i = 0; i < 6; i++)
		num[i] -= min;
	for (int i = 0; i < min; i++)
		cout << "PATest";
	while (true)
	{
		int temp = 0;
		for (int i = 0; i < 6; i++)
			temp += num[i];
		for (int i = 0; i < 6; i++)
		{
			if (num[i] != 0)
			{
				cout << pat[i];
				num[i]--;
			}
		}
		if (temp == 0)
			break;
	}
	system("pause");
	return 0;
}