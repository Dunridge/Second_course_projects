//Полінка Максим, К-24

//typedef void(*func)(void);

#include <iostream>


//typedef void (Rand_gen::*func)(void);

class Rand_gen
{
public:

	//(*) - do these;
	int c[10]{};
	func methods[10];

	//Rand_gen();
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
	//and maybe you have to add init function 
	void doit(int k);
};

