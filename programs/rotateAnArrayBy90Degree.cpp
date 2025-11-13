#include<iostream>
using namespace std;

void rotattionBy90DegreeOfMatrix(int arr[][3] , int totalrow , int totalcolumn){
    //step 1 -- do a transpose of a matrix.
    int newArray[totalcolumn][totalrow];
    for(int row = 0 ; row < totalcolumn ; row++)
    {
        for(int col = 0 ; col< totalrow ; col++)
        {
            newArray[row][col] = arr[col][row];
        }
    }


    // printing of a newly matrix for confirmation of a transpose
    for(int row = 0 ; row < totalcolumn ; row++)
    {
        for(int col = 0 ; col< totalrow ; col++)
        {
            cout<<newArray[row][col]<<" ";
        }cout<<endl;
    }cout<<endl;

    //step 2 -- reverse of a matrix;
    int startingCol = 0;
    int startingRow = 0;
    int endingCol = totalrow - 1;
    int endingRow = totalcolumn - 1;

    totalrow = totalcolumn;
    totalcolumn = totalrow;
    while(startingRow <= endingRow){
        for(int row = 0 ; row < totalrow ; row++){
            swap(newArray[startingRow][startingCol],newArray[startingRow][endingCol]);
            startingRow++;
        }
    }

 // printing of a newly matrix for confirmation of a rotation
     for(int row = 0 ; row < totalcolumn ; row++)
    {
        for(int col = 0 ; col< totalrow ; col++)
        {
            cout<<newArray[row][col]<<" ";
        }cout<<endl;
    }cout<<endl;
}


int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

      for(int row = 0 ; row < 3 ; row++)
    {
        for(int col = 0 ; col< 3 ; col++)
        {
            cout<<arr[row][col]<<" ";
        }cout<<endl;
    } 
    cout<<endl;




    rotattionBy90DegreeOfMatrix(arr , 3 , 3);
}