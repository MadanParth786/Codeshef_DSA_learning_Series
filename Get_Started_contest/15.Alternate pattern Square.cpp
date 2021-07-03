#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	int count=0;
	for(int i=1;i<=n;i++){
		if(i%2!=0){
		
		for(int j=1;j<=5;j++){
			count+=1;
			cout<<count<<" ";
		
		}
	
	}
	else{
		int temp=count+1;
		for(int j=count+5;j>=temp;j--){
			count+=1;
			cout<<j<<" ";
	}
	
	}
	cout<<"\n";


}
}

