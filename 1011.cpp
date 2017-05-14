#include<iostream>
#include<string>
using namespace std;

int main()
{
	int count = 0;
	cin >> count;
	auto num1 = new long long int[count];
	auto num2 = new long long int[count];
	auto num3 = new long long int[count];
	for (int i = 0; i < count; i++)
		cin >> *(num1+i) >> *(num2+i) >> *(num3+i);
	for (int i = 0; i < count; i++)
		if (*(num1 + i) + *(num2 + i) > *(num3 + i))
			cout << "Case #" << i + 1 << ": " << "true"<<endl;
		else
			cout << "Case #" << i + 1 << ": " << "false"<<endl;
}