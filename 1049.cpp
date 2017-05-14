#include<iostream>
using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	double temp = 0;
	double result = 0;
	for (int i = 1; i < num+1; i++)
	{
		cin >> temp;
		result += temp*i*(num - i + 1);
	}
	cout.precision(2);
	cout.setf(ios::fixed);
	cout << result;
	system("pause");
	return 0;
}