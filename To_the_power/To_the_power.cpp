
#include <iostream>

using namespace std;

int pow(int exponent, float base)
{
	int result;
	while (exponent != 0)
	{
		result *= base;
		--exponent;
	}

	return result;
}

int main()
{
	int exponent;
	float base;
	cout << "Enter the power to which you want to raise the number: ";
	cin >> exponent;
	cout << "Enter the number that you want to raise to the power of " << exponent << ": " << endl;
	cin >> base;
	cout << "The result is " << pow(exponent, base) << endl;
	return 0;
}

