#include <iostream>
using namespace std;
int main (){
	int num,res=1;
cout<<"enter the number:\t";
		cin>>num;
		if(num<0){
			cout<<"Error\n";	
		}
		else{
		
		for(int i=num;i>0;i--){
	       res*=i;
		   }
		   	    cout<<"the result is:\t"<<res;
	}

return 0;
}

