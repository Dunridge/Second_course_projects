//������ ������, �-24

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
	//and maybe you have to add init function 
	void doit(int k);
};

