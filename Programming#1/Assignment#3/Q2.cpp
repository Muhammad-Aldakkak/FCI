#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of line:\t";
	cin>>n;
	string *arr;
	arr=new string[n];
	for(int i=0;i<n;i++){
	cin>>arr[i];
	}	
	for(int i=0;i<n;i++){
	int c=arr[i].size();
	if(c<=10){
		cout<<arr[i]<<endl;
	}
	else{
		cout<<arr[i][0]<<c-2<<arr[i][c-1]<<endl;
	}
	}
return 0;
}
