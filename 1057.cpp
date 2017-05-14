#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str,bin;
	int zero = 0, one = 0;
	getline(cin, str);
	int num = 0;
	for (int i = 0; i < str.length(); i++)
	{
		str[i]=toupper(str[i]);
		if (str[i] <= 'Z'&&str[i] >= 'A')
			num += str[i] - 'A'+1;
	}
	while (num != 0)
	{
		bin += (char)('0' + num % 2);
		num /= 2;
	}
	
	for (int i = 0; i < bin.length(); i++)
	{
		if (bin[i] == '0')
			zero++;
		else
			one++;
	}
	cout << zero << " " << one;
	system("pause");
	return 0;
}