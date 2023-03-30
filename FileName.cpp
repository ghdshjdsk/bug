#include <iostream>
using namespace std;
#include <string>

class Building;
class GoodGay
{
public:
	GoodGay();
	void visit01();
	void visit02();
	Building * building;
};

class Building
{
	friend void GoodGay::visit01();
public:
	Building();
public:
	string m_SittingRoom;

private:
	string m_BedRoom;
};

Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit01()
{
	cout << "visit01 �������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "visit01 �������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void GoodGay::visit02()
{
	cout << "visit02 �������ڷ��ʣ�" << building->m_SittingRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit01();
}

void test02()
{
	GoodGay gg;
	gg.visit02();
}

int main()
{
	test01();
	test02();
}