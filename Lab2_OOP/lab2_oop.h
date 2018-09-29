
#include <iostream>
#include <vector>

using namespace std;

struct longint
{
	vector<char> m;
	longint();
	longint(const longint &l);
	longint(const char *s);
	longint& operator =(const longint &l);
	friend istream& operator >> (istream &s, longint &l);
	friend ostream& operator << (ostream &s, const longint &l);
	friend longint operator + (longint &l1, longint &l2);
	friend longint operator - (longint &l1, longint &l2);
	friend longint operator * (longint &l1, longint &l2);
};

class dynamic_ints
{
public:
	dynamic_ints(longint a, longint b); // ask the teacher if the user needs to specify the numbers
	void method_1(); // Множення невід’ємних цілих чисел методом Карацуби [Кнут, т.2, с. 336].
	void method_2(); // Множення невід’ємних цілих чисел методом Тоома-Кука [Кнут, т.2, с. 340].
	void method_3(); // Множення невід’ємних цілих чисел методом Шенхаге [Кнут, т.2, с. 344].
	void method_4(); // Множення невід’ємних цілих чисел методом Штрассена [Кнут, т.2, с. 347–350].
	void method_5(); // Обчислення оберненої величини з високою точністю (алгоритм Кука) [Кнут, т.2, с. 340].
	void method_6(); // Ділення цілих чисел алгоритмом Кука [Кнут, т.2, с. 340].
	void method_7(); // Перевірка простоти числа методом Лемера [Шнайер, с. 297].Перевірка простоти числа методом Рабіна–Міллера [Шнайер, с. 298].
	void method_8(); // Перевірка простоти числа методом Рабіна–Міллера [Шнайер, с. 298].
	void method_9(); // Перевірка простоти числа методом Соловея–Штрассена [Шнайер, с. 298].
	void method_10(); // Перевірка простоти числа методом Агравала (http://www.cse.iitk.ac.in/users/manindra/algebra/primality_v6.pdf).
	void choose_method(int n); // A menu for choosing methods. <--> doit function
	int menu(void);
	
private:
	longint a, b;
};
