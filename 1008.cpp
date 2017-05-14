#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int num = 0;
	int move = 0;
	cin >> num >> move;
	int count = num;
	vector<int> number;
	int temp = 0;
	while (cin >> temp)
	{
		number.push_back(temp);
	}
	move %= num;
	move = num - move;
	for (int i = move; i < number.size(); i++)
	{
		count--;
		cout << number[i];
		if (count)
			cout << " ";
	}
	for (int i = 0; i < move; i++)
	{
		count--;
		cout << number[i];
		if (count)
			cout << " ";
	}
	system("pause");
	return 0;
}