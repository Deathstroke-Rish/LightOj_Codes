#include<bits/stdc++.h>
using namespace std;

#define data 5000000

//simply this problem will take much memory if we declare phi[] array as long long int.
//so we will declare it as int. and then we will increase it,
int phi[data+2];
unsigned long long int Sumation[data+2];

//First we need to find Euler's totient function for every single number from 1 to 5000000

void init(long int n)
{
    for(long long int i=1;i<=n;i++)
    {
        phi[i]=i;
    }
    for(long long int i=2;i<=n;i++)
    {
        if(phi[i]==i)
        {
            for(long long int j=i;j<=n;j+=i)
            {
                phi[j]/=i;
                phi[j]*=(i-1);
                //this is simple Euler's totient function formula;
            }
        }
    }

}

int main()
{
    init(data);
    // now we assign 0 at index 1 of array Sumation;
    Sumation[1]=0;

    for(long long int i=2;i<=data;i++)
    {
        Sumation[i]=((unsigned long long)phi[i]*(unsigned long long)phi[i])+Sumation[i-1];
        //Here we increased phi[] int to unsigned long long int. it is the first trick of the problem.
        // the the second trick is: we have to find the sumation of sqare value of ewlars phi of many numbers.
        //so we will use  cumulative sum array  . where we will store pre-sum of 1 to n; then we will take input from user and call it.
    }



    int t,test;
    cin>>test;
    t=1;
    while(test--)
    {
        long long int n,m;
        cin>>n>>m;
        //now we will call sum from n to m from Sumation[] array where we already stored all sum of Euler's totient function of
        // numbers 1 to 500000. we here call the sum what we need.
        cout<<"Case "<<t<<": "<<Sumation[m]-Sumation[n-1]<<endl;
        t++;

    }

    return 0;
}
