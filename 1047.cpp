#include<iostream>
#include<string>
using namespace std;

int main()
{
	int num = 0;
	cin >> num; getchar();
	int teamnum = 0, teamgrade = 0, member = 0, max = 0;
	int grade[1001];
	for (int i = 0; i < 1000; i++)
		grade[i] = -1;
	for (int i = 0; i < num; i++)
	{
		cin >> teamnum; getchar();
		cin >> member; getchar(); 
		cin >> teamgrade; getchar();
		if (grade[teamnum] == -1)
			grade[teamnum] = 0;
		grade[teamnum] += teamgrade;
	}
	for (int i = 0; i < 1000; i++)
	{
		if (grade[i] == -1)
			continue;
		else
			if (grade[max] < grade[i])
				max = i;
	}
	cout << max << " " << grade[max];
	system("pause");
	return 0;
}