#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() 
{
	vector<string> str;
	string temp;
	while (cin>>temp)
	{
		str.push_back(temp);
	}
	for (int i = str.size()-1; i >=0 ; i--)
	{
		if (i != 0)
			cout << str[i] << ' ';
		else
			cout << str[i];
	}
	system("pause");
}