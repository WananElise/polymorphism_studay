#include<iostream>
using namespace std;
#include<string>
class animals
{
public:
	animals()
	{
		cout << "animals���캯������" << endl;
	}
	virtual void speak() = 0;
	//�����������������ָ���ͷ�������󲻸ɾ�����գ�
	virtual ~animals() = 0;
	/*{
		cout << "animals��������������" << endl;
	}
	 */
};
animals::~animals()
{
	cout << "animals����������������" << endl;
}
class cat :public animals
{
public:
	cat(string name)
	{
		m_name = new string(name);
		cout << "cat���캯������" << endl;
	}
	~cat()
	{
		if (m_name != NULL)
		{
			delete m_name;
			m_name = NULL;
			cout << "cat������������" << endl;
		}

	}

	virtual void speak()
	{
		cout <<*m_name<< "Сè�ڽ�" << endl;
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