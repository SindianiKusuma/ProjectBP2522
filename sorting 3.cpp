#include <iostream>

using namespace std;
main(){
	int temp,y=8;
	int arr[]={3,4,1,5,7,9,2,7};
	cout <<"Data belum terurut\n";
	for (int i=0;i<y;i++){
		cout <<arr[i] <<" ";
	}
	for (int i=1; i<y; i++){
		int key = arr[i];
		int j= i-1;
		while (j>=0 && arr[j] >key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] =key;
	}
cout<<"\n\nData telah terurut\n";
for (int i=0;i<y;i++){
	cout << arr[i] <<" ";
}
}
