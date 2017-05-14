#include<iostream>
#include<string>
using namespace std;

int main()
{
	string num;
	cin >> num;
	int i = 0;
	int times[10] = {};
	while (num[i])
	{
		switch (num[i])
		{
		case '0':
			times[0]++; break;
		case '1':
			times[1]++; break;
		case '2':
			times[2]++; break;
		case '3':
			times[3]++; break;
		case '4':
			times[4]++; break;
		case '5':
			times[5]++; break;
		case '6':
			times[6]++; break;
		case '7':
			times[7]++; break;
		case '8':
			times[8]++; break;
		case '9':
			times[9]++; break;
		default:
			break;
		}
		i++;
	}
	for (int i = 0; i < 10; i++)
	{
		if (times[i] == 0)
			continue;
		cout << i << ":" << times[i]<<endl;
	}
	return 0;
}