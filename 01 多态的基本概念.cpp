#include<iostream>
using namespace std;
class animals
{
public:
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};
class cat :public animals
{
public:
	/*virtual*/ void speak()
	{
		cout << "Сè��˵��" << endl;
	}



};
class dog :public animals
{
public:
	/*virtual*/ void speak()
	{
		cout << "С����˵��" << endl;
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