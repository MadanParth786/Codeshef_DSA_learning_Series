#include<iostream>
using namespace std;
int main(void)
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c and b+c>a and c+a>b){
		if(a==b and b==c){
			cout<<1<<"\n";
		}
		else if(a==b or b==c or c==a){
			cout<<2<<"\n";
		}
		else{
			cout<<3<<"\n";
		}
	}
	else{
		cout<<-1<<"\n";
	}
}
