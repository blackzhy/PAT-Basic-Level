#include<iostream>
using namespace std;
int main()
{
	int num = 0;
	cin >> num;
	int bit[3];
	int i = 2;
	while (i>=0)
	{
		bit[i] = num % 10;
		num = num / 10;
		i--;
	}
	for (int i = 0; i < bit[0]; i++)
		cout << "B";
	for (int i = 0; i < bit[1]; i++)
		cout << "S";
	for (int i = 0; i < bit[2]; i++)
		cout << i+1;
	system("pause");
	return 0;
}