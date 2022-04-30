#include<iostream>
using namespace std;
#include<string>
class animals
{
public:
	animals()
	{
		cout << "animals构造函数调用" << endl;
	}
	virtual void speak() = 0;
	//利用虚析构解决父类指针释放子类对象不干净的清空；
	virtual ~animals() = 0;
	/*{
		cout << "animals虚析构函数调用" << endl;
	}
	 */
};
animals::~animals()
{
	cout << "animals纯虚析构函数调用" << endl;
}
class cat :public animals
{
public:
	cat(string name)
	{
		m_name = new string(name);
		cout << "cat构造函数调用" << endl;
	}
	~cat()
	{
		if (m_name != NULL)
		{
			delete m_name;
			m_name = NULL;
			cout << "cat析构函数调用" << endl;
		}

	}

	virtual void speak()
	{
		cout <<*m_name<< "小猫在叫" << endl;
	}
	string* m_name;

};
void test01()
{
	
	animals* animals = new cat("tom");
	animals->speak();
	delete animals;

}
int main()
{

	test01();


	system("pause");
		return 0;
}