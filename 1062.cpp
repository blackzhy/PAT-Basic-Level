#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isPrimer(int num1, int num2)
{
	if (num1 == 1)
		return true;
	else if (num2%num1 == 0)
		return false;
	else
	{
		for (int i = 2; i < num1; i++)
		{
			if ((num1%i == 0 && num2%i == 0))
				return false;
		}
		return true;
	}
}

int main()
{
	int n1 = 0, m1 = 0, n2 = 0, m2 = 0;
	int num = 0;
	cin >> n1;
	getchar();
	cin >> m1;
	getchar();
	cin >> n2;
	getchar();
	cin >> m2;
	cin >> num;
	for (int i = 1; i*m2 < n2*num; i++)
	{
		if (isPrimer(i, num))
		{
			if (i*m1 > n1*num)
				cout << i << "/" << num;
			else
				continue;
			if ((i + 1)*m2 < n2*num)
				cout << " ";
		}
	}
	system("pause");
	return 0;
}