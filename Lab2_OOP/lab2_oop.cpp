
#include "lab2_oop.h"

using namespace std;

void main()
{
	int k;
	longint a, b;
	cout << "Please, enter the values on which you want your operations to be performed: " << endl;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	dynamic_ints dynam_int(a,b);
	do 
	{
		k = dynam_int.menu();
		if (k == 0) break;
		dynam_int.choose_method(k);
		//dynam_int.show();
		//dynam_int.clear();
	} while (true);

	system("pause");
}


dynamic_ints::dynamic_ints(longint a, longint b)// ask the teacher if the user needs to specify the numbers
{
	this->a = a;
	this->b = b;
}

//that means that you don't need any parameters here
void dynamic_ints::method_1()//method_1
{

}

void dynamic_ints::method_2()
{
}

void dynamic_ints::method_3()
{
}

void dynamic_ints::method_4()
{
}

void dynamic_ints::method_5()
{
}

void dynamic_ints::method_6()
{
}

void dynamic_ints::method_7()
{
}

void dynamic_ints::method_8()
{
}

void dynamic_ints::method_9()
{
}

void dynamic_ints::method_10()
{
}

void dynamic_ints::choose_method(int n)
{
	while (true)
	{
		switch (n)
		{
		case 0:
			//finish the program
			break;
		case 1:
			method_1();
			//this time do them void and increase the array from inside the class
			// if you can't do that (you can), do the same thing as in project Lab1_OOP
			break;
		case 2:
			method_2();
			break;
		case 3:
			method_3();
			break;
		case 4:
			method_4();
			break;
		case 5:
			method_5();
			break;
		case 6:
			method_6();
			break;
		case 7:
			method_7();
			break;
		case 8:
			method_8();
			break;
		case 9:
			method_9();
			break;
		case 10:
			method_10();
			break;
		}
	}
}

int dynamic_ints::menu(void)
{
	int func_num;
	cout << "Please, enter the number of the method: " << endl;
	while (true)
	{
		cin >> func_num;
		if (func_num < 11 && func_num >= 0)
		{
			return func_num;
		}
		else
		{
			throw "Please, enter only a number.\n";
			break;
		}
	}
	return func_num;
}



longint::longint()
{
	m.push_back(0);
}

longint::longint(const longint & l)
{
	for (int i = 0; i < l.m.size(); i++)
	{
		m.push_back(l.m[i]);
	}
}

longint::longint(const char * s)
{
	int n = strlen(s);
	for (int i = 0; i < n; i++)
		m.push_back(s[n - i - 1] - '0');
}

longint & longint::operator=(const longint & l)
{
	m.clear();
	for (int i = 0; i < l.m.size(); i++)
	{
		m.push_back(l.m[1]);
		return *this;
	}
}

istream & operator >> (istream & s, longint & l)
{
	char t[100];
	s >> t;
	int n = strlen(t);
	for (int i = 0; i < n; i++)
		l.m.push_back(t[n - i - 1] - '0');
	return s;
}

ostream & operator<<(ostream & s, const longint & l)
{
	int n = l.m.size();
	for (int i = 0; i < l.m.size(); i++)
		s << l.m[n - i - 1] + '0';
	return s;
}

longint operator+(longint & l1, longint & l2)
{
	longint t;
	int n1 = l1.m.size();
	int n2 = l2.m.size();
	if (n1 < n2)
	{
		for (int i = 0; i < n2 - n1; i++)
			l1.m.push_back('0');
		n1 = n2;
	}
	if (n2 < n1)
	{
		for (int i = 0; i < n1 - n2; i++)
			l2.m.push_back('0');
		n2 = n1;
	}
	int r = 0;
	int x;
	for (int i = 0;i < n1;i++)
	{
		x = l1.m[i] + l2.m[i] + r;
		if (x>=10)
		{
			r = 1;
			x %= 10;
		}
		t.m.push_back(x);
	}
	if (r > 0) t.m.push_back(1);
	return t;
}

longint operator-(longint & l1, longint & l2)
{
	longint t;
	int n1 = l1.m.size();
	int n2 = l2.m.size();
	if (n1 < n2)
	{
		for (int i = 0; i < n2 - n1; i++)
			l1.m.push_back('0');
		n1 = n2;
	}
	if (n2 < n1)
	{
		for (int i = 0; i < n1 - n2; i++)
			l2.m.push_back('0');
		n2 = n1;
	}
	int r = 0;
	int x;
	for (int i = 0; i < n1; i++)
	{
		x = l1.m[i] - l2.m[i] + r;
		if (x < 0)
		{
			x += 10; r = -1;
		}
		t.m.push_back(x);
	}
	return;
}

longint operator*(longint & l1, longint & l2)
{
	//in process...
	//will be detailed soon...
	return longint();
}
