#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int num = 0, gap = 0, start = 0;
	cin >> num >> gap >> start;
	getchar();
	auto name = new string[num+1];
	vector<string> had;
	for (int i = 1; i < num + 1; i++)
		getline(cin, name[i]);
	if (start > num)
		cout << "Keep going..." << endl;
	else
		for (int i = start; i < num + 1; )
		{
			bool a = false;
			for (int j = 0; j < had.size(); j++)
				if (had[j] == name[i])
				{
					a = true;
					break;
				}
			if (!a)
			{
				had.push_back(name[i]);
				cout << name[i] << endl;
				i += gap;
			}
			else
				++i;
		}
	system("pause");
	return 0;
}