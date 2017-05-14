#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main()
{
	/*输入部分*/
	int integer, index;
	string decimal;
	char signal,temp;
	cin >> signal;
	cin >> integer;
	getchar();
	while ((temp = getchar()) != 'E')
		decimal += temp;
	cin >> index;
	/*输入结束*/

	if (signal != '+')
		cout << signal;
	if (index >= 0)
	{
		cout << integer;
		if (index >= decimal.size())
		{
			cout << decimal;
			for (int i = index - decimal.size();i>0;i--)
				cout << "0";
		}
		else
		{
			for (int i = 0; i < index; i++)
				cout << decimal[i];
			cout << ".";
			for (int i = index; i < decimal.size(); i++)
				cout << decimal[i];
		}
	}
	else
	{
		cout << "0.";
		for (int i = 0 - index-1; i > 0; i--)
			cout << "0";
		cout << integer<<decimal;
	}
	system("pause");
	return 0;
}