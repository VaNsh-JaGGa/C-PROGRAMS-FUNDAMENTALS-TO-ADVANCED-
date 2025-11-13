#include<iostream>
using namespace std;

int main(){
	int a = 0;
	int b = 1;
	int c = 0;
	 
	int number;
	cin>>number;
	
	int starter = 1;
	cout<<a<<" "<<b<<" ";
	while(starter <= number){
		c = a + b;
		a = b;
		b = c;
		cout<<c<<" ";
		starter++;
	}
} 