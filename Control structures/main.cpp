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
	cout << "Введите температуру воздуха: ";cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице холодно" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}
#endif // TEMPERATURE
#ifdef OR
	int n;
	cout << "Введите число: ";cin >> n;
	if (n > 0 && n < 10)
	{
		cout << "Цель поражена!";
	}
	else
	{
		cout << "Вы промахнулись!";
	}
#endif // OR
#ifdef CALCULATOR_1
	double a, b;
	char s;
	cout << "Введите простое арифметическое выражение ";cin >> a >> s >> b;
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
		cout << "Ошибка!" << endl;
	}
#endif
#ifdef CALCULATOR_2
	double a, b;
	char s;
	cout << "Введите простое арифметическое выражение ";cin >> a >> s >> b;
	switch (s)
	{
	case '+':cout << a << "+" << b << "=" << a + b << endl;break;
	case '-':cout << a << "-" << b << "=" << a - b << endl;break;
	case'/':
		if (b != 0)cout << a << "/" << b << "=" << a / b << endl;
		else cout << "Нельзя делить на 0!" << endl;
		break;
	case'*':cout << a << "*" << b << "=" << a * b << endl;break;
	default:cout << "Ошибка на этапе выбора арифметического знака!" << endl;
	}
#endif // CALCULATOR_2

	




	
}