//2D Matrice Addition(3*3)
#include <iostream>
using namespace std;

int main(){
	cout<<"Enter elements for 1st Matrice\n";
	int mat1[3][3];
	int mat2[3][3];
	int ans[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>mat1[i][j];
		}
	}
	cout<<endl<<"Enter elements for 2nd matrice\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>mat2[i][j];
		}
	}	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			ans[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	cout<<"\nResultant matrice is ";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<ans[i][j]<<"  ";
		}
		cout<<endl;
	}
}
	
