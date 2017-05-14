#include <iostream>
#include<string>

using namespace std;

int main()
{
	string num1;
	cin >> num1;
	int num2;
	cin >> num2;
	int temp = 0;
	string result;
	for (int i = 0; i<num1.length(); i++)
	{
		temp += (num1[i] - '0');
		if (temp<num2)
		{
			if (result.length() != 0)
				result += '0';
		}
		else
		{
			result += (char)(temp / num2 + '0');
			temp = temp%num2;
		}
		temp *= 10;
	}
	if (result.length() == 0)
		result += '0';
	cout << result << ' ';
	cout << temp / 10;
	system("pause");
	return 0;
}