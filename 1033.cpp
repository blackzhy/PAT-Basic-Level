#include<string>
#include<iostream>

using namespace std;

int main()
{
	string bad;
	string str;
	bool uplow=true;
	getline(cin, bad);
	getline(cin, str);
	//ÉÏµµ¼üÊÇ·ñËğ»µ¼ì²â
	for (int i = 0; i < bad.length(); i++)
	{
		if (bad[i] == '+')
		{
			uplow = false;
			bad.erase(i, 1);
			break;
		}
	}
	//¼ì²â´óĞ´×Ö·û
	if (!uplow)
	{
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] <= 'Z'&&str[i] >= 'A')
			{
				str.erase(i, 1);
				i = i-1;
			}
		}
	}
	//ÆäËû×Ö·û¼ì²â
	for (int i = 0; i < str.length(); i++)
	{
		for (int j = 0; j < bad.length(); j++)
		{
			if (bad[j] <= 'Z'&&bad[j] >= 'A')
			{
				if ((char)(bad[j] + 32) == str[i])
				{
					str.erase(i, 1);
					i--;
					break;
				}
			}
			if (bad[j] == str[i])
			{
				str.erase(i, 1);
				i--;
				break;
			}
		}
	}
	if (str.length() != 0)
		cout << str;
	else
		cout << endl;
	system("pause");
	return 0;
}