#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	string start;
	int num = 0, count = 0;
	cin >> start >> num >> count;
	vector<string> source[3];
	vector<string>result;
	string address, data, next;
	for (int i = 0; i < num; i++)
	{
		cin >> address >> data >> next;
		source[0].push_back(address);
		source[1].push_back(data);
		source[2].push_back(next);
	}
	address = start;
	while (address != "-1")
		for (int i = 0; i < num; i++)
			if (source[0][i] == address)
			{
				result.push_back(source[1][i]);
				address = source[2][i];
			}
	for (int i = 0; i < num; i++)
		cout << result[i];
	//for(int i=0;i<num-count;i+=count)

	system("pause");
	return 0;
}