#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    op();
    set<int> s;

    int n;
    cin>> n;

    int p1;
    cin>>p1;

    for(int i=0; i<p1; i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
    int p2;
    cin>>p2;

    for(int i=0; i<p2; i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
    if(s.size()==n) cout<< "I become the guy."<<endl;
    else cout<< "Oh, my keyboard!"<<endl;

    return 0;
}







