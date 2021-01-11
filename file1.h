namespace Myfile{
	int a,b;
	int i,f=1;
	int fact(int n);
}
int Myfile::fact(int n){
	for(i=1;i<=n;i++){
		f=f*i;
	}
	return f;
}
