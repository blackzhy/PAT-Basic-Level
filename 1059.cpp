#include<iostream>
#include<math.h>
using namespace std;

bool isPrimer(int num)
{
	if (num == 1)
		return false;
	if (num == 2)
		return true;
	for (int i = 2; i < sqrt(num)+1; i++)
		if (num%i == 0)
			return false;
	return true;
}

int main()
{
	auto ID = new int*[10000];
	for (int i = 0; i < 10000; i++)
	{
		ID[i] = new int[2];
		ID[i][0] = 0;
		ID[i][1] = false;
	}
	int num1 = 0, num2 = 0;
	cin >> num1;
	int temp = 0;
	for (int i = 1; i < num1+1; i++)
	{
		cin >> temp;
		ID[temp][0] = i;
		ID[temp][1] = false;
	}
	cin >> num2;
	int check = 0;
	for (int i = 0; i < num2; i++)
	{
		cin >> check;
		if (check < 10)
			cout << "000" << check;
		else if (check < 100)
			cout << "00" << check;
		else if (check < 1000)
			cout << "0" << check;
		else
			cout << check;
		if (ID[check][0] == 0)
		{
			cout << ": Are you kidding?" << endl;
			continue;
		}
		if (!ID[check][1])
		{
			if (ID[check][0] == 1)
				cout << ": Mystery Award" << endl;
			else if (isPrimer(ID[check][0]))
				cout << ": Minion" << endl;
			else
				cout << ": Chocolate" << endl;
		}
		else
			cout << ": Checked"<<endl;
		ID[check][1] = true;
	}
	system("pause");
	return 0;
}