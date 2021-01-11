#include<iostream>
using namespace std;
namespace Myfile{  
/* This namespace already use in file1 but here also use that's not create any problem and 
fisrt namespace's all contain are put here */
    int m1,m2;
	void f1(){
		cout<<"\n f1 called";
	}
	void f2();
}
void Myfile::f2(){
	cout<<"\n f2 called";
}
namespace Myfile1{
	int x,y;
	int j,a=0,b=1,c;
	int fibo(int n1);	
}
int Myfile1::fibo(int n1){
    cout<<a;
	for(j=1;j<=n1;j++){
	c=a+b;
	cout<<c;
	b=a;
	a=c;
	}	
}
