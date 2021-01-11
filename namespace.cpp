#include<iostream>
using namespace std;
namespace Myspace{
 int a;
 void f1();
 class Hello{
 	public:
 		void fun1();
 		void fun2(){
 			cout<<"fun2 called"<<endl;
		 }
 };	
}
void Myspace::f1(){
	cout<<"f1 called"<<endl;
    /* If we don't use using namespace std the we have to use :: operator and if we use using 
	namespace command then we also use :: it. It's completely depend on you but without namespace 
	we have to use :: operator */
    //	std::cout<<"namespace"<<endl;
}
void Myspace::Hello::fun1(){  
//How to define a function outside the class which class present in namespace
	cout<<"fun1 called"<<endl;
}
using namespace Myspace;
int main(){
	//If we use using namespace Myspace the we don't need to use scope resoulution operator
	/* Myspace::a=5;
	cout<<"The value of a="<<a<<endl;
	Myspace::Hello obj;                    
	obj.fun1();
	Myspace::f1(); */
	//If we use namespace then we have not use any scope resoloution operator
	a=5;
	cout<<"The value of a="<<a<<endl;
	Hello obj1;
	obj1.fun1();
	obj1.fun2();
	f1();
}
