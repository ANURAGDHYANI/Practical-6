#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string a="ANURAG";
	reverse(a.begin(),a.end());
	cout<<"using reverse function: "<<a<<endl;
	
	string b="DHYANI";
	cout<<"Manually reversing\n";
	for(int i=b.size()-1;i>=0;i--)
	 cout<<b[i];
	cout<<"\n";
return 0;
}
