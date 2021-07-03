#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(n%5==0 and n%11==0){
	    cout<<"BOTH"<<"\n";
	}
	else if(n%5==0 or n%11==0){
	    cout<<"ONE"<<"\n";
	    
	}
	else{
	    cout<<"NONE"<<"\n";
	}
	
	return 0;
}

