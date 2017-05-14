#include <iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> grade[101];
	int num1 = 0, num2 = 0, temp = 0;
	cin >> num1;
	for (int i = 0; i < num1; i++)
	{
		cin >> temp;
		grade[temp].push_back(temp);
	}
	cin >> num2;
	for (int i = 0; i < num2; i++)
	{
		cin >> temp;
		cout << grade[temp].size();
		if (i != num2 - 1)
			cout << " ";
	}
	system("pause");
	return 0;
}