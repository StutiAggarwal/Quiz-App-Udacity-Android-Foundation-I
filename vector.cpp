#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;
void showlist(list<int> l)
{
	list<int>::iterator t;
	list<int>::iterator p;
	list<int> d(l.begin(),l.end());
	for(t=l.begin();t!=l.end();t++)
	{
		*t=*t+*t;
		cout<<*t<<" ";
	}
	cout<<endl;
	p=max_element(l.begin(),l.end());
	t=min_element(l.begin(),l.end());
	cout<<*t<<endl;
	cout<<*p;
}
int main() {
int n;    //no. of elements
list<int> l;
list<int> st;
cin>>n;
int num;
for(int i=0; i<n; i++)
    {
		cin>>num;
		l.push_back(num);      
    }
showlist(l);
return 0;
}

