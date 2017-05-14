#include <iostream>
#include <string>

using namespace std;

int main()
{
	int number = 0;
	int weight[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int z = 0;
	char m[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
	bool flag = true;
	bool character = false;
	string IDtemp;
	cin >> number;
	for (int i = 0; i < number; i++)
	{
		cin >> IDtemp;
		if (IDtemp.length() != 18)
		{
			cout << IDtemp;
			flag = false;
			continue;
		}
		else
		{
			for (int j = 0; j < 17; j++)
			{
				if (IDtemp[j]<'0' || IDtemp[j]>'9')
				{
					cout << IDtemp << endl;
					flag = false;
					character = true;
					break;
				}
			}
			if (character)
			{
				character = false;
				continue;
			}
		}

		int temp = 0;
		for (int j = 0; j < 17; j++)
			temp += (IDtemp[j] - '0')*weight[j];
		z = temp % 11;
		if (IDtemp[17] != m[z])
		{
			cout << IDtemp<<endl;
			flag = false;
			continue;
		}
	}
	if (flag)
		cout << "All passed";
	system("pause");
	return 0;
}