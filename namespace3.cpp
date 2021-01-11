#include<iostream>
#include "file1.h"
#include "file2.h"
using namespace std;
using namespace Myfile;
using namespace Myfile1;
int main(){
	Myfile::a=10; 
	/* Here we need to use scope resoloution operator because in both namespace a and b 
	use we need to specify the compiler which namespace we use */
	Myfile::b=20;
	m1=50;
	m2=60;
	x=30;
	y=40;
	cout<<"a="<<Myfile::a<<endl;
	cout<<"b="<<Myfile::b<<endl;
	cout<<"m1="<<m1<<endl;
	cout<<"m2="<<m2<<endl;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	f1();
	f2();
	int z=fact(5);
	cout<<"\n Factorial is="<<z<<endl;
	cout<<"The Fibonacci series is=";
	fibo(8);
}
