#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()
{
	int c1, c2;
	cin >> c1 >> c2;
	int result = c2 - c1;
	int hour = 0, minute = 0, second = 0, mini = 0;
	string hour_s = "00", minute_s = "00", second_s = "00";

	mini = result % 100;
	result /= 100;//获得秒
	second = result % 60;
	result /= 60;//获得分钟
	minute = result % 60;
	result /= 60;//获得小时
	hour = result % 60;
	second += (mini + 50) / 100;//毫秒四舍五入

	for (int i = 0; i < 2; i++)
	{
		hour_s[1 - i] += hour % 10;
		minute_s[1 - i] += minute %10;
		second_s[1 - i] += second % 10;
		hour /= 10;
		minute /= 10;
		second /= 10;
	}
	cout << hour_s << ":" << minute_s << ":" << second_s;
	system("pause");
}