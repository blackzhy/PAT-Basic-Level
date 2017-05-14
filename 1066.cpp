#include<iostream>
#include<string>

using namespace std;

int main()
{
	string temp = "000";
	int num1 = 0, num2 = 0, a = 0, b = 0, value = 0;
	cin >> num1 >> num2 >> a >> b >> value;
	auto pixel = new int* [num1];
	for (int i = 0; i < num1; i++)
	{
		pixel[i] = new int[num2];
		for (int j = 0; j < num2; j++)
			cin >> pixel[i][j];
	}
	for (int i = 0; i < num1; i++)
	{
		for (int j = 0; j < num2; j++)
		{
			if (pixel[i][j] >= a&&pixel[i][j] <= b)
				pixel[i][j] = value;
			for (int m = 2; m >= 0; m--)
			{
				temp[m] += pixel[i][j] % 10;
				pixel[i][j] /= 10;
			}
			cout << temp;
			temp = "000";
			/*cout << pixel[i][j]*/;
			if (j != num2 - 1)
				cout << " ";
			else
				cout << endl;
		}
	}
	system("pause");
	return 0;
}