//Полінка Максим, К-24

//storing the labs in the Git repository...
//can't store in a Git Repository because the path of this one is ./LR1/...
//and the path of all the others are in ./Second_course_projects

//SOLUTION: copy the projects to Second_course_projects
// and redo the connections between these projects and connect LR1 file 
//to your GitHub repository...
#include <iostream>
#include "lab1.h"

using namespace std;

typedef void (Rand_gen::*func)(void);

	Rand_gen::Rand_gen()//ask why this isn't working ???
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

	void Rand_gen::meth01()
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

	void Rand_gen::meth02()
	{
		int x, c;
		//ask Onotsky about how to take a derivative 
	}

	void Rand_gen::meth03()
	{
		//mod M - is % M
		int x_prev, x, x_next;//initialize
		for (int k = 0; k < 10; k++)
		{

		}
	}

	void Rand_gen::meth04()//(*)
	{

	}

	void Rand_gen::meth05()
	{

	}

	void Rand_gen::meth06()
	{

	}

	void Rand_gen::meth07()
	{

	}

	void Rand_gen::meth08()
	{

	}

	void Rand_gen::meth09()
	{

	}

	void Rand_gen::meth10()
	{

	}

	int Rand_gen::menu(void)
	{
		int func_num;
		cout << "Please, enter the number of the method: " << endl;
		cin >> func_num;
		return func_num;
	}

	int main()
	{
		int k;
		Rand_gen obj;
		do
		{
			k = obj.menu();
			if (k == 0) break;
			obj.methods[k]();
		} while (true);
		
		return 0;
	}