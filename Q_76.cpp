#include<bits/stdc++.h>
using namespace std;

int main(){
 string str;
 cout<<"Enter the Input ";
 cin>>str;
 int len=str.size();
 int i=0,j=len-1;
 for(int i=0;i<len-1; )
 {

 	string temp="";
 	temp+=str[i];

 	while(!(str[i+1]>=65&&str[i+1]<=92))
	{

		temp+=str[i+1];
		i++;
		if(str[i+1]==' ')
			break;

	}
   i++;
	cout<<temp<<endl;

 }
}
