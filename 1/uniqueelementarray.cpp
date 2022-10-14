// C++ program to print all distinct elements in a given array
// Prob Staement - You have been given an integer array/list(ARR) of size N is euqal to (2M+1).
// Now in given array/list "M" numbers are present twice and one number is present only once
// You need to find and return that number which is unique in the array/list.

#include<iostream>

using namespace std;

int unique(int arr[], int size){
	int ans = 0;
	for (int i = 0; i < size; i++)
	{
		ans = ans ^ arr[i];
	}
	return ans;
}

int main()
{
	int arr[6] = {2,7,5,2,5,8};
	int ele =  unique(arr, 6);
	cout << ele;
	return 0;

}
