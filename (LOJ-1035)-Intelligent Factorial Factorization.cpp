/* ######## THIS CODE BELONGS To##########
-------MD RISHAD NUR------
_____CSE,BRUR______
>>>>>mail: rishad.nur007@gmail.com<<<<<
*/


#include<bits/stdc++.h>
using namespace std;

#define big 10000

long long int ayyy[big+3]={0};
long long int primebox[big+3];
long long int c,gk;

void go()
{
    long long int i,j;
    for(i=2;i<=big;i++)
    {
        if(ayyy[i]==0)
        {
            for(j=i*i;j<=big;j=j+i)
            {
                ayyy[j]=1;
            }
        }
    }
    for(i=2;i<=big;i++)
    {
        if(ayyy[i]==0)
        {
            primebox[c]=i;
            c++;
        }
    }
    return;
}



int main()
{
    long long int t=1,test;
    go();
    cin>>test;
    while(test--)
    {
        unsigned long long int n,i,j,k,x,l=1,s,power,base,f=0;;
        cin>>n;

        cout<<"Case "<<t<<": "<<n<<" = ";
        t++;

        for(i=0;primebox[i]<=n;i++)
        {
            power=0;
            x=n;


                while(x/primebox[i])
                {
                    power=power+(x/primebox[i]);


                    x=x/primebox[i];
                }
                if(f==0)
                {
                    cout<<primebox[i]<<" "<<"("<<power<<")";
                    f=1;
                }
                else
                {
                    cout<<" * "<<primebox[i]<<" "<<"("<<power<<")";
                }

        }
        cout<<endl;
    }

    return 0;
}
