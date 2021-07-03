#include<iostream>
using namespace  std;
int main(void){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>=b and a>=c){
		if(b>=c ){
		
		cout<<b<<"\n";
	}
		else{
		cout<<c<<"\n";
		}
	}
	else if (b>=a and b>=c){
		if(a>=c ){
		
		cout<<a<<"\n";
	}
		else{
		cout<<c<<"\n";
		}
	}
	else if (a >= b){
		cout<<a<<"\n";
	}
	else {
		cout<<b<<"\n";
	}
}

