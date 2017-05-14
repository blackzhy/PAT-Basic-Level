#include<iostream>
#include<string>
using namespace std;

int main()
{
	int num1 = 0, num2 = 0;
	cin >> num1 >> num2;
	string grade;
	string answer;
	string student;
	getchar();
	getline(cin, grade);
	getline(cin, answer);
	int temp = 0;
	for (int i = 0; i < num1; i++)
	{
		getline(cin, student);
		for (int j = 0; j < num2 * 2-1; j+=2)
		{
			if (answer[j] == student[j])
				temp += grade[j]-'0';
		}
		cout << temp << endl;
		temp = 0;
	}
	system("pause");
	return 0;
}