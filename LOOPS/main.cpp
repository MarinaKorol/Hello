#include <iostream>
#include<conio.h>
using namespace std;

//#define WHILE_1
//#define WHILE_2
//#define POLINDROM
//#define LUCKY_TICKET
#define Escape 27
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	int n;//���������� ��������
	int i = 0;//������� �����
	cout << "������� ���������� ��������: ";cin >> n;
	while (i < n)
	{
		cout << i << "Hello, World!\n";
		i++;
	}
#endif // WHILE_1
#ifdef WHILE_2
	int n;
	cout << "������� ���������� �������� ";cin >> n;
	while (n)
	{
		cout << n << "\t";
		n--;
	}
	cout << endl;

#endif
#ifdef POLINDROM
	int number;
	int reverse = 0;
	cout << "������� �����: ";cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10;//��������� ����� ��� ���������� �������� �������
		reverse += buffer % 10;
		buffer /= 10;//������� ���������� ����� ������� ������
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "����� ���������!" << endl;
	}
	else
	{
		cout << "��� ������� �����" << endl;
	}
#endif // POLINDROM
#ifdef LUCKY_TICKET
	int number;
	cout << "������� ����� ������";cin >> number;
	int sum1, sum2;
	sum1 = sum2 = 0;
	while (number >= 1000)
	{
		sum1 += number % 10;
		number /= 10;
	}
	while (number)
	{
		sum2 += number % 10;
		number /= 10;
	}
	if (sum1 == sum2)
	{
		cout << "���������� �����!" << endl;
	}
	else
	{
		cout << "� ������ ���!" << endl;
	}

#endif // LUCKY_TICKET
	char key; //��� �������
	do
	{
		key = _getch();//��� �������. ��� ������� ������� ������� � ���������� ASCII-��� ������� ������
		cout << (int)key << "\t" << key << endl;
	} while (key!=Escape);


	
}