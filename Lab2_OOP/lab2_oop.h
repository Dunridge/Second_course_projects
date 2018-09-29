
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
	void method_1(); // �������� ���䒺���� ����� ����� ������� �������� [����, �.2, �. 336].
	void method_2(); // �������� ���䒺���� ����� ����� ������� �����-���� [����, �.2, �. 340].
	void method_3(); // �������� ���䒺���� ����� ����� ������� ������� [����, �.2, �. 344].
	void method_4(); // �������� ���䒺���� ����� ����� ������� ��������� [����, �.2, �. 347�350].
	void method_5(); // ���������� �������� �������� � ������� ������� (�������� ����) [����, �.2, �. 340].
	void method_6(); // ĳ����� ����� ����� ���������� ���� [����, �.2, �. 340].
	void method_7(); // �������� �������� ����� ������� ������ [������, �. 297].�������� �������� ����� ������� ������̳����� [������, �. 298].
	void method_8(); // �������� �������� ����� ������� ������̳����� [������, �. 298].
	void method_9(); // �������� �������� ����� ������� ����������������� [������, �. 298].
	void method_10(); // �������� �������� ����� ������� �������� (http://www.cse.iitk.ac.in/users/manindra/algebra/primality_v6.pdf).
	void choose_method(int n); // A menu for choosing methods. <--> doit function
	int menu(void);
	
private:
	longint a, b;
};
