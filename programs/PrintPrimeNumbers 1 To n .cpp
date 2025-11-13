#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the number sir: " << endl;
	cin >> n;
	int j;
	int count = 0;
	for (int i = 1; i < n; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			count++;
			cout<<j<<" ";
		}
	}
	cout<<endl<<"Total Primes Number in this Range are : "<<count<<endl;
	return 0;
}