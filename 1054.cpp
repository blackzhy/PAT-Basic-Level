#include<iostream>
#include<string>
using namespace std;

bool isNum(string num)
{
	int dot = 0;
	for (int i = num.size() - 1; i >= 0; i--)
	{
		if (num[i] == '-')
			if (i == 0)
				return true;
			else
				return false;
		else
		{
			if (num[i] == '.')
			{
				dot++;
				if (num.size() - i - 1 > 2)
					return false;
				if (dot > 1)
					return false;
				if (i != 0 && i != num.size() - 1)
					continue;
				else
					return false;
			}
			if (num[i] > '9' || num[i] < '0')
				return false;
		}
	}
	return true;
}

int main()
{
	int num = 0;
	cin >> num; getchar();
	double result = 0;
	int right = 0;
	auto number = new string[num];
	for (int i = 0; i < num; i++)
	{
		cin >> number[i];
		if (isNum(number[i]))
		{
			if (atof(number[i].c_str()) > 1000 || atof(number[i].c_str()) < -1000)
				cout << "ERROR: " << number[i] << " is not a legal number" << endl;
			else
			{
				result += atof(number[i].c_str());
				right++;
			}
		}
		else
			cout << "ERROR: " << number[i] << " is not a legal number"<<endl;
	}
	cout << "The average of " << right << " numbers is ";
	cout.precision(2);
	cout.setf(ios::fixed);
	if (right == 0)
		cout << "Undefined";
	else
		cout << result / right;
	system("pause");
	return 0;
}