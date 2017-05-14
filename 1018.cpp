#include<iostream>
#include<string>

using namespace std;
enum game{C,J,B};

int Judge(char a, char b)
{
	if (a == b)
		return 0;
	if (a == 'C')
	{
		if (b == 'B')
			return -1;
		else if (b == 'J')
			return 1;
	}
	else if (a == 'J')
	{
		if (b == 'C')
			return -1;
		else if (b == 'B')
			return 1;
	}
	else if (a == 'B')
	{
		if (b == 'J')
			return -1;
		else if (b == 'C')
			return 1;
	}
}

int convert1(char a)
{
	if (a == 'B')
		return 0;
	else if (a == 'C')
		return 1;
	else if(a == 'J' )
		return 2;
}
char convert2(int a)
{
	if (a == 0)
		return 'B';
	else if (a == 1)
		return 'C';
	else if (a == 2)
		return 'J';
}

int main()
{
	int num;
	cin >> num;
	int a[3] = { 0 };
	int b[3] = { 0 };
	int va[3] = { 0 };
	int vb[3] = { 0 };
	char tempa, tempb;
	int maxa=0, maxb=0;
	for (int i = 0; i < num; i++)
	{
		cin >> tempa >> tempb;
		switch (Judge(tempa,tempb))
		{
		case -1:
			a[2]++;
			b[0]++;
			vb[convert1(tempb)]++;
			break;
		case 1:
			a[0]++;
			b[2]++;
			va[convert1(tempa)]++;
			break;
		default:
			a[1]++;
			b[1]++;
			break;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		if (va[i] > va[maxa])
			maxa = i;
		cout << a[i];
		if (i != 2)
			cout << " ";
		else
			cout << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		if (vb[i] > vb[maxb])
			maxb = i;
		cout << b[i];
		if (i != 2)
			cout << " ";
		else
			cout << endl;
	}
	cout << convert2(maxa) << " "<<convert2(maxb);
	system("pause");
}