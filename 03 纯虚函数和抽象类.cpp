#include<iostream>
using namespace std;
//��һ�������д��麯����ô�����Ҳ���Գ�֮Ϊ������
class base
{
public:
	virtual void func() = 0;


};
class son :public base
{
public:
	virtual void func()
	{
		cout << "func()����" << endl;
	}


};

void test01()
{
	//base b;�������޷�ʵ��������
	son s;
	base& b = s;
	s.func();

}




int main()
{
	test01();












	system("pause");
	return 0;
}