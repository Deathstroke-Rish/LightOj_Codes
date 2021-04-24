/* ######## THIS CODE BELONGS To##########
-------MD RISHAD NUR------
_____CSE,BRUR______
>>>>>mail: rishad.nur007@gmail.com<<<<<
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int t,k=1;
    cin>>t;

    while(t--)
    {
        string s1,s2,s3;

        long long int n,r,i,j,d,x;
        d=0;
        r=0;
        cin>>s1>>s2;
        n=s1.size();
        stringstream box;
        box<<s2;
        box>>x;
        if(x<0)
        {
            x=x*(-1);
        }
        d=0;
        j=0;
        if(s1[0]=='-')
        {
            j=1;
        }
        for(i=j;i<n;i++)
        {
            d=(10*d)+(s1[i]-'0');
            d=d%x;
        }

        if(d==0)
        {
            cout<<"Case "<<k<<": divisible"<<endl;
        }
        else
        {
            cout<<"Case "<<k<<": not divisible"<<endl;
        }
        k++;


    }


    return 0;





}
