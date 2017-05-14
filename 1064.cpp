#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	auto number = new string[num];
	vector<int> result;
	vector<int> friendly;
	for (int i = 0; i < num; i++)
	{
		cin >> number[i];
		result.push_back(0);
		for (int j = 0; j < number[i].length(); j++)
			result[i] += number[i][j] - '0';
	}
	sort(result.begin(), result.end());
	vector<int>::iterator itr = result.begin();
	while (itr != result.end()-1)
	{
		if (*itr == *(itr + 1))
			itr = result.erase(itr);
		else
			itr++;
	}
	cout << result.size() << endl;
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i];
		if (i != result.size() - 1)
			cout << " ";
	}
	system("pause");
	return 0;
}