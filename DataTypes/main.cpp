//DataTypes
#include<iostream>
using namespace std;

//#define DEMENSION_OF_DATA_TYPES
//#define VALUE_CHANGE
//#define CUP_OF_COFFEE
//#define TASK1
//#define TASK2
//#define TASK3
//#define TASK4


void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef DEMENSION_OD_DATA_TYPES
	/*cout << true << endl;
	cout << false << endl;
	cout << (bool)-0.0000000000001 << endl;*/
	cout << "ТИП ДАННЫХ INT" << endl;
	cout << sizeof(int) << endl;
	cout << INT_MIN << "..." << INT_MAX << endl;
	cout << 0 << "..." << UINT_MAX << endl;
	cout << "ТИП ДАННЫХ SHORT" << endl;
	cout << sizeof(short) << endl;
	cout << SHRT_MIN << "..." << SHRT_MAX << endl;
	cout << "0" << "..." << USHRT_MAX << endl;
	cout << "ТИП ДАННЫХ LONG" << endl;
	cout << sizeof(long) << endl;
	cout << LONG_MIN << "..." << LONG_MAX << endl;
	cout << "0" << "..." << ULONG_MAX << endl;
	cout << "ТИП ДАННЫХ LONGLONG" << endl;
	cout << sizeof(long long) << endl;
	cout << LLONG_MIN << "..." << LLONG_MAX << endl;
	cout << "0" << "..." << ULLONG_MAX << endl;
	cout << "Float" << endl;
	cout << sizeof(float) << endl;
	cout << FLT_MIN << "..." << FLT_MAX << endl;
	cout << "Double" << endl;
	cout << sizeof(double) << endl;
	cout << DBL_MIN << "..." << DBL_MAX << endl;

#endif // DEMENSION_OD_DATA_TYPES

#ifdef VALUE_CHANGE
	char a = 2;
	char b = 3;
	cout << (int)a << "\t" << (int)b << endl;
	char c = a;
	a = b;
	b = c;
	cout << (int)a << "\t" << (int)b << endl;
#endif // VALUE_CHANGE
#ifdef CUP_OF_COFFEE
	double price_of_coffee;
	cout << "Введите стоимость чашки кофе: "; cin >> price_of_coffee;
	int number_of_cups;
	cout << "Введите количество чашек:";cin >> number_of_cups;
	double total_price = price_of_coffee * number_of_cups;
	cout << "С Вас " << total_price << " рублей" << endl;
#endif // CUP_OF_COFFEE
		
#ifdef TASK1
	double money;
	cout << "Введите денежную сумму: ";cin >> money;cout << endl;
	int rubles = money;
	int cop = (money - rubles) * 100;
	cout << rubles << " рубля " << cop << " копеек" << endl;
#endif // TASK1
#ifdef TASK2
	cout << "Задание №1" << endl;
	int exercice_book = 0;
	double price = 3.55;
	double total_cost = 0;
	cout << "Введите количество тетрадей: ";cin >> exercice_book;cout << endl;
	cout << "Стоимость покупки составит " << exercice_book * price << " рублей" << endl;
#endif // TASK2
#ifdef TASK3
	int EB;
	double price_of_EB = 2.55, price_of_covers = 0.5;
	cout << "Введите количество тетрадей: ";cin >> EB;
	cout << endl;
	cout << "Сумма к оплате " << (double)EB * price_of_EB + (double)EB * price_of_covers << " рублей";
	cout << endl;
#endif // TASK3
#ifdef TASK4
int km;
double const rashod_v_litrah = 8.5, price=45.56;
cout << "Сколько километров до дачи?";cin >> km;
cout << "Вам понадобится на поезку на дачу тудаи обратоно " << (double)(km/rashod_v_litrah * price) * 2;
cout << endl;
#endif// TASK4
		





}