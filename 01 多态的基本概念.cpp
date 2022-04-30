#include<iostream>
using namespace std;
class animals
{
public:
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};
class cat :public animals
{
public:
	/*virtual*/ void speak()
	{
		cout << "小猫在说话" << endl;
	}



};
class dog :public animals
{
public:
	/*virtual*/ void speak()
	{
		cout << "小狗在说话" << endl;
	}

};

void dospeak(animals& animals)
{
	animals.speak();


}
void test01()
{
	cat c;
	dospeak(c);
	dog d;
	dospeak(d);
}





int main()
{

	test01();













	system("pause");
	return 0;
}