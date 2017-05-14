#include<iostream>
#include<string>

using namespace std;

int main()
{
	auto count = new int[26];
	for (int i = 0; i < 26; i++)
		count[i] = 0;
	char c;
	int max = 0;
	while ((c = getchar()) != EOF)
	{
		if (c <= 'z'&&c >= 'a')
			count[c - 'a']++;
		else if (c <= 'Z'&&c >= 'A')
			count[c - 'A']++;
	}
	for (int i = 0; i < 26; i++)
		if (count[max] < count[i])
			max = i;
	cout << (char)('a' + max) << " " << count[max];
	system("pause");
	return 0;
}