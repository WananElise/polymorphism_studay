#include<iostream>
using namespace std;
#include<string>
//class calc
//{
//public:
//	int getnum(string oper)
//	{
//		if (oper == "+")
//		{
//			return num1 + num2;
//		}
//		if (oper == "-")
//		{
//			return num1 - num2;
//		}
//		if (oper == "*")
//		{
//			return num1 * num2;
//		}
//
//	}
//
//
//	int num1;
//	int num2;
//
//
//
//};
//void test01()
//{
//	calc c;
//	c.num1 = 10;
//	c.num2 = 10;
//	cout << c.num1 << "+" << c.num2 << "=" << c.getnum("+") << endl;
//	cout << c.num1 << "-" << c.num2 << "=" << c.getnum("-") << endl;
//	cout << c.num1 << "*" << c.num2 << "=" << c.getnum("*") << endl;
//
//
//};


//利用动态多态扩展抽象计算器
class AbstractCalc
{
public:
	virtual int calc()
	{
		return 0;
	}

	int sum1;
	int sum2;


};
//加法
class Addcalc :public AbstractCalc
{
public:
	virtual int calc()
	{
		return sum1 + sum2;
	}


};
//减法
class Jcalc :public AbstractCalc
{
public:
	virtual int calc()
	{
		return sum1 - sum2;
	}


};
//乘法
class Ccalc :public AbstractCalc
{
public:
	virtual int calc()
	{
		return sum1 * sum2;
	}


};
void test02()
{
	AbstractCalc* abs = new Addcalc;
	abs->sum1 = 20;
	abs->sum2 = 30;
	cout << abs->sum1 << "+" << abs->sum2 << "=" << abs->calc() << endl;
	delete abs;
	abs = new Jcalc;
	abs->sum1 = 20;
	abs->sum2 = 30;
	cout << abs->sum1 << "-" << abs->sum2 << "=" << abs->calc() << endl;
	delete abs;
	 abs = new Ccalc;
	abs->sum1 = 20;
	abs->sum2 = 30;
	cout << abs->sum1 << "*" << abs->sum2 << "=" << abs->calc() << endl;
	delete abs;
};



int main()
{
	/*test01();*/

	
	test02();









	system("pause");
	return 0;
}