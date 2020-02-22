#include<iostream>
using namespace std;
int** addMatrices(int** matrix1, int** matrix2, int rows1, int columns1, int rows2, int columns2){

int **arr=new int*[rows1];
for(int a=0;a<rows1;a++){
	arr[a]=new int[columns1];
}
for(int m=0;m<rows1;m++){
	for(int n=0;n<columns1;n++){
arr[m][n]=matrix1[m][n]+matrix2[m][n];
	}
}
return arr;
}

int**multiplyMatrices(int** matrix1, int** matrix2, int rows1, int columns1, int rows2, int columns2){
int **arr=new int*[rows1];
for(int a=0;a<rows1;a++){
	arr[a]=new int[columns2];
}	
	for(int i=0;i<rows1;i++){
for(int j=0;j<columns2;j++){
        arr[i][j]=0;
        for(int k=0;k<columns1;k++){
arr[i][j]=arr[i][j]+(matrix1[i][k] * matrix2[k][j]);
}
}
}
return arr;	
}

int** matrixTranspose(int** matrix,int rows, int columns){
	int **arr=new int*[rows];
for(int a=0;a<rows;a++){
	arr[a]=new int[columns];
}	
	for(int i=0;i<rows;i++){
for(int j=0;j<columns;j++){
      arr[j][i]=matrix[i][j];
      }
      }

return arr;
}

bool isIdentityMatrix (int** matrix,int rows, int columns){
	if(rows==columns){
		int x=0,y=0;
		for(int i=0;i<rows;i++){
			for(int j=0;j<columns;j++){
				if(i==j){
					if(matrix[i][j]==1){
						x++;
					}
					else{
						return false;
						break;
					}
				}
				else{
					if(matrix[i][j]==0){
						y++;
					}
					else {
						return false;
						break;
					}
				}
			}
		}
		if(x==rows&&y==((rows*columns)-rows))
		return true;
		else{
			return false;
		}
	}

	else{
		return false;
	}
}
/*bool isOrthogonalMatrix (int** matrix,int rows, int columns){
	int **arr=new *int[rows];
	for(int i=0;i<rows;i++){
		arr[i]=new int[columns];
	}
for(int i=0;i<rows;i++){
for(int j=0;j<columns;j++){
      arr[j][i]=matrix[i][j];
      }
      }
      
}*/
int main(){
int r1,r2,c1,c2;
cout<<"Enter the of rows of Matrix#1:\t";
cin>>r1;
cout<<"Enter the of columns of Matrix#1:\t";
cin>>c1;
cout<<"Enter the of rows of Matrix#2:\t";
cin>>r2;
cout<<"Enter the of columns of Matrix#2:\t";
cin>>c2;
	int**mat1=new int*[r1];
	for(int i=0;i<r1;i++){
		mat1[i]=new int[c1];
	}
		int**mat2=new int*[r2];
	for(int i=0;i<r2;i++){
		mat2[i]=new int[c2];
	}
cout<<"Matrix #1:\n";
for(int m=0;m<r1;m++){
	for(int n=0;n<c1;n++){
		cin>>mat1[m][n];
	}
}
cout<<"Matrix #2:\n";
for(int m=0;m<r2;m++){
	for(int n=0;n<c2;n++){
		cin>>mat2[m][n];
	}
}
if(r1==r2&&c1==c2){
	cout<<"Matrix Addition:\n";
int **res = addMatrices(mat1,mat2,r1,c1,r2,c2);
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++)
            cout<<res[i][j]<<" ";
        cout<<endl;
    }
}
    else {
    	cout<<"Matrices are not valid for addition\n";
    }
if(c1!=r2||r2!=c1){                                                 /* Multiplication*/
	    	cout<<"Matrices are not valid for Multiplication\n";
}
else{
	    cout<<"Matrix Multiplication:\n";
int **res2 = multiplyMatrices(mat1,mat2,r1,c1,r2,c2);
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++)
            cout<<res2[i][j]<<" ";
        cout<<endl;
    }
}                                           /*Transpose*/
    cout<<"Matrix #1 Transpose:\n";
    int **trans_1 =matrixTranspose(mat1,r1,c1);
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++)
            cout<<trans_1[i][j]<<" ";
        cout<<endl;
    }
	    cout<<"Matrix #2 Transpose:\n";
    int **trans_2 =matrixTranspose(mat2,r2,c2);
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++)
            cout<<trans_2[i][j]<<" ";
        cout<<endl;
    }
	/*Identity*/
if(isIdentityMatrix (mat1,r1,c1)){
		cout<<"Matrix #1 is Identity\n";
}
else{
			cout<<"Matrix #1 isn;t Identity\n";

}
if(isIdentityMatrix (mat2,r2,c2)){
		cout<<"Matrix #2 is Identity\n";
}
else{
			cout<<"Matrix #2 isn;t Identity\n";

}
	
	
	
for (int i=0;i<r1;i++){
  delete [] trans_1[i];
}
for (int i=0;i<r2;i++){
  delete [] trans_2[i];
}
for (int i=0;i<r1;i++){
  delete [] mat1[i];
}
for (int i=0;i<r2;i++){
  delete [] mat2[i];
}
delete []mat1;
delete []mat2;
delete []trans_1;
delete []trans_2;


	
	return 0;
}
