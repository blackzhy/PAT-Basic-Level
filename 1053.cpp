#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int num = 0, k = 0;
	double e = 0;
	cin >> num >> e >> k;
	auto userK = new int[num];
	auto count = new int[num];
	double temp = 0;
	double maybe = 0, certified = 0;
	for (int i = 0; i < num; i++)
	{
		count[i] = 0; temp = 0;
		cin >> userK[i];
		for (int j = 0; j < userK[i]; j++)
		{
			cin >> temp;
			if (temp < e)
				count[i]++;
		}
		if (count[i] > userK[i] / 2)
		{
			if (userK[i] > k)
				certified++;
			else
				maybe++;
		}
	}
	cout.precision(1);
	cout.setf(ios::fixed);
	cout << maybe / num*100 << "% " << certified / num*100<<"%";
	system("pause");
	return 0;
}