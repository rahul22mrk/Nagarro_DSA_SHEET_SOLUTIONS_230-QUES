#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		long double n,k;
      cin>>n>>k;

		long double logn=log(n)/k;

		long double x=exp(logn) ;
		cout<<(int)(x)<<endl;
	}
}
