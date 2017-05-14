#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a, b,result;
	int temp=0;
	bool low = false;
	cin >> a >> b;
	if (b.size() > a.size())
		while (a.size() < b.size())
			a = "0" + a;
	for(int i=1;i<b.size()+1;i++)
	{
		temp = 0;
		if (i % 2==0)
		{
			temp = b[b.size() - i] - a[a.size() - i];
			if (temp < 0)
				result += temp + 10 + '0';
			else
				result += temp + '0';
		}
		else
		{
			temp = (a[a.size() - i] - '0' + b[b.size() - i] - '0') % 13;
			if (temp < 10)
				result += temp + '0';
			else if (temp == 10)
				result += "J";
			else if (temp == 11)
				result += "Q";
			else if (temp == 12)
				result += "K";
		}
	}
	for (int i = result.size() - 1; i >= 0; i--)
		cout << result[i];
	system("pause");
	return 0;
}