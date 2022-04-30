#include<iostream>
using namespace std;
//����cpu������������
class cpu
{
public:
	virtual void calculate() = 0;
};

//����videocard�Կ�������
class videocard
{
public:
	virtual void dispaly() = 0;
};

//����memory�ڴ���������
class memory
{
public:
	virtual void storage() = 0;
};

//������
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

//inter����Ʒ��
class interCpu :public cpu
{
public:
	virtual void calculate()
	{
		cout << "interCpu���ڼ���" << endl;
	}

};

class interVideocard :public videocard
{
public:
	virtual void dispaly()
	{
		cout << "interVideocard������ʾ" << endl;
	}

};


class interMemory :public memory
{
public:
	virtual void storage()
	{
		cout << "interMemory���ڴ洢" << endl;
	}

};

//lenovo����Ʒ��
class lenovoCpu :public cpu
{
public:
	virtual void calculate()
	{
		cout << "lenovoCpu���ڼ���" << endl;
	}

};

class lenovoVideocard :public videocard
{
public:
	virtual void dispaly()
	{
		cout << "lenovoVideocard������ʾ" << endl;
	}

};

class lenovoMemory :public memory
{
public:
	virtual void storage()
	{
		cout << "lenovoMemory���ڴ洢" << endl;
	}

};


void test01()
{
	cout << "computer1����" << endl;
	computer  *c1=new computer(new interCpu, new interVideocard, new interMemory);
	c1->dowork();
	delete c1;
	cout << "-------------------------------------" << endl;
	cout << "computer2����" << endl;
	computer* c2 = new computer(new lenovoCpu, new lenovoVideocard, new lenovoMemory);
	c2->dowork();
	delete c2;
	cout << "-------------------------------------" << endl;
	cout << "computer3����" << endl;
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