//������ ������, �-24

#include <iostream>

class Rand_gen
{
public:
	//(*) - do these;
	int c[10]{};
	func methods[10];//changed here...
	Rand_gen();//write void init() instead of Rand_gen constructor
	void init();//initializes the array
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
	void doit(int k);
};


