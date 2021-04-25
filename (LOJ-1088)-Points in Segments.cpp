/* ######## THIS CODE BELONGS To##########
-------MD RISHAD NUR------
_____CSE,BRUR______
>>>>>mail: rishad.nur007@gmail.com<<<<<
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i,j,k,l,x,y,f,s,t,v;
    cin>>t;
    j=1;
    while(t--)
    {
        cin>>n>>k;
        vector<long long int>arrr;
        for(i=0;i<n;i++)
        {
            cin>>v;
            arrr.push_back(v);
        }
        sort(arrr.begin(),arrr.end());


        cout<<"Case "<<j<<":"<<endl;
        while(k--)
        {
            cin>>x>>y;
            f=lower_bound(arrr.begin(),arrr.end(),x)-arrr.begin();
            l=upper_bound(arrr.begin(),arrr.end(),y)-arrr.begin();

            cout<<l-f<<endl;

        }
        j++;
    }
    return 0;
}
