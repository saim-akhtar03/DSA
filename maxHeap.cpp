#include<iostream>
using namespace std;
void heapify(int *arr,int n){
    for(int i=0;i<n;i++){

    int p=(i-1)/2;
    while(arr[i]>arr[p]&&p>=0){
		 p=(i-1)/2;
		swap(arr[i],arr[p]);
		i=p;
	}
    }
}
void insert(int *arr,int i,int n){
	int p=(i-1)/2;
	while(arr[i]>arr[p]&&p>=0){
		swap(arr[i],arr[p]);
		i=p;
        p=(i-1)/2;
	}
}
void deleteRoot(int *arr,int n){
    int last=n-1;
   swap(arr[0],arr[last]);
    last=last-1;
    heapify(arr,last);
    
}
int main(){
	int arr[5]={1,2,3,4,5};
	int heap[5]={1,2,3,4,5};
	for(int i=0;i<5;i++){
		insert(heap,i,5);
	}
	deleteRoot(heap,5);
	for(int i=0;i<5;i++){
		cout<<heap[i]<<" ";
	}
}