
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string s,a;
	cout<<"Enter string:";
	getline(cin,s);
	
	for(int i=s.size()-1;i>=0;i--)
		a.push_back(s[i]);
		
	if(a==s)
		cout<<"is palindrome \n";
	else
		cout<<"not palindrome \n";
return 0;
}
