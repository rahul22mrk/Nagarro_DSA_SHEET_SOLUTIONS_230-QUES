#include<bits/stdc++.h>
using namespace std;
bool palindrome(int arr[],int l,int h)
{

	if(l<=h)
	{
		int left=arr[l];
		int right=arr[h];
		if(left!=right)
			return false;
			l++;
			h--;
		return palindrome(arr,l,h);
	}
	return true;
}
int main()
{

	int n;
	cout<<"Enter the size of the array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter the Input Data ";
	for(int i=0;i<n;i++)
	{

		cin>>arr[i];
	}
    if(palindrome(arr,0,n-1))
	{

		cout<<"Given Data is Palindrome ";
	}
	else
		cout<<"Given Data is not Palindrome ";
}
