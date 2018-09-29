//Полінка Максим, К-24
#pragma once

#include <iostream>
class Rand_gen;
typedef void (Rand_gen::*func)(void);
class Rand_gen
{
public:
	//(*) - do these;
	int c[10]{};//counter that shows us the frequencies...
	func methods[10];//changed here...
	const int N = 100;
	void init();//initializes the array
	void euclidian_meth(int a, int b, int &d, int &x, int &y);//d -gcd; x,y - solutions 
	int mod_inverse(int a, int m);//inverses mod values 
	void meth01(void); //(*) //Лінійний конгруентний метод
	void meth02(void); //(*) //Квадратичний конгруентний метод
	void meth03(void); //(*) //Числа Фібоначчі
	void meth04(void); //(*) //Обернена конгруентна послідовність
	void meth05(void); //Метод об’єднання
	void meth06(void); //Правило “3 сігма”
	void meth07(void); //Метод полярних координат
	void meth08(void); //Метод співвідношень
	void meth09(void); //Метод логарифму для генерування показового розподілу
	void meth10(void); //Метод Аренса для генерування гамма-розподілу порядку a > 1
	int menu(void);//a menu
	void show(int n);
	void clear(int n);
	void doit(int k);
};


