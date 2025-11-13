#include<iostream>
using namespace std;

int main(){
	string reverse = "naman mom dad";
	int first = 0;
	int end = reverse.length()-1;
	char temp;
	while(first<=end){
		temp = reverse[first];
		reverse[first] = reverse[end];
		reverse[end] = temp;
		first++;
		end--;
	}
	cout<<reverse;
}