#include<iostream>
using namespace std;
//#define ARITHMETICAL_OPERATORS
////#define ASSIGNMENT_OPERATOR
//#define INCREMENT_DECREMENT
#define COMPARISON_OPERATORS
//#define TASK1
//#define TASK2
//#define TASK3
#define TASK4

void main()
{
	setlocale(LC_ALL, "");
	#ifdef ARITHMETICAL_OPERATORS
	cout << 17 / 3;
	cout << 17 % 3;
	cout << 3 % 17;
	#endif
#ifdef ASSIGNMENT_OPERATOR
	int a, b, c;
	a=b=c=0;
	cout << a << b << c << endl;
#endif 
#ifdef INCREMENT_DECREMENT

#endif // INCREMENT_DECREMENT
#ifdef TASK1
	int i = 3;
	i = ++i + ++i;
	cout << i << endl;
#endif // TASK1
#ifdef TASK2
	int i = 3;
	i = i++ + 1 + ++i * 2;
	cout << i << endl;

#endif // TASK2
#ifdef TASK3
	int i = 3;
	i = ++i + 1 + ++i *= 2;
	cout << i << endl;

#endif // TASK3
#ifdef TASK4
	int i = 3;
	i += ++i + 1 + ++i *= 2;
	cout << i << endl;

#endif // TASK4

}
