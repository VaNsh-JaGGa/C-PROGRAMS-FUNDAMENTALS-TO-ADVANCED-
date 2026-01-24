#include <iostream>
using namespace std;

  int countTotalSetBits(int n) {
    int countForSetBits = 0;
    for (int i = 1; i <= n; i++) {
      int j = i;
      while (j > 0) {
        if ((j & 1)  == 1) { countForSetBits++; }
        j = (j >> 1);
      }
    }
    return countForSetBits;
  }

  int main(){
    int n;
    cin>>n;
    int ans = countTotalSetBits(n);
    cout << ans;
  }




