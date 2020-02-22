#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter the number :\t";
	cin>>x;
	for(int i=1;i<=x;i++){
		for(int j=1;j<=i;j++){
			if(j==1){
				cout<<"*";
			}
			else{
				cout<<"**";
			}
		}
		cout<<"\n";
	}
cout<<endl;
	 
	 	for(int i=1;i<=x;i++){
		for(int j=x;j>=i;j--){
			if(j>i){
				cout<<" ";
			}
			else if(j==i){
				for(int n=1;n<=i;n++){
					if(n==i){
						cout<<"*";
					}
					else{
						cout<<"**";
					}
				}
			}
		}
	
		cout<<endl;
        
	}
		for(int i=1;i<x;i++){
	for(int j=1;j<=x;j++){
		if(j<=i){
			cout<<" ";
		}
		else{
			if(j==x){
					cout<<"*";
			}
		else {
			cout<<"**";
		}
		
			}
		}
				cout<<endl;
	}

	
	
	
	
	
	
	
	return 0;
}
