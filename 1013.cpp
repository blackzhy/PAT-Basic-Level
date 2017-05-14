#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

bool isPrimeNumber(int num)
{
	if (num == 2)
		return true;
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num%i == 0)
			return false;
	}
	return true;
}

int main()
{
	int m = 0, n = 0;
	cin >> m >> n;
	int count = 0;
	vector<int> PrimeNumber;
	for (int i = 2; count<n; i++)
	{
		if (isPrimeNumber(i))
		{
			count++;
			if (count >= m)
				PrimeNumber.push_back(i);
		}
	}
	for (int i = 1; i <=PrimeNumber.size(); i++)
	{
		cout << PrimeNumber[i-1];
		if (i % 10 != 0)
		{
			if(i!=PrimeNumber.size())
				cout << " ";
		}
		else
			cout << endl;
	}
	system("pause");
	return  0;
}