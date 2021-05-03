/* ######## THIS CODE BELONGS To##########
-------MD RISHAD NUR------
_____CSE,BRUR______
>>>>>mail: rishad.nur007@gmail.com<<<<<
*/

/*

APPROCH:
    1)Native approch: take input n. find n! and simplily find prime factorial of it. but you cant find more than 14! by this approch. it will overflow
    2)Optimized approch: find directly prime factorial of n! by formula.


    What i did in the code:
        a) stored all the prime number in primebox[] array using sieve.
        b) then i used a loop starting from 2 to <=n; and devided n as many as possiable and count it on a variable. that variable is our ans;
        b) then we move on 2 to 3 and again devide our given value as many as possiable and print the count;


*/




#include<bits/stdc++.h>
using namespace std;

#define big 10000

long long int ayyy[big+3]={0};
long long int primebox[big+3];
long long int c,gk;

void go()
{

    //in this function i stored all the prime numbers.
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

                    //devide the number as many as possiable

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
