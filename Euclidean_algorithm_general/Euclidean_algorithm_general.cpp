//Полінка Максим, К-24

#include <iostream>

using namespace std; 

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int main()
{
	int a, b;
	cout << "Please, enter the number a: ";
	cin >> a;
	cout << endl;
	cout << "Please, enter the number and b: "; 
	cin >> b;
	cout << endl;
	cout << "The gcd of these two numbers is: " << gcd(a, b) << endl;
	system("pause");
    return 0;
}

