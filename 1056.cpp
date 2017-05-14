#include<iostream>

using namespace std;

int main()
{
	int num = 0, result = 0;
	cin >> num;
	auto number = new int[num];
	for (int i = 0; i < num; i++)
	{
		cin >> number[i];
		result += number[i] * 11 * (num - 1);
	}
	cout << result;
	system("pause");
	return 0;
}