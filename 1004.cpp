//1004. �ɼ�����(20)
//ʱ������
//400 ms
//�ڴ�����
//65536 kB
//���볤������
//8000 B
//�������
//Standard
//����
//CHEN, Yue
//����n��ѧ����������ѧ�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ����������ѧ�š�
//
//�����ʽ��ÿ�������������1��������������ʽΪ
//
//��1�У�������n
//��2�У���1��ѧ�������� ѧ�� �ɼ�
//��3�У���2��ѧ�������� ѧ�� �ɼ�
//... ... ...
//��n + 1�У���n��ѧ�������� ѧ�� �ɼ�
//����������ѧ�ž�Ϊ������10���ַ����ַ������ɼ�Ϊ0��100֮���һ�����������ﱣ֤��һ�����������û������ѧ���ĳɼ�����ͬ�ġ�
//�����ʽ����ÿ�������������2�У���1���ǳɼ����ѧ����������ѧ�ţ���2���ǳɼ����ѧ����������ѧ�ţ��ַ�������1�ո�
//
//����������
//3
//Joe Math990112 89
//Mike CS991301 100
//Mary EE990830 95
//���������
//Mike CS991301
//Joe Math990112

#include<iostream>
#include<string>
using namespace std;

struct student
{
	string name;
	string number;
	int grade;
}student;

int main()
{
	int index_low = 0;
	int index_high = 0;
	int num = 0;
	cin >> num;
	auto ptr = new struct student[num];
	for (int i = 0; i < num; i++)
		cin >> (ptr+i)->name >> (ptr + i)->number >> (ptr + i)->grade;
	for (int i = 0; i < num; i++)
	{
		if ((ptr + i)->grade >(ptr + index_high)->grade)
			index_high = i;
		if ((ptr + i)->grade < (ptr + index_low)->grade)
			index_low = i;
	}
	cout<< (ptr + index_high)->name<<" " << (ptr + index_high)->number<<endl;
	cout << (ptr + index_low)->name << " " << (ptr + index_low)->number;
}