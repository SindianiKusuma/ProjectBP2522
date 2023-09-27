#include <iostream>

using namespace std;
main(){
	int temp,length=8;
	int arr[]={3,4,1,5,7,9,2,7};
	cout<<"Data belum terurut\n";
	for (int i=0; i<length;i++){
		cout <<arr[i] <<" ";
	}
	int loc_min;
	for(int i=0; i<length ;i++){
		loc_min = i;
		for (int j=1; j<length; j++){
			if (arr[j] < arr[loc_min]){
				loc_min = j;
			}
		}
		
		temp= arr [i];
		arr[i] = arr[loc_min];
		arr[loc_min] = temp;
	}
	
	cout<<"\n\nData telah terurut\n";
	for (int i=0;i<length;i++){
		cout<< arr[i] <<" ";
	}
}
