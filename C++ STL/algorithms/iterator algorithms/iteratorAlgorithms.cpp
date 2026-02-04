#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printTriple(int a)
{
    cout << a * 3 << " ";
}

bool checkeven(int a)
{
    return (a%2 == 0);
}

int main()
{
    // creation of 1d vector
    // vector<int> arr(6);

    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;
    // arr[5] = 60;
    //for_each() --- 1
    // for_each(arr.begin(),arr.end(),printTriple);

    // find() --- 2
    //  int target = 40;
    //  auto it = find(arr.begin(),arr.end(),target);
    //  cout<<*it<<" "<<endl;  

    // find_if() --- 3
    // auto it = find_if(arr.begin(), arr.end(), checkeven);
    // cout << *it << endl; not working


    //count --- 4
    // int ans = count(arr.begin(),arr.end(),target);
    // cout<<ans<<endl;

    //count_if() --- 5
    // int ans = count_if(arr.begin(),arr.end(),checkeven);
    // cout<<ans<<endl;

    //Sort() --- 6
    // sort(arr.begin(),arr.end());
    // for(int a : arr){
    //     cout<<a<<" ";
    // }


    // reverse() --- 7
    // reverse(arr.begin(),arr.end());
    // for(int a : arr){
    //     cout<<a<<endl;
    // }

    //rotate() --- 8
    // vector<int> arr(6);

    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;
    // arr[5] = 60;
    
    // for(int a : arr){
    //     cout<<a<<" ";
    // }cout<<endl;

    // rotate(arr.begin(),arr.begin() + 3 ,arr.end());

    // for(int a : arr){
    //     cout<<a<<" ";
    // }


     
}