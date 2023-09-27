#include <iostream>

using namespace std;

main(){

int data[]={3,4,1,5,7,9,2,7};
int temp,n=8;
cout<<"Data belum terurut :" ;
for (int i=0; i<n ;i++){
	cout<<data[i]<<" ";
}
for (int i=0; i<8;i++){
	for (int j=n-1; j>=1;j--){
		if (data[j]<data [j-1]){
			temp=data[j];
			data[j]=data[j-1];
			data[j-1]=temp;
		}
	}
}
cout <<"\n\nData telah terurut\n";
for (int i=0; i<n ;i++){
	cout <<data[i] <<" ";
}
}
