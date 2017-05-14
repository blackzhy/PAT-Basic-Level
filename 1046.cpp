#include<iostream>

using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	int a = 0, b = 0, c = 0, d = 0;
	int num1 = 0, num2 = 0;
	for (int i = 0; i < num; i++)
	{
		cin >> a >> b >> c >> d;
		if (b == a + c&&d != a + c)
		{
			num1++;
			continue;
		}
		if (b != a + c&&d == a + c)
			num2++;
	}
	cout << num2 << " " << num1;
	system("pause");
	return 0;
}