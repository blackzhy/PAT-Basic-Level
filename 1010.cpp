#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int x = 0, index = 0;
	vector<int> result;
	while (cin >> x >> index)
	{
		if (index == 0)
			break;
		else
		{
			result.push_back(x * index);
			result.push_back(index - 1);
		}
	}
	if (result.size() == 0)
		cout << "0 0";
	else
		for (int i = 0; i < result.size(); i++)
		{
			cout << result[i];
			if (i != result.size() - 1)
				cout << " ";
		}
	system("pause");
	return 0;
}