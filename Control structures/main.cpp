#include<iostream>
using namespace std;

//#define TEPERATURE
//#define OR
//#define CALCULATOR_1
//#define CALCULATOR_2


void main()
{
	setlocale(LC_ALL, "");
#ifdef TEMPERATURE
	int temperature;
	cout << "������� ����������� �������: ";cin >> temperature;
	if (temperature > 0)
	{
		cout << "�� ����� �������" << endl;
	}
	else
	{
		cout << "�� ����� �������" << endl;
	}
#endif // TEMPERATURE
#ifdef OR
	int n;
	cout << "������� �����: ";cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "���� ��������!";
	}
	else
	{
		cout << "�� ������������!";
	}
#endif // OR
#ifdef CALCULATOR_1
	double a, b;
	char s;
	cout << "������� ������� �������������� ��������� ";cin >> a >> s >> b;
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;

	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;

	}
	else
	{
		cout << "������!" << endl;
	}
#endif
#ifdef CALCULATOR_2
	double a, b;
	char s;
	cout << "������� ������� �������������� ��������� ";cin >> a >> s >> b;
	switch (s)
	{
	case '+':cout << a << "+" << b << "=" << a + b << endl;break;
	case '-':cout << a << "-" << b << "=" << a - b << endl;break;
	case'/':
		if (b != 0)cout << a << "/" << b << "=" << a / b << endl;
		else cout << "������ ������ �� 0!" << endl;
		break;
	case'*':cout << a << "*" << b << "=" << a * b << endl;break;
	default:cout << "������ �� ����� ������ ��������������� �����!" << endl;
	}
#endif // CALCULATOR_2

	




	
}