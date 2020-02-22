#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string x;
	getline(cin,x);
	for(int i=0;;i++){
		if(x[i]=='A'||x[i]=='a'){}
		else if(x[i]=='O'||x[i]=='o'){}
		else if(x[i]=='Y'||x[i]=='y'){}
		else if(x[i]=='E'||x[i]=='e'){}
		else if(x[i]=='U'||x[i]=='u'){}
		else if(x[i]=='I'||x[i]=='i'){}
		else if(x[i]=='\0'){
			break;
		}
		else{
			cout<<".";
       char c=tolower(x[i]);
        cout<<c;
			}
	}
	return 0;
}
