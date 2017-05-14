#include<iostream>
#include<string>

using namespace std;

int main()
{
	string week[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
	string S[4];
	for (int i = 0; i < 4; i++)
		cin >> S[i];
	char cha[3];
	int index = 0;
	int start = 0;
	
	
	for (int i = 0; i < S[0].length() && i < S[1].length(); i++)
	{
		if (S[0][i] <= '9' && S[0][i] >= '0')
			continue;
		if (S[1][i] <= '9' && S[1][i] >= '0')
			continue;
		if (S[0][i] > 'N' || S[0][i] < 'A')
			continue;
		if (S[1][i] > 'N' || S[1][i] < 'A')
			continue;
		if (S[0][i] == S[1][i])
		{
			cha[0] = S[0][i];
			start = i;
			break;
		}
	}

	for (int i = start+1; i < S[0].length() && i < S[1].length(); i++)
	{
		if ((S[0][i] > 'N' || S[0][i] < 'A')&&(S[0][i] < '0' || S[0][i] > '9'))
			continue;
		if ((S[1][i] > 'N' || S[1][i] < 'A') && (S[1][i] < '0' || S[1][i] > '9'))
			continue;
		if (S[0][i] == S[1][i])
		{
			cha[1] = S[0][i];
			break;
		}
	}

	for (int i = 0; i < S[2].length()&&i<S[3].length(); i++)
	{
		if ((S[2][i] > 'Z' || S[2][i] < 'A')&& (S[2][i] > 'z' || S[2][i] < 'a'))
			continue;
		if ((S[3][i] > 'Z' || S[3][i] < 'A') && (S[3][i] > 'z' || S[3][i] < 'a'))
			continue;
		if (S[2][i] == S[3][i])
		{
			index = i;
			break;
		}
	}
	
	cout << week[cha[0] - 'A']<<" ";
	if (cha[1] >= '0'&&cha[1] <= '9')
		cout << "0"<<cha[1] << ":";
	else if (cha[1] >= 'A'&&cha[1] <= 'N')
		cout << cha[1] - 'A' + 10 << ":";
	if (index <= 9)
		cout << "0" << index;
	else
		cout << index;
	system("pause");
	return 0;
}