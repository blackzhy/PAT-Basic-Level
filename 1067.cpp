#include<iostream>
#include<string>

using namespace std;

int main()
{
	string correct;
	int limit, time=0;
	string temp="";
	cin >> correct >> limit;
	getchar();
	getline(cin,temp);
	while (temp != "#")
	{
		if (temp == correct)
		{
			cout << "Welcome in" << endl;
			system("pause");
			return 0;
		}
		else
		{
			time++;
			cout << "Wrong password: " << temp << endl;
			if (time == limit)
			{
				cout << "Account locked" << endl;
				system("pause");
				return 0;
			}
		}
		getline(cin, temp);
	}
	system("pause");
	return 0;
}