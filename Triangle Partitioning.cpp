/* ######## THIS CODE BELONGS To##########
-------MD RISHAD NUR------
_____CSE,BRUR______
>>>>>mail: rishad.nur007@gmail.com<<<<<
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c,d,x,s,f,h,z,y;
    long int i,j,n;
    cin>>n;
    j=1;
    while(n--)
    {
        cin>>a>>b>>c>>d;
        //h=(a+b+c)/2;
        /* x=sqrt(h*(h-1)*(h-b)*(h-c));
        z=x/(d+1);
        z=z*d;
        s=sqrt(z/x)*a;
        this also print right value
        */

        s=a*sqrt(d/(d+1));

        cout<<setprecision(10)<<fixed;

        cout<<"Case "<<j<<": "<<s<<endl;
        j++;
    }





    return 0;
}
