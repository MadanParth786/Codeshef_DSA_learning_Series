#include<iostream>
using namespace std;
int main(void)
{
	int n,k;
	bool found=false;
     int a[n];
	 cin>>n>>k;
   for(int i=0;i<n;i++)
  {
  cin>>a[i];

   if(a[i]==k){
   
     found=true;
     break;
 }
 }
  if(found){
  	cout<<"1"<<"\n";
  }
  else{
  	cout<<"-1"<<"\n";
  }
	
}
