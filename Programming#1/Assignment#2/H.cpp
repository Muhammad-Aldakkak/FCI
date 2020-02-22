#include<iostream>
#include<string.h>
using namespace std;
string **gpa(double **arr_2 ,int x , int y){
	string **arr_3=new string*[x];
	for(int i=0;i<x;i++){
		arr_3[i]=new string[y];
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(arr_2[i][j]<50){
				arr_3[i][j]="F";
			}
			else if(arr_2[i][j]==50 || arr_2[i][j]<60){
				arr_3[i][j]="D";
			}
			else if(arr_2[i][j]==60 || arr_2[i][j]<65){
				arr_3[i][j]="D+";
			}
			else if(arr_2[i][j]==65 || arr_2[i][j]<70){
				arr_3[i][j]="C";
			}
			else if(arr_2[i][j]==70 || arr_2[i][j]<75){
								arr_3[i][j]="C+";
			}
			else if(arr_2[i][j]==75 || arr_2[i][j]<80){
				arr_3[i][j]="B";
			}
			else if(arr_2[i][j]==80 || arr_2[i][j]<85){
				arr_3[i][j]="B+";
			}
			else if(arr_2[i][j]==85 || arr_2[i][j]<95){
				arr_3[i][j]="A";
			}
			else if(arr_2[i][j]==95 || arr_2[i][j]<=100){
				arr_3[i][j]="A+";
			}
			else{
						arr_3[i][j]="Error";

			}

		}
	}
	return arr_3;
}
double *average_students(double **avst, int x, int y){
		double *arr_4=new double[x];
		double sum=0;
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			sum+=avst[i][j];
		}
		arr_4[i]=sum/y;
		sum=0;
		}
		
		
		return arr_4;
		}
double *average_subjects(double **avsu, int x, int y){
		double *arr_5=new double[y];
		double sum=0;
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			sum+=avsu[j][i];
		}
		arr_5[i]=sum/x;
		sum=0;
		}
		
		
		return arr_5;
		}
		
int main(){
	int st,su;
	cout<<"Enter the number of students:\t";
	cin>>st;
	cout<<"Enter the number of subjects:\t";
	cin>>su;
	double **arr=new double*[st];
	for(int i=0;i<st;i++){
		arr[i]=new double[su];
	}
	for(int i=0;i<st;i++){
		for(int j=0;j<su;j++){
			cout<<"Enter grade of Subject#"<<j+1<<" for Student#"<<i+1<<":\t";
			cin>>arr[i][j];
		}
	}
	string **G=gpa(arr,st,su);
	for(int i=0;i<st;i++){
		for(int j=0;j<su;j++){
		cout<<"GPA of Subject#"<<j+1<<" for Student#"<<i+1<<":\t"<<G[i][j]<<endl;
		}
		}	
	double *AVST=average_students(arr,st,su);
	for(int i=0;i<st;i++){
		cout<<"Average grade and GPA for student#"<<i+1<<":\t"<<AVST[i]<<"\t";
		if(AVST[i]<50){
				cout<<"F\n";
			}
			else if(AVST[i]==50 || AVST[i]<60){
            cout<<"D\n";
			}
			else if(AVST[i]==60 || AVST[i]<65){
				cout<<"D+\n";
			}
			else if(AVST[i]==65 || AVST[i]<70){
				cout<<"C\n";
			}
			else if(AVST[i]==70 || AVST[i]<75){
								cout<<"C+\n";
			}
			else if(AVST[i]==75 || AVST[i]<80){
				cout<<"B\n";
			}
			else if(AVST[i]==80 || AVST[i]<85){
				cout<<"B+\n";
			}
			else if(AVST[i]==85 || AVST[i]<95){
				cout<<"A\n";
			}
			else if(AVST[i]==95 || AVST[i]<=100){
				cout<<"A+\n";
			}
			else{
					cout<<"Error";

			}

	}
	double *AVSU=average_subjects(arr,st,su);
	for(int i=0;i<su;i++){
		cout<<"Average GPA for subject#"<<i+1<<":\t";
		if(AVST[i]<50){
				cout<<"F\n";
			}
			else if(AVSU[i]==50 || AVST[i]<60){
            cout<<"D\n";
			}
			else if(AVSU[i]==60 || AVST[i]<65){
				cout<<"D+\n";
			}
			else if(AVSU[i]==65 || AVST[i]<70){
				cout<<"C\n";
			}
			else if(AVSU[i]==70 || AVST[i]<75){
								cout<<"C+\n";
			}
			else if(AVSU[i]==75 || AVST[i]<80){
				cout<<"B\n";
			}
			else if(AVSU[i]==80 || AVST[i]<85){
				cout<<"B+\n";
			}
			else if(AVSU[i]==85 || AVST[i]<95){
				cout<<"A\n";
			}
			else if(AVSU[i]==95 || AVST[i]<=100){
				cout<<"A+\n";
			}
			else{
					cout<<"Error";

			}
	}
	
	
	
	
	

	
for (int i=0;i<st;i++){
delete [] arr[i];
}
	delete []arr;
for(int i=0;i<st;i++){
	delete []G[i];
}
delete []G;
delete []AVST;
delete []AVSU;


	return 0;
}
