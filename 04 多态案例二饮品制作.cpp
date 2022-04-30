#include<iostream>
using namespace std;
//制作饮品抽象类
class makedrink
{
public:
	//烧水
	virtual void water() = 0;
	//冲泡
	virtual void brew() = 0;
	//倒入被子
	virtual void putincup() = 0;
	//加入辅料
	virtual void putsomething() = 0;
	void dowork()
	{
		water();

		brew();

		putincup();

		putsomething();

	}


};

//制作coffee
class makecoffee :public makedrink
{
public:
	virtual void water()
	{
		cout << "烧白开水" << endl;
	}
	virtual void brew()
	{
		cout << "冲泡coffee" << endl;
	}
	virtual void putincup()
	{
		cout << "倒入杯子" << endl;
	}
	virtual void putsomething()
	{
		cout << "加入糖和牛奶" << endl;
	}
};
//制作tea
class tea :public makedrink
{
public:
	virtual void water()
	{
		cout << "烧白开水" << endl;
	}
	virtual void brew()
	{
		cout << "冲泡tea" << endl;
	}
	virtual void putincup()
	{
		cout << "倒入杯子" << endl;
	}
	virtual void putsomething()
	{
		cout << "加入柠檬" << endl;
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