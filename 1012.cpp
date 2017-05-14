#include<iostream>
#include <iomanip>
#include<math.h>

using namespace std;

int main()
{
	int a[5] = { 0 };
	int num[5] = { 0 };
	int number = 0;
	cin >> number;
	int temp = 0;
	while (cin >> temp)
	{
		int judge = temp % 5;
		if (judge == 0 && temp % 2 == 0)
		{
			a[0] += temp;
			num[0]++;
		}
		if (judge == 1)
		{
			a[1] += temp*pow(-1, num[1]);
			num[1]++;
		}
		if (judge == 2)
		{
			a[2]++;
			num[2]++;
		}
		if (judge == 3)
		{
			a[3] += temp;
			num[3]++;
		}
		if (judge == 4)
		{
			if (a[4] < temp)
				a[4] = temp;
			num[4]++;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		if (num[i] == 0)
		{
			cout << "N";
		}
		else if (i == 3)
		{
			cout << fixed << setprecision(1) << (double)a[3] / num[3];
		}
		else
		{
			cout << a[i];
		}
		if (i != 4)
		{
			cout << " ";
		}
	}
	system("pause");
	return 0;
}