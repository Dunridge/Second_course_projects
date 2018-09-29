//Полінка Максим, К-24

/*
TODO:
(1)HELLO
(2)
(3)

*/

#include <iostream>
#include "lab_1_rand_gen.h"
//#include <stdio.h>
//#include <math.h>

using namespace std;

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

void Rand_gen::euclidian_meth(int a, int b, int &d, int &x, int &y)
{
	int u1 = 1, u2 = 0, u3 = a;
	int v1 = 0, v2 = 1, v3 = b;
	while (v3 > 0)
	{
		int q = u3 / v3;
		int t1 = u1 - v1*q, t2 = u2 - v2*q, t3 = u3 - v3*q;
		u1 = v1;
		u2 = v2;
		u3 = v3;
		v1 = t1;
		v2 = t2;
		v3 = t3;
	}
	x = u1;
	y = u2;
	d = u3;
}

int Rand_gen::mod_inverse(int a, int m)
{
	int d, x, y;
	euclidian_meth(a, m, d, x, y);
	if (d == 1)
	{
		if (x < 0)
		{
			return x + m;
		}
		return x;
	}
	else
	{
		cout << "inverse mod doesn't exist" << endl;
		return 0;
	}
}

//(*) - done with the help of a teacher...
//(**) - done by myself...

void Rand_gen::meth01(void)//(*)
{
	int x0 = 1, a = 23, b = 31, M = 71, x;//find the right parameters by yourself 
	double y;
	for (int k = 0; k < N; k++)
	{
		x = (a * x0 + b) % M;
		y = (double)x / M;
		c[(int)(y * 10)]++;
		x0 = x;
	}
}

void Rand_gen::meth02(void)//(**) ???
{
	int x0 = 1, a = 2828, b = 3131, d = 18, M = 3636, x;//find the right parameters by yourself 
	double y;
	for (int k = 0; k < N; k++)
	{
		x = (d*x0*x0 + a*x0 + b) % M;
		y = (double)x / M;
		c[(int)(y * 10)]++;
		x0 = x;
	}
}

void Rand_gen::meth03(void) //(**) //find the right parameters by yourself 
{
	int x0 = 1, M = 12, x;
	x = (int)(x0 + x) % M;
	c[(int)x]++;
	x0 = x;
}

void Rand_gen::meth04(void)//(*) 
{
	int x0 = 1, a = 23, b = 31, M = 71, x;//find the right parameters by yourself 
	double y;
	for (int k = 0; k < N; k++)
	{
		x = (a * mod_inverse(x0, M) + b) % M;
		y = (double)x / M;
		c[(int)(y * 10)]++;
		x0 = x;
	}
}

void Rand_gen::meth05(void) //(**) ???????????????
{
	int x0 = 1, y0 = 1, a = 23, b = 31, M = 71, x;//find the right parameters by yourself 
	double y;
	for (int k = 0; k < N; k++)
	{
		x = (x0 - y0) % M;
		y = (double)x / M;
		c[(int)(y * 10)]++;
		x0 = x;
	}
}

void Rand_gen::meth06(void)//(**)
{
	int m = 12, disp = 0, sum, x;
	double y;
	for (int k = 0; k < N; k++)
	{
		x = m + (sum - 6)*disp;
		//???
	}
	cout << "Method06" << endl;
}

void Rand_gen::meth07(void)//???
{
	int U1, U2, V1, V2;
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
	/*int con = 0.9;
	double X, Y, V;
	do
	{
	Y = tan(M_PI*meth01());
	X = sqrt(2 * con - Y) + con - 1;
	if (X>0)
	{
	V = meth01();
	}
	} while ();*/
}

int Rand_gen::menu(void)
{
	int func_num;
	cout << "Please, enter the number of the method: " << endl;
	while (true)
	{
		cin >> func_num;
		if (!isnan(func_num) && func_num < 11 && func_num > 0)
		{
			throw "Please, enter only a number.\n";
		}
		else
		{
			break;
		}
	}
	return func_num;
}

void Rand_gen::doit(int k)
{
	func p = this->methods[k - 1];
	(this->*p)();
}

void Rand_gen::show(int n)
{
	if (n <= 5)
	{
		cout << "Interval   Frequency " << endl;
		for (int i = 1; i < 10; i++)
		{
			printf("[0.%d;0.%d]   %f \n", i - 1, i, (float)c[i - 1] / N);
		}
		//[0.9; 1.0]
	}
	else if (n >= 6 && n <= 8)
	{
		for (int i = 1; i < 10; i++)//change the for loop 
		{
			printf("[0.%d;0.%d]   %f \n", i - 4, i + 1, (float)c[i - 1] / N);
		}
	}
	else if (n == 9 || n == 10)
	{
		for (int i = 1; i < 10; i++)
		{

		}
	}
}

void Rand_gen::clear(int n)
{
	if (n <= 5)
	{
		for (int i = 0; i < 10; i++)
		{
			c[i] = 0;
		}
	}
}

int main()
{
	int k;
	Rand_gen obj;
	obj.init();
	do
	{
		k = obj.menu();
		if (k == 0) break;
		obj.doit(k);
		obj.show(k);
		obj.clear(k);
	} while (true);
	return 0;
}