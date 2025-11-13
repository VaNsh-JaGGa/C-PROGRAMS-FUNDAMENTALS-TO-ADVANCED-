#include <iostream>
#include <algorithm>
using namespace std;

void SortZeroesAndOnesMethod1(int KissanJam[], int size)
{
    sort(KissanJam, KissanJam + size);
}

void SortZeroesAndOnesMethod2(int KissanJam[], int size)
{
    fill(KissanJam, KissanJam + 1, 0);
    fill(KissanJam + 2, KissanJam + size, 1);
}

void SortZeroesAndOnesMethod3(int KissanJam[], int size){
    int s = 0;
    int e = size - 1;

    while(s<=e){
        if(KissanJam[s]==0){
            s++;
        }
        else if(KissanJam[e] == 1){
            e--;
        }
        else if(KissanJam[s] == 1 && KissanJam[e] == 0){
            int first = KissanJam[s];
            int last = KissanJam[e];
            int tempo = first;
            KissanJam[s++] = KissanJam[e];
            KissanJam[e--] = tempo;
        }
    }
}

void PrintArray(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 0, 1, 0, 1};
    // method 1 starts----
    //  SortZeroesAndOnesMethod1(arr,5);
    //  PrintArray(arr,5);
    // method 1 ended.

    //method 2 starts ---
    // SortZeroesAndOnesMethod2(arr, 5);
    // PrintArray(arr, 5);
    //method 2 ended.

    // method 3 starts --
    SortZeroesAndOnesMethod3(arr,5);
    PrintArray(arr,5);
}