#include<iostream>
using namespace std;
//当一个类中有纯虚函数那么这个类也可以称之为抽象类
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
		cout << "func()调用" << endl;
	}


};

void test01()
{
	//base b;抽象类无法实例化对象
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