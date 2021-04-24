/* ######## THIS CODE BELONGS To##########
-------MD RISHAD NUR------
_____CSE,BRUR______
>>>>>mail: rishad.nur007@gmail.com<<<<<
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int t,j=1;
    cin>>t;
    while(t--)
    {
        long long int p,m,n,s1,s2,sum,i,b;
        cin>>n>>m;
        vector<long long int>vc;
        if(n%(2*m)!=0)
        {
            sum=0;
        }

       else
       {
            s1=n/2;
            sum=s1*m;
       }
        cout<<"Case "<<j<<": "<<sum<<endl;
        j++;
    }



    return 0;


}
