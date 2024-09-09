#include <iostream>
using namespace std;

int main(){
	int marks;
	cout<<"Enter The Marks\n";
	cin>>marks;
	
	if(marks>=90){
		cout<<"Your Grade Is A+\n";
		cout<<"Congratulations";
	}else if(marks>=80){
		cout<<"Your Grade Is A";
	}else if(marks>=70){
		cout<<"Your Grade Is B+";
	}else if(marks>=60){
		cout<<"Your Grade Is B";
	}else if(marks>=50){
		cout<<"Your Grade Is C";
	}else{
		cout<<"Your are Fail\n";
		cout<<"Better Luck Next Time";
	}

	char alpha;
	cout<<"\n\n\nEnter The Character\n";
	cin>>alpha;
	
	if(alpha>='a'&& alpha<='z'){
		cout<<"Character Is Lowercase";
	}else if(alpha>='A' && alpha<='Z'){
		cout<<"Character Is Uppercase";	
	}else{
		cout<<"Plz input Character only";
	}
	
	// Ternery Statement//
	int num;
	cout<<"\nEnter the Number\n";
	cin>>num;
	
	cout<<(num>=0 ? "positive": "negative")<<endl;

}


