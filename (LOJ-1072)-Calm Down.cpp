/* ######## THIS CODE BELONGS To##########
-------MD RISHAD NUR------
_____CSE,BRUR______
>>>>>mail: rishad.nur007@gmail.com<<<<<
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a,b,c,d,x,s=0,f,h,z,y;
    long int i,j,n;
    cin>>n;
    j=1;
    while(n--)
    {
        cin>>x>>y;
        z=(360/y)/2;
        z=z*M_PI/180;
        //cout<<sin(z)<<endl;
        s=(x*sin(z))/(1+sin(z));
        cout<<setprecision(10)<<fixed;
        cout<<"Case "<<j<<": "<<s<<endl;
        j++;
    }





    return 0;
}
