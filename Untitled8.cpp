#include <iostream>

using namespace std;

int main() {
	int a, b;
	cout<<"Nhap a, b";
	cin>>a>>b;
	int temp;
	while(a!=b) {
		temp=a%b;
		a=b;
		b=temp;
	}
	cout<<"UCLN: "<<a;
	
	
	return 0;
}
