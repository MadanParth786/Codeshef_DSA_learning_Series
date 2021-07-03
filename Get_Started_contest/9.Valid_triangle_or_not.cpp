#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	float a,b,c,s;
	cin>>a>>b>>c;
	   s=(a+b+c)/2;
	   float area = sqrt(s*(s-a)*(s-b)*(s-c));
		if(area>0){
			cout<<"YES"<<"\n";
		}
	else{
		cout<<"NO"<<"\n";
	}
}
