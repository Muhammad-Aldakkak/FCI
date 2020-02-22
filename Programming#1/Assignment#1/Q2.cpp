#include<iostream>
using namespace std;
int main(){
	int num,x,m1,m2;
	cout<<"Enter the number of value you want enter:\t";
	cin>>num;
	for(int i=1;i<=num;i++){
		cout<<"Enter the number "<<i<<":\t";
		cin>>x;
		if(i==1){
			m1=x;
		}
		else
		if(i==2)
		{
			if (x>m1)
			{
				m2=m1;
				m1=x;
			}
			else 
			m2=x;
		}
		else 
		if(x>m1){
			m2=m1;
			m1=x;
		}
		else 
		if ((x>m2) &&(x<m1))
		{
			m2=x;
		}
	}
	cout<<"The max two numbers are:\t"<<m1<<"\t"<<m2;
	
	
	
	return 0;
}
