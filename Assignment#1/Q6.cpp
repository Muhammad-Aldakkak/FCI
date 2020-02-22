#include<iostream>
using namespace std;
		int ref,wash,cook,tv;
void stock(){
	cout<<"Enter # of Refrigerators in the stock:\t";
	cin>>ref;
	cout<<"Enter # of Washers in the stock:\t";
	cin>>wash;
	cout<<"Enter # of Cookers in the stock:\t";
	cin>>cook;
	cout<<"Enter # of T.Vs in the stock:\t";
	cin>>tv;
}
void console(){
	cout<<"1. Add Refrigerators to the stock\n"<<"2. Add Washers to the stock\n"
	<<"3. Add cookers to the stock\n"<<"4. Add T.Vs to the stock\n"
	<<"5. Remove Refrigerators to the stock\n"<<"6. Remove Washers to the stock\n"
	<<"7. Remove cookers to the stock\n"<<"8. Remove T.Vs to the stock\n"
	<<"9. Display stock\n"<<"10. Exit\n"<<"Enter your choice:\t";
}
void add(int x){
		int temp;
	if(x==1){
	cout<<"Enter # of Refrigerators you want add:\t";
	cin>>temp;
	ref+=temp;
	}
	else if(x==2){
		cout<<"Enter # of Washers you want add:\t";
		cin>>temp;
		wash+=temp;
	}
	else if(x==3){
		cout<<"Enter # of Cookers you want add:\t";
		cin>>temp;
		cook+=temp;
	}
	else{
		cout<<"Enter # of T.Vs you want add:\t";
		cin>>temp;
		tv+=temp;
	}
}
void remove(int x){
		int temp;
	if(x==5){
	cout<<"Enter # of Refrigerators you want remove:\t";
	cin>>temp;
	ref-=temp;
	}
	else if(x==6){
		cout<<"Enter # of Washers you want remove:\t";
		cin>>temp;
		wash-=temp;
	}
	else if(x==7){
		cout<<"Enter # of Cookers you want remove:\t";
		cin>>temp;
		cook-=temp;
	}
	else{
		cout<<"Enter # of T.Vs you want remove:\t";
		cin>>temp;
		tv-=temp;
	}
}
void display(){
			cout<<"You have "<<ref<<" pieces of Refrigerators.\n"<<"You have "<<wash
			<<" pieces of Washers.\n"<<"You have "<<cook<<" piece of cookers.\n"
			<<"You have "<<tv<<" pieces of T.Vs.\n";
}
int main(){
	int n;
	stock();
	start:
console();
	cin>>n;
	if(n<=4){
		add(n);
		goto start;
	}
	else if(n>4 && n<9){
		remove(n);
		goto start;
	}
	else if(n==9){
	display();
	goto start;
	}
	else if(n==10){
		cout<<"Thanks for using my program\n";
	}
	else {
		goto start;	
	}
	return 0;
}
