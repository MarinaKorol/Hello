#include<iostream>
using namespace std;

//#define FOR_BASIC
//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACHI_1
//#define SIMPLE

void main()
{
	setlocale(LC_ALL, "");
	
#ifdef FOR_BASIC
	int n;
	cout << "������� ���������� ��������: " << endl;cin >> n;
	for (int i = 0;i < n;i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_BASIC
	//������������ ������ ����� � ����������, � ��������� ���������
	//��������� ����� �����;5!= 1 * 2 * 3 * 4 * 5 = 120;
	
#ifdef FACTORIAL 
	int n;
	double f = 1;
	cout << "������� �����: ";cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cout << i << "!= ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif // FACTORIAL
	
#ifdef POWER
	double a;
	int n;
	double N = 1;
	cout << "������� �����, ���������� � �������: ";cin >> a;
	cout << "������� �������, � ������� ������ �������� �����: ";cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0;i < n; i++)

	{
		N *= a;

	}
	cout << N << endl;
#endif // POWER
#ifdef ASCII
	cout << "������� ASCII-��������: \n";
	setlocale(LC_ALL, "C");
	for (int i = 0;i < 256;i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
	setlocale(LC_ALL, "");
	cout << "�����!";
	cout << endl;
#endif // ASCII

#ifdef FIBONACHI_1
	int n;
	cout << "������� ���������� �����: ";cin >> n;
	for (int a = 0, b = 1, c = a + b;a < n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif // FIBONACHI_1

#ifdef SIMPLE
	int n;
	cout << "������� ���������� �����: ";cin >> n;
	for (int i = 2;i < n;i++)
	{
		bool simple = true;
		for (int j = 2;j < i;j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)cout << i << "\t";
	}
#endif // SIMPLE


}