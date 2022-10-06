#include <iostream>
#include <vector>
using namespace std;
void Display(vector<int> &v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
int main(){
	vector<int> vect;
	int element,size;
	cout<<"Enter size of vector\n";
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"Enter Element No. "<<i+1<<"\n";
		cin>>element;
		vect.push_back(element);
	}
	cout<<endl<<"The vector is\n ";
	Display(vect);
}
