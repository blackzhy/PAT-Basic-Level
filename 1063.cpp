#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int num = 0;
	int real = 0, abs = 0;
	double temp, result = 0;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> real >> abs;
		temp = sqrt(real*real + abs*abs);
		if (result < temp)
			result = temp;
	}
	cout.precision(2);
	cout.setf(ios::fixed);
	cout << result;
	system("pause");
	return 0;
}