#include<iostream>
using namespace std;
//������Ʒ������
class makedrink
{
public:
	//��ˮ
	virtual void water() = 0;
	//����
	virtual void brew() = 0;
	//���뱻��
	virtual void putincup() = 0;
	//���븨��
	virtual void putsomething() = 0;
	void dowork()
	{
		water();

		brew();

		putincup();

		putsomething();

	}


};

//����coffee
class makecoffee :public makedrink
{
public:
	virtual void water()
	{
		cout << "�հ׿�ˮ" << endl;
	}
	virtual void brew()
	{
		cout << "����coffee" << endl;
	}
	virtual void putincup()
	{
		cout << "���뱭��" << endl;
	}
	virtual void putsomething()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}
};
//����tea
class tea :public makedrink
{
public:
	virtual void water()
	{
		cout << "�հ׿�ˮ" << endl;
	}
	virtual void brew()
	{
		cout << "����tea" << endl;
	}
	virtual void putincup()
	{
		cout << "���뱭��" << endl;
	}
	virtual void putsomething()
	{
		cout << "��������" << endl;
	}
};
void dowork(makedrink* abs)
{
	abs->dowork();
		delete abs;

}
void test01()
{
	dowork(new makecoffee);

	cout << endl;
	dowork(new tea);
}

int main()
{

	test01();


	system("pause");
	return 0;








}