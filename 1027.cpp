#include<string>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int number;
	char sig;
	int line=0;
	cin >> number>>sig;
	for (int i = 1;; i++)
	{
		if (number < i*i * 2 - 1)
		{
			line = i-1;
			break;
		}
	}
	for (int j =line; j > 0; j--)
	{
		for (int temp = 0; temp < line-j; temp++)
			cout << " ";
		for (int i = 2 * j - 1; i > 0; i--)
			cout << sig;
		cout << endl;
	}
	for (int j = 2; j <= line; j++)
	{
		for (int temp = line; temp > j; temp--)
			cout << " ";
		for (int i = 2 * j - 1; i > 0; i--)
			cout << sig;
		cout << endl;
	}
	cout << number - line*line * 2 + 1;
	system("pause");
	return 0;
}