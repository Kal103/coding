/* author : @akash kumar 
   github : https://www.github.com/Akash671
*/

/* 
problem is:-
problem statement link - https://prepinsta.com/tcs-coding-question-1/
*/

#include<iostream>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int t=1;
    int x=0;
    int y=0;
    int d=10;
    while(n--)
    {
       	if(t==1)
       	{
       		x+=d;
       		t=2;
       		d=d+10;
       	}
       	else if(t==2)
       	{
       		y+=d;
       		t=3;
       		d=d+10;
       	}
       	else if(t==3)
       	{
       		x-=d;
       		t=4;
       		d=d+10;
       	}
       	else if(t==4)
       	{
       		y-=d;
       		t=5;
       		d=d+10;
       	}
        else
       	{
       		x+=d;
       		t=1;
       		d=d+10;
       	}
    }
    cout<<x<<" "<<y;
}

int main()
{
    solve();
    cout<<"\n";
	return 0;
}


// time complexity is :- T(n)=O(n)
