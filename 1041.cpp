#include<iostream>
#include<string>

using namespace std;

int main()
{
	int num1 = 0, num2 = 0;
	cin >> num1;
	string temp;
	auto student = new string[num1][3];
	for (int i = 0; i < num1; i++)
	{
		for (int j = 0; j < 3; j++)
			cin >> student[i][j];
	}
	cin >> num2;
	for (int i = 0; i < num2; i++)
	{
		cin >> temp;
		for (int j = 0; j < num1; j++)
			if (student[j][1] == temp)
				cout << student[j][0] << " " << student[j][2]<<endl;
	}
	system("pause");
	return 0;
}