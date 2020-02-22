#include<iostream>
using namespace std;
int main(){
int x,multi=1,odd=0,even=0;
float sum=0,count=0,ave;
for(int i;;i++){
	cin>>x;
	if(x<0){
		break;
	}
	else{
		sum+=x;
		multi*=x;
		count++;
		if(x%2==0){
			even++;
		}
		else if(x%2!=0){
			odd++;
		}
	}
}
ave=sum/count;
cout<<"Summation is:\t"<<sum<<endl;
cout<<"Multiplication is:\t"<<multi<<endl;
cout<<"Odd Count is:\t"<<odd<<endl;
cout<<"Even Count is:\t"<<even<<endl;
cout<<"Average is:\t"<<ave<<endl;	
	return 0;
}
