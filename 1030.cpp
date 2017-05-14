#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n, p;
	cin >> n >> p;
	auto arr = new int[n];
	int max = 0;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr+n);

	int start = 0, end = n-1;
	for(;end>= start;end--)
	{
		for (start = 0; end >= start; start++)
		{
			if (arr[end] <= arr[start] * p)
			{
				if(max<end-start+1)
					max=end - start + 1;
				break;
			}
		}
	}

	cout << max;
	system("pause");
	return 0;
}