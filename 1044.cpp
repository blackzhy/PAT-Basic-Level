#include<iostream>
#include<string>
#include <stdlib.h>


using namespace std;

int main()
{
	string  huoxing1s[13]= {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
	string  huoxing2s[12] = { "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
	int num = 0;
	cin >> num;
	getchar();
	string input;
	int temp=0;
	for (int i = 0; i < num; i++)
	{
		temp = 0;
		getline(cin, input);
		if (input[0] >= '0'&&input[0] <= '9')
		{
			temp = atoi(input.c_str());
			if (temp > 12)
			{
				if (temp % 13==0)
					cout << huoxing2s[temp / 13 - 1] << endl;
				else
					cout << huoxing2s[temp / 13 - 1] << " " << huoxing1s[temp % 13] << endl;
			}
			else
				cout<< huoxing1s[temp % 13] << endl;
		}
		else
		{
			if (input.size() == 7)
			{
				for (int j = 0; j < 13; j++)
					if (huoxing1s[j] == input.substr(4, 7))
						temp += j;
				for (int j = 0; j < 12; j++)
					if (huoxing2s[j] == input.substr(0, 3))
						temp += (j + 1) * 13;
			}
			else
			{
				for (int j = 0; j < 13; j++)
					if (huoxing1s[j] == input.substr(0,3))
						temp += j;
				for (int j = 0; j < 12; j++)
					if (huoxing2s[j] == input.substr(0, 3))
						temp += (j + 1) * 13;
			}
			cout << temp<<endl;
		}
	}
	system("pause");
	return 0;
}