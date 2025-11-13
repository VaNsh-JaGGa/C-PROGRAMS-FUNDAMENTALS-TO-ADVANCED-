#include <iostream>
using namespace std;

bool checkPrime(int num){
  for(int i=2 ; i < num; i++ ){
    if(num%i==0){
      return false;
    }
  }
  return true;
}


int main() {
  // checkPrime(13);
  int n ;
  cin >> n;
  for(int i = 2; i < n ; i++  ){
    bool ans = checkPrime(i);
    if(ans)
    cout<<i;
  }
  return 0;
}