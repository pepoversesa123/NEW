#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,max=0;
	float a[n];
	float *p=a;
	cout<<"nhap so nguyen duong n: ";cin>>n;
		for(int i=0;i<n;i++){
		cout<<"nhap so nguyen thu "<<i+1<<":";
		cin>>a[i];
	}
 for (int i=0;i<n;i++) {
 cout<<*(p+i);
}
}
