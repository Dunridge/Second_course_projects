//Полінка Максим, К-24

/*
TODO:
(1)
(2)
(3)

*/

#include <iostream>
#include "LR1.h"

using namespace std;

typedef void (Rand_gen::*func)(void);

void Rand_gen::init()
{
	methods[0] = &Rand_gen::meth01;
	methods[1] = &Rand_gen::meth02;
	methods[2] = &Rand_gen::meth03;
	methods[3] = &Rand_gen::meth04;
	methods[4] = &Rand_gen::meth05;
	methods[5] = &Rand_gen::meth06;
	methods[6] = &Rand_gen::meth07;
	methods[7] = &Rand_gen::meth08;
	methods[8] = &Rand_gen::meth09;
	methods[9] = &Rand_gen::meth10;
}

//Rand_gen::Rand_gen()//ask why this isn't working ???
//{
//	methods[0] = &Rand_gen::meth01;
//	methods[1] = &Rand_gen::meth02;
//	methods[2] = &Rand_gen::meth03;
//	methods[3] = &Rand_gen::meth04;
//	methods[4] = &Rand_gen::meth05;
//	methods[5] = &Rand_gen::meth06;
//	methods[6] = &Rand_gen::meth07;
//	methods[7] = &Rand_gen::meth08;
//	methods[8] = &Rand_gen::meth09;
//	methods[9] = &Rand_gen::meth10;
//}

void Rand_gen::meth01(void)
{
	int x0 = 1, a = 23, b = 31, M = 71, x;
	double y;
	for (int k = 0; k < 10; k++)
	{
		x = (a * x0 + b) % M;
		y = (double)x / M;
		for (int k = 0; k < 10; k++)
		{
			if (y >= (double)k / 10 && y < (double)(k + 1) / 10) c[k]++;
			x0 = x;
		}
	}
}

void Rand_gen::meth02(void)
{
	cout << "Method02" << endl;
}

void Rand_gen::meth03(void)
{
	cout << "Method03" << endl;
}

void Rand_gen::meth04(void)//(*)
{
	cout << "Method04" << endl;
}

void Rand_gen::meth05(void)
{
	cout << "Method05" << endl;
}

void Rand_gen::meth06(void)
{
	cout << "Method06" << endl;
}

void Rand_gen::meth07(void)
{
	cout << "Method07" << endl;
}

void Rand_gen::meth08(void)
{
	cout << "Method08" << endl;
}

void Rand_gen::meth09(void)
{
	cout << "Method09" << endl;
}

void Rand_gen::meth10(void)
{
	cout << "Method10" << endl;
}

int Rand_gen::menu(void)
{
	int func_num;
	cout << "Please, enter the number of the method: " << endl;
	cin >> func_num;
	return func_num;
}

void Rand_gen::doit(int k)
{
	func p = this->methods[k - 1];
	(this->*p)();
}

int main()
{
	int k;
	Rand_gen obj;
	do
	{
		k = obj.menu();
		if (k == 0) break;
		obj.doit(k);
	} while (true);
	return 0;
}

