#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<string> S;
	string temp;
	int num;
	cin >> num;
	while (cin>>temp)
	{
		for (int i = 0; i < temp.length(); i++)
		{
			if (temp[i] != 'A' || temp[i] != 'P' || temp[i] != 'T')
			{
				cout << "NO";
				break;
			}
		}
		S.push_back(temp);
	}
	for (int  i = 0; i < S.size(); i++)
	{
		if (S[i].find("PAT") != string::npos)
		{

		}

		
	}
	system("pause");
	return 0;
}