#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
	string sa, sb;
	char a, b;
	cin >> sa >> a >> sb >> b;
	int numa = 0, numb = 0;
	int result = 0;
	for (int i = 0; i < sa.length(); i++)
		if (sa[i] == a)
			numa++;
	for (int i = 0; i < sb.length(); i++)
		if (sb[i] == b)
			numb++;
	for (int i = 0; i < numa; i++)
		result += (a-'0')*pow(10, i);
	for (int i = 0; i < numb; i++)
		result += (b-'0')*pow(10, i);
	cout << result;
}