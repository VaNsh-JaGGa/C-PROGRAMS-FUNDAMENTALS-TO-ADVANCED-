#include <iostream>
#include <limits.h>
using namespace std;

int minimumValueElementInThe2dArray(int MinimumValueArray[][3], int rowsize, int colsize)
{
    int smallest = INT_MAX;
    for (int i = 0; i <= rowsize - 1; i++)
    {
        for (int j = 0; j <= colsize - 1; j++)
        {
            if (smallest > MinimumValueArray[i][j])
            {
                smallest = min(smallest, MinimumValueArray[i][j]);
                // smallest = MinimumValueArray[i][j];
            }
        }
    }
    return smallest;
}

int MaximumValueElementInThe2dArray(int MaximumValueArray[][3], int rowsize, int colsize)
{
    int largest = INT_MIN;
    for (int i = 0; i <= rowsize - 1; i++)
    {
        for (int j = 0; j <= colsize - 1; j++)
        {
            if (largest < MaximumValueArray[i][j])
            {
                largest = max(largest, MaximumValueArray[i][j]);
                // largest = MinimumValueArray[i][j];
            }
        }
    }
    return largest;
}

int main()
{

    int arrayName[2][3] = {
        {1, 2, 3},
        {4, 5, 0}};

    int answer = minimumValueElementInThe2dArray(arrayName, 2, 3);
    cout << answer << endl;

    int answer1 = MaximumValueElementInThe2dArray(arrayName, 2, 3);
    cout << answer1 << endl;
}