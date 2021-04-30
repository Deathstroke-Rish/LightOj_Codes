/* In this problem we have  convert the given number to any base then the number in that base should have at least one trailing zero,
that means a zero at the end.
before go we need to focus on something. it the number is 10. then it can have at lest one tailing zero on 2 base, 5 base and 10 base number system.
again, if the number is 20, then it can have at lest one tailing zero on 2 base, 5 base, 10 base and 20 base number system.
if we look carefully, we can se that all the base are its divisors. so if we can find its divisors, we can find its ans.


    in this problem we may face some problem.
    #1 TLE. because if we traditionally find our divisors, then we will use the divisors function on and on, the time complexity will be huge.


    What I did in the code:
        1. Firstly stored all the prime numbers in an array called prime[] using seive method.
        2. then i used a loop to find how many time given number can be devided by those prime numbers.
        3. then i uncreased the value by 1 and multipled all. and (ans-1)  is the ans.
        (for example: if the number is 20. then it can be devided by 2 about 2 times and by 5 about 1 time.
        20= 2^2*5^1; so the ans={(2+1)*(1+1)-1}
        60=2^2*3*1*5^1; so the ans={(2+1)*(1+1)*(1+1)}  )
*/


#include<bits/stdc++.h>

using namespace std;

#define big 1000010

long long int arr[big]={0};
long long int prime[big];
long long int p;


void gth()
{
    long long int i,j;
    for(i=2;i*i<=big;i++)
    {
        if(arr[i]==0)
        {
            for(j=i*i;j<=big;j+=i)
            {
                arr[j]=1;
            }
        }
    }
    for(i=2;i<=big;i++)
    {
        if(arr[i]==0)
        {
            prime[p]=i;
            p++;
        }
    }

}
//USed seive to store prime number on array.

int main()

{
    long long int test,n,i,j,k=0,t=1;
    gth();

    cin>>test;

    while(test--)
    {
        cin>>n;
        long long int s=1,df=1,st=0,temp;



            while(prime[st]*prime[st]<=n && st<big)
            {
                df=1;

                while(n%prime[st]==0)
                {
                    df++;
                    n=n/prime[st];
                    if(n==0 || n==1)
                        break;
                }
                st++;
                s=s*df;
                //cout<<s<<endl;

            }
            //checked how many time can be devisiable.

        if(n!=1)
            s*=2;
            //as because we checked only i*i time the number is divisiable or not. so we just multipled it by 2.

        cout<<"Case "<<t<<": "<<s-1<<endl;
        t++;
    }



    return 0;
}
