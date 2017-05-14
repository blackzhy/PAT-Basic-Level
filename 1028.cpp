#include<string>
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int number;
	cin >> number;
	int index1= 0, index2 = 0;
	string temp_name,temp_birth;
	string max = "1814/09/06", min = "2014/09/06";
	vector<string> name;
	vector<string> birthday;
	for (int i = 0; i < number; i++)
	{
		cin >> temp_name>>temp_birth;
		if (temp_birth<max || temp_birth > min)
			continue;
		else
		{
			name.push_back(temp_name);
			birthday.push_back(temp_birth);
		}
	}
	for (int i = 0; i < birthday.size(); i++)
	{
		if (birthday[i] < birthday[index1])
			index1 = i;
		else if (birthday[i] > birthday[index2])
			index2 = i;
	}
	if (name.size() == 0)
		cout << name.size();
	else
		cout << name.size() <<" "<< name[index1] <<" "<< name[index2];
	system("pause");
	return 0;
}