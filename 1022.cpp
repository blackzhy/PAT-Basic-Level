#include<iostream>
#include<string>

using namespace std;

int main()
{
	unsigned int num1 = 0, num2 = 0, changeNum = 0;
	cin >> num1 >> num2 >> changeNum;
	int num = num1 + num2;
	string result;
	while (num / changeNum != 0)
	{
		result += (char)(num%changeNum + '0');
		num /= changeNum;
	}
	result += (char)(num%changeNum + '0');
	for (int i = result.length() - 1; i >= 0; i--)
		cout << result[i];
	system("pause");
	return 0;
}