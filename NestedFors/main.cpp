#include<iostream>
using namespace std;

//#define MULTIPLICATION_TABLE
//#define PIPHAGOR_TABLE
//#define SQAURE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define ROMBUS
//#define PLUS_MINUS_TABLE
//#define CHESS_BOARD
//#define UPPER_LEFT_ANGLE (char)218
//#define UPPER_RIGHT_ANGLE (char)191
//#define LOWER_LEFT_ANGLE (char)192
//#define LOWER_RIGHT_ANGLE (char)217
//#define HORIZONTAL_LINE (char)196
//#define VERTICAL_LINE (char)179
//#define WHITE_BOX (char)219
//#define BLACK_BOX ' '
void main()
{
	setlocale(LC_ALL, "");
#ifdef MULTIPLICATION_TABLE
	for (int i = 1;i <= 10;i++)
	{
		cout << "Таблица умножения на " << i << "\n";
		for (int j = 1;j <= 10;j++)
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10) cout << " ";
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout << i * j << endl;
		}
		cout << endl;
	}
#endif // MULTIPLICATION_TABLE
#ifdef PIPHAGOR_TABLE
	for (int i = 1;i <= 10;i++)
	{
		for (int j = 1;j <= 10;j++)
		{
			cout.width(5);
			cout << i * j;
		}
		cout << endl;
	}
#endif // PIPHAGOR_TABLE
	 //Геометрические задачки

	int n;
	cout << "Введите количество здездочек: ";cin >> n;
#ifdef SQAURE
	for (int i = 0;i < n;i++)
	{
		for (int i = 0;i < n;i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQAURE
#ifdef TRIANGLE_1
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j <= i;j++)//Или можно j<i, но во внешнем for добавить n+1.
		{
			cout << "* ";

		}
		cout << endl;
	}
#endif // TRIANGLE_1
#ifdef TRIANGLE_2
	for (int i = 0;i < n;i++)
	{
		for (int j = i;j < n;j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2
#ifdef TRIANGLE_3
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < i;j++)cout << "  ";
		for (int j = i;j < n;j++)cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_3
#ifdef TRIANGLE_4
	for (int i = 1;i < n + 1;i++)
	{
		for (int j = i;j < n;j++)cout << "  ";
		for (int j = 0;j < i;j++)cout << "* ";
		cout << endl;

	}
#endif // TRIANGLE_4

#ifdef ROMBUS
	for (int i = 0;i < n;i++)
	{
		for (int j = i;j < n;j++)
			cout << " ";
		cout << "/";
		for (int j = 0;j < i;j++)
			cout<<"  ";
		cout<<"\\";
		cout <<endl;
	}
	for (int i = 0;i <n;i++)
	{
		for (int j = 0;j <= i;j++)
			cout << " ";
		cout << "\\";
		for (int j = 0;j < (n-1-i);j++)
		cout << "  ";
		cout << "/";
		cout << endl;
	}

#endif // ROMBUS
	
#ifdef PLUS_MINUS_TABLE
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			//if ((i + j) % 2 == 0);cout << "+ ";else cout << "- ";
			//((i + j) % 2 == 0)?cout << "+ ": cout << "- ";
			//(i + j) % 2 == 0?cout << "+ ": cout << "- ";
			//cout << ((i + j) % 2 == 0 ? "+ " : "- ");
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
	
#endif // PLUS_MINUS_TABLE
#ifdef CHESS_BOARD
	setlocale(LC_ALL, "C");
	n++;
	for (int i = 0;i <= n;i++)
	{
		for (int j = 0;j <= n;j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else
			{
				if ((i + j) % 2 == 0)cout << WHITE_BOX << WHITE_BOX;//можно еще сделать cout<<((i+j)%2==0?WHITE_BOX:BLACK_BOX);
				else cout << BLACK_BOX << BLACK_BOX;				//но в define нужен переход в 16-ричную систему
			}														// "\xDB\xDB" для WHITE_BOX и "\х20\х20"
		}
		cout << endl;
	}
#endif // CHESS_BOARD

}