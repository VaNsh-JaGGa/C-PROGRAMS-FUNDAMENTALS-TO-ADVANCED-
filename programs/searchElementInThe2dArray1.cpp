#include<iostream>
using namespace std;

pair<int,int> searchElementInThe2dArray(int arrayName[][3] , int rowsize , int colsize , int target ){
    for(int row = 0; row <= rowsize-1; row++){
        for(int col=0;  col <= colsize-1 ; col++){
            if(arrayName[row][col] == target){
                return {row,col};
            }
        }
    }
}

int main(){

    int MushkilKuchNiH[2][3] = {
        {10,20,30},
        {40,50,60}
    };

    pair<int,int> ans = searchElementInThe2dArray(MushkilKuchNiH,2,3,50);
    cout<<ans.first<<" "<<ans.second;;
}