#include<string>
#include<iostream>

using namespace std;

int main()
{
	string str1, str2;
	string result;
	cin >> str1 >> str2;
	int i = 0, j = 0;
	while (j < str2.length())
	{
		if (str1[i] != str2[j])
		{
			result += str1[i];
			i++;
		}
		else
		{
			i++;
			j++;
		}
	}
	for (int m = i; m < str1.length(); m++)
		result += str1[m];
	//×ª»»´óĞ´
	for (int i = 0; i < result.length(); i++)
		if (result[i] <= 'z'&&result[i] >= 'a')
			result[i] -= 32;
	//É¾³ıÖØ¸´×Ö·û
	for (int i = 0; i < result.length(); i++)
	{
		for (int j = result.length()-1; j > i; j--)
			if (result[i] == result[j])
				result.erase(j, 1);
	}
	cout << result;
	system("pause");
	return 0;
}