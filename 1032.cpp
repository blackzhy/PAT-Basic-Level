#include<iostream>
using namespace std;

int main()
{
	int number = 0;
	cin >> number;
	int num = 0, grade = 0;
	int max = 0;
	int result[100000] = { 0 };
	for (int i = 0; i < number; i++)
	{
		cin >> num >> grade;
		result[num - 1] += grade;
	}
	for (int i = 1; i < number; i++)
	{
		if (result[i] != 0 && result[i] > result[max])
			max = i;
	}
	cout << max + 1 << " " << result[max];
	system("pause");
}