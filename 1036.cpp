#include<iostream>

using namespace std;

int main()
{
	double num = 0;
	char c;
	cin >> num >> c;
	for (int i = 0; i < num; i++)
		cout << c;
	cout << endl;
	for (int j = 0; j < (int)(num / 2 + 0.5) - 2; j++)
	{
		cout << c;
		for (int m = 0; m < num - 2; m++)
			cout << " ";
		cout << c << endl;
	}
	for (int i = 0; i < num; i++)
		cout << c;
	system("pause");
	return 0;
}