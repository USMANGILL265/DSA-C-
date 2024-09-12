#include<iostream>
using namespace std;
 // FUNCTIONS//
 void hello(){
 	cout<<"hello\n";
 }
 // Multiplication of two numbers //
 int multiply(int a, int b){
 	int mul=a*b;
 	return mul;
 }
 // minimum of two numbers //
   int min(int a ,int b){
     if(a<b){
 	return a;
    } 
	else{
 	return b;
    }
 }
   // Calculate sum of N numbers //
 int sum(int n){
 	int t = 0;
 	for(int i = 0; i<=n; i++){
 		t +=i;
	 }
	 return t;
 }
 
 // Calculate Factorial of numbers //
 
 int factorialN(int n){
 	int fact =1;
 	for(int i =1; i<=n;i++){
 		fact*=i;
	 }
	 return fact;
 }
 
 int digitSum(int num){
 	int Sum = 0;
 	while(num>0){
 		int lastdig = num%10;
 		num/=10;
		 Sum += lastdig; 
	 }
	 return Sum;
 }
int main(){
	hello();
	cout<<multiply(10 ,12)<<endl;
	cout<<min(2,5)<<endl;
	cout<<sum(10)<<endl;
	cout<<factorialN(5)<<endl;
	cout<<digitSum(2345)<<endl;
}

