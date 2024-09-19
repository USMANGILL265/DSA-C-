#include<iostream>
using namespace std;
int linerSearch(int si,int target,int ar[]){
	for(int i = 0;i<si;i++){
		if(ar[i]==target){
			return i;
		}
		
	}
	return -1;
}
int main(){
	// Find Manimum in Array //
	int size = 9; 
	int smallest = INT_MAX;
	int arr[size]={4,2,3,1,5,6,9,8,7};
     for(int i=0;i<size;i++){
     if(arr[i]<smallest){
     	smallest=arr[i];
	 }
	 
	}
	cout<<"Smallest in array is"<<" "<<smallest<<endl;
	
	// Find Minimum in Array //
	int sizes = 9;
	int largest = INT_MIN;
	int arrs[sizes]={4,2,3,1,5,6,9,8,7};
     for(int i=0;i<sizes;i++){
     if(arr[i]>largest){
     	largest=arrs[i];
	 }
	 
	}
	cout<<"Largest in array is"<<" "<<largest<<endl;
	
	// print Index of an element in array //
	int s=2;
	int ar[2]={2,3};
	for(int i=0;i<s;i++){
		cout<<i<<endl;
	}
	
	// Linear Search //
	int si = 8;
	int target= 6;
	int array[si]={1,5,3,6,5,2,8,4};
	
	cout<<"The Target is at Index "<<linerSearch(si, target,array);
	
		
	
	 
}
