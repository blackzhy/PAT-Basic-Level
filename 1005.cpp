#include<iostream>
#include<vector>

using namespace std;

int callatz(int* number,int &num)
{
	if (num == 1)
		return 0;
	else if (num % 2 == 0)
		num /= 2;
	else
		num = (3 * num + 1) / 2;
	if(num>0&&num<=100)
		number[num] = 1;
	callatz(number, num);
	return 0;
}


int main()
{
	int num = 0;
	cin >> num;
	auto number = new int[101];
	auto temp = new int[num];
	vector<int> result;
	for (int i = 0; i < 100; i++)
		number[i] = -1;
	for (int i = 0; i < num; i++)
	{
		cin >> temp[i];
		//temp[i] = i;
		number[temp[i]] = 0;
	}
	for (int i = 0; i < num; i++)
		callatz(number,temp[i]);
	for (int i = 100; i > 0; i--)
	{
		if (number[i] == 0)
			result.push_back(i);
	}
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i];
		if (i != result.size() - 1)
			cout << " ";
	}
	system("pause");
	return 0;
}