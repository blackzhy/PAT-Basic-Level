#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

bool isPrimeNumber(int num)
{
	for (int i = 3; i <= sqrt(num); i++)
	{
		if (num%i == 0)
			return false;
		i++;
	}
	return true;
}

int main()
{
	int n = 0;
	int count = 0;
	vector<int> primeNumber;
	cin >> n;
	if (n < 3)
	{
		cout << 0;
		return  0;
	}
	for (int i = 3; i <= n - 2; i++)
	{
		if (isPrimeNumber(i) && isPrimeNumber(i + 2))
			count++;
		i++;
	}
	cout << count;
	system("pause");
	return  0;
}