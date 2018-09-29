
//Працюючий приклад

#include <iostream>
using namespace std;
class A;
typedef void (A::*func)(void);
class A {
public:
	func m[2];
	void init() {
		m[0] = &A::me1;
		m[1] = &A::me2;
	}
	void me1(void) { cout << "In method 1" << endl; }
	void me2(void) { cout << "In method 2" << endl; }
	void doit(int k)
	{
		func p = this->m[k - 1];
		(this->*p)();
	}
};

int main()
{
	A a;
	a.init();
	a.doit(1);
	a.doit(2);

	system("pause");
	return 0;
}