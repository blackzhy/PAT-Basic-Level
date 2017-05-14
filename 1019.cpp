#include<iostream>
#include<math.h>
#include<string>

using namespace std;

bool sort(string &number,string &maxS,string &minS)
{
	for (int i = 0; i < 4; i++)
	{
		int index = i; char temp = '0';
		for (int j = i; j < 4; j++)
		{
			if (number[j] > number[index])
				index = j;
		}
		temp = number[index];
		number[index] = number[i];
		number[i] = temp;
	}
	for (int i = 0; i < 4; i++)
	{
		maxS[i] = number[i];
		minS[i] = number[3 - i];
	}
	return true;
}

int Divide(int num, int & max, int & min)
{
	string number = "0000";
	int result = 0;
	string maxS = "0000", minS = "0000", resultS = "0000";
	for (int i = 0; i < 4; i++)
	{
		number[3 - i] += num % 10;
		num = num / 10;
	}
	sort(number, maxS, minS);
	max = atof(maxS.c_str());
	min = atof(minS.c_str());
	result = max - min;
	for (int i = 0; i < 4; i++)
	{
		resultS[3 - i] += result % 10;
		result = result / 10;
	}
	if (max - min == 0)
		cout << maxS << " - " << minS << " = " << "0000";
	else if (max - min == 6174)
		cout << maxS << " - " << minS << " = " << "6174";
	else
	{
		cout << maxS << " - " << minS << " = " << resultS <<endl;
		Divide(max - min, max, min);
	}
	return 0;
}

int main()
{
	int num;
	cin >> num;
	int  max = 0, min = 0;
	Divide(num, max, min);
	system("pause");
	return  0;
}