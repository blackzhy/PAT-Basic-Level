#include <iostream>

using namespace std;

int main()
{
	int a[3], b[3], c[3];
	char sig = '-';
	for (int i = 0; i < 2; i++)
	{
		cin >> a[i];
		getchar();
		cin >> b[i];
		getchar();
		cin >> c[i];
		getchar();
	}
	if (a[1] * 17 * 29 + b[1] * 29 + c[1] >= a[0] * 17 * 29 + b[0] * 29 + c[0])
	{
		sig = '+';
		a[2] = a[1] - a[0];
		b[2] = b[1] - b[0];
		c[2] = c[1] - c[0];
	}
	else
	{
		a[2] = a[0] - a[1];
		b[2] = b[0] - b[1];
		c[2] = c[0] - c[1];
	}
	if (c[2] < 0)
	{
		b[2]--;
		c[2] += 29;
	}
	if (b[2] < 0)
	{
		a[2]--;
		b[2] += 17;
	}
	if (sig == '-')
		cout << sig;
	cout<<a[2] <<"."<< b[2] << "." << c[2];
	system("pause");
	return 0;
}