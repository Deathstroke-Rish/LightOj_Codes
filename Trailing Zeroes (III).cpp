/* ######## THIS CODE BELONGS To##########
-------MD RISHAD NUR------
_____CSE,BRUR______
>>>>>mail: rishad.nur007@gmail.com<<<<<
*/
#include <bits/stdc++.h>
#define big  1e18
using namespace std;

long long int countt(long long int n)
{
    long long int i,j,z=0;
    for(i=5;i<=n;i*=5)
    {
        z=z+(n/i);
    }
    return z;
}


int main()
{
    long long int n,i,j,k,h,l,x,y,f,s,t;
    cin>>t;
    j=1;


    while(t--)
    {
        cin>>k;
        l=1;
        h=big;
        f=-1;

        while(l<=h)
        {
            x=(l+h)/2;
            s=countt(x);

            if(s>k)
            {
                h=x-1;
            }
            else if(s<k)
            {
                l=x+1;
            }
            else
            {
                f=x;
                h=x-1;
            }
        }



        cout<<"Case "<<j<<": ";
        if(f==-1)
        {
            cout<<"Impossible"<<endl;
        }
        else
        {
            cout<<f<<endl;
        }

        j++;
    }

    return 0;
}
