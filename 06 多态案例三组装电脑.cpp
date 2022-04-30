#include<iostream>
using namespace std;
//创建cpu处理器抽象类
class cpu
{
public:
	virtual void calculate() = 0;
};

//创建videocard显卡抽象类
class videocard
{
public:
	virtual void dispaly() = 0;
};

//创建memory内存条抽象类
class memory
{
public:
	virtual void storage() = 0;
};

//电脑类
class computer
{
public:

	computer(cpu* cpu, videocard* vc, memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	void dowork()
	{
		m_cpu->calculate();
		m_vc->dispaly();
		m_mem->storage();

	}
	~computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}

		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

private:
	cpu* m_cpu;
	videocard* m_vc;
	memory* m_mem;
};

//inter电脑品牌
class interCpu :public cpu
{
public:
	virtual void calculate()
	{
		cout << "interCpu正在计算" << endl;
	}

};

class interVideocard :public videocard
{
public:
	virtual void dispaly()
	{
		cout << "interVideocard正在显示" << endl;
	}

};


class interMemory :public memory
{
public:
	virtual void storage()
	{
		cout << "interMemory正在存储" << endl;
	}

};

//lenovo电脑品牌
class lenovoCpu :public cpu
{
public:
	virtual void calculate()
	{
		cout << "lenovoCpu正在计算" << endl;
	}

};

class lenovoVideocard :public videocard
{
public:
	virtual void dispaly()
	{
		cout << "lenovoVideocard正在显示" << endl;
	}

};

class lenovoMemory :public memory
{
public:
	virtual void storage()
	{
		cout << "lenovoMemory正在存储" << endl;
	}

};


void test01()
{
	cout << "computer1运行" << endl;
	computer  *c1=new computer(new interCpu, new interVideocard, new interMemory);
	c1->dowork();
	delete c1;
	cout << "-------------------------------------" << endl;
	cout << "computer2运行" << endl;
	computer* c2 = new computer(new lenovoCpu, new lenovoVideocard, new lenovoMemory);
	c2->dowork();
	delete c2;
	cout << "-------------------------------------" << endl;
	cout << "computer3运行" << endl;
	computer* c3 = new computer(new lenovoCpu, new interVideocard, new interMemory);
	c3->dowork();
	delete c3;

}

int main()
{
	test01();








	system("pause");
	return 0;
}