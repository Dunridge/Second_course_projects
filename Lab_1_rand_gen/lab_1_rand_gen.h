//������ ������, �-24
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
	void meth01(void); //(*) //˳����� ������������ �����
	void meth02(void); //(*) //������������ ������������ �����
	void meth03(void); //(*) //����� Գ�������
	void meth04(void); //(*) //�������� ����������� �����������
	void meth05(void); //����� �ᒺ������
	void meth06(void); //������� �3 �����
	void meth07(void); //����� �������� ���������
	void meth08(void); //����� �����������
	void meth09(void); //����� ��������� ��� ����������� ���������� ��������
	void meth10(void); //����� ������ ��� ����������� �����-�������� ������� a > 1
	int menu(void);//a menu
	void show(int n);
	void clear(int n);
	void doit(int k);
};


