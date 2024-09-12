#include <iostream>
using namespace std;

int main(){
	// While Loops //
	int count = 1;
	while(count<=5){
		cout<< count <<" ";
		count++;
	}
	cout<<endl;
	
	// For Loops //
	for(int i = 65; i <= 90; i++){
		cout << char(i)<<" ";
		
	}
    int sum =0;
    for(int i =0 ;i<=5;i++){
    	sum =sum+i;
	}
	   	cout<<sum;
	   	
	   	
     int num = 1;
     int oddSum = 0;
     while(num<=10){
     	if(num%2!=0){
     		oddSum=oddSum+num;
		 }
		 num++;
	
	 }
	 	 cout<<"\nYour Odd Number Sum Is: "<<oddSum<<endl;
}
	 
	 
	 
	 
	 
	 
