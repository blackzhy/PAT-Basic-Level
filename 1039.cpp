#include<iostream>
#include<string>	

using namespace std;

int main()
{
	string str1, str2;
	int num = 0, num2 = 0;
	getline(cin, str1);
	getline(cin, str2);
	for (int i = 0; i < str2.length(); i++)
	{
		for (int j = 0; j < str1.length(); j++)
		{
			if (str2[i] == str1[j])
			{
				str1.erase(j, 1);
				j--;
				str2.erase(i, 1);
				i--;
				break;
			}
		}
	}
	if (str2.length() == 0)
		cout << "Yes " << str1.length();
	else
		cout << "No " << str2.length();
	system("pause");
	return 0;
}