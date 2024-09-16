#include<iostream>
using namespace std;
// Decimal To Binary Number Conversion //
int dectoBin(int decNum){
	int ans = 0;
	int pow = 1;
	
	while(decNum>0){
		int rem = decNum % 2;
		decNum /= 2;
		ans += (rem*pow);
		pow*=10;
	}
	return ans;
}

// Binary To Decimal Number Conversion //
int bintoDec(int binNum){
	int ans = 0;
	int pow = 1;
	while(binNum>0){
		int rem = binNum % 10;
		ans += (rem*pow);
		binNum /= 10;
		pow*=2;
	}
	return ans;
}
int main(){
	int decNum = 10;
	cout<< "Binary Form of Number:"<<dectoBin(decNum)<<endl;
	int binNum = 10010;
	cout<< "Decimal Form of Number:"<<bintoDec(binNum)<<endl;
}

