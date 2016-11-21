#include <iostream>

class A
{
 public:
	float a1, a2;
	A():a1(1.0),a2(1.0){}
	A(float a, float b): a1(a),a2(b){}
	
 int add()
 {
	 return a1+a2;
 }
 
 virtual float mult()
 {
	 return a1*a2;
 }
 
};

class B: public A
{
 public:
	int b1, b2;
	B():b1(1),b2(1){}
 	B(int a, int b):b1(a),b2(b){}
 	int sub()
	  {
		
		std::cout<<"called sub"<<std::endl;
		return b1-b2;
	  }
	  
};

void print (A* a)
{
	std::cout<<a->a1<<std::endl;
}

int main()
{
A* ant = new A;
const A* axle = new A;
print(const_cast<A*> (axle));

A* albatross = new B;
B* bat;

//static_cast<B*>(albatross)->sub();


bat = static_cast <B*> (ant);
if(bat)
bat->sub();


bat = static_cast <B*> (albatross);
if(bat)
bat->sub();


return 0;
}
