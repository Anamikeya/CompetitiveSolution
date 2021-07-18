#include<iostream>
#include<string>

class living
{
public:

	
	int getLegs()
	{
		return 4;
	}
protected:
	int no_of_legs;


};
class human : public living
{
public:
	living l;
	human(int legs)
	{
		this->no_of_legs = legs;

	}
	int getLegs()
	{ 
		return no_of_legs;
	}

};

int getLegs(living live)
{
	return live.getLegs();
}

class People
{
public:
	virtual std::string getName(){return "People";}
	virtual std::string lastName()
	{
		return "pandey";
	}
};
class American : public People
{
public:
	std::string m_name, l_name;
	American(std::string name, std::string l_name)
		:m_name(name), l_name(l_name)
	{

	}
	std::string getName() override {return m_name;}
	std::string lastName(){return l_name;}
};
class Indian : public People
{
public:
	std::string m_name;
	std::string l_name;
	Indian(std::string name, std::string ln)
		:m_name(name), l_name(ln)
	{

	}
	std::string getName () override {return m_name;}
	std::string lastName(){return l_name;}
};

void PrintName(People* p)
{

	std::cout << p->getName() << std::endl;
}
void PrintFullName(People* p)
{
	std::cout <<p->getName() << " " << p->lastName() << std::endl;
}
int main()
{
	People *p = new People();
	American* a = new American("Anurag", "sINGH");
	Indian* i =new Indian("Yagnik", "lucifer");
	
	
	PrintFullName(p);
	PrintFullName(a);
	PrintFullName(i);

	
	


}