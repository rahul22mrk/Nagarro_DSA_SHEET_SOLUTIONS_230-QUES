#include<bits/stdc++.h>
using namespace std;
int strength;
bool checkStrength(vector<vector<char>>arr,int m,int n,int k ,int s)
{
	if(s<k)
		return false;
	for(int i=0;i<m;i++)
	{

		for(int j=0;j<n;j++)
		{

			if(arr[i][j]=='.')
			{
				s-=2;
				if(j<n-1)s--;
			}
	        else if(arr[i][j]=='*')
			{
					s+=5;
			if(j<n-1)
				s--;
	        }
	        else if(arr[i][j]=='#')
			{
                break;
			}
			if(s<k)
				return false;

		}
	}
	strength=s;
	return true;
}
int main()
{

	int m,n,k,s;
	cin>>m>>n>>k>>s;
	//char arr[m][n];
	vector<vector<char>>arr;
	for(int i=0;i<m;i++)
	{
       vector<char>temp;
		for(int j=0;j<n;j++)
		{
			char ch;
			cin>>ch;

			temp.push_back(ch);
		}
		arr.push_back(temp);

	}

	if(checkStrength(arr,m,n,k,s))
		{
			cout<<"YES"<<endl;
			cout<<strength;
		}
		else
			cout<<"NO";

}
