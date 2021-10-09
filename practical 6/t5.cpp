#include<iostream>
using namespace std;
int main()
{
string a,b;
cout<<"Enter 1st string: ";
getline(cin,a);
cout<<"\nEnter 2nd string: ";
getline(cin,b);

int x=a.compare(b);
if(x==0)
	cout<<"BOTH STRINGS ARE EQUAL"<<endl;
else if(x>0)
	cout<<"STRING 1 IS LARGER "<<endl;
else
	cout<<"STRING 1 IS SMALLER"<<endl;
return 0;
}
