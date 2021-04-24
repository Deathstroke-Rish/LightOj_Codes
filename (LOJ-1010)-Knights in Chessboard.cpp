/* ######## THIS CODE BELONGS To##########
-------MD RISHAD NUR------
_____CSE,BRUR______
>>>>>mail: rishad.nur007@gmail.com<<<<<
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n,t,i,j,k,g;
    cin>>t;
    int z=1;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int x,y;
        x=min(a,b);
        y=max(a,b);
        j=y;
        g=y;
        k=0;
        bool flg=true;
        bool ghj=true;
        long int s=0;
        if(x<3 || y<3)
        {
            if(x==1)
            {
                s=y;
            }
            else if(y==1)
            {
                s=x;
            }
            else if(x==2)
            {
                int ek=0, dui=0;
                for(i=1;i<=y;i=i+4)
                {
                    ek++;
                }
                for(i=2;i<=y;i=i+4)
                {
                    dui++;
                }
                s=(ek+dui)*2;

            }
        }
        else
        {
            if(a%2!=0 && b%2!=0)
        {

            if(x%2!=0)
            {
                x=(x+1)/2;
            }
            if(y%2!=0)
            {
                y=(y+1)/2;
            }



            for(i=0;i<j;i++)
            {
                if(flg)
                {
                    s=s+x;
                    flg=false;
                }
                else
                {
                    s=s+x-1;
                    flg=true;
                }

            }
        }
        else if(x%2!=0 || y%2!=0)
        {
            if(x%2!=0)
            {
                x=(x+1)/2;
                for(i=0;i<y;i++)
                    {

                    if(flg)
                    {
                        s=s+x;
                        flg=false;
                    }
                    else
                    {
                        s=s+x-1;
                        flg=true;
                    }
                }
            }
            else if(y%2!=0)
            {
                    y=(y+1)/2;
                    for(i=0;i<x;i++)
                    {


                    if(flg)
                        {
                            s=s+y;
                            flg=false;
                        }
                    else
                        {
                            s=s+y-1;
                            flg=true;
                        }
                    }
            }

        }
        else if(x%2==0 && y%2==0)
        {
            x=x/2;
            for(i=0;i<y;i++)
            {
                s=s+x;
            }
        }
        }
        cout<<"Case "<<z<<": "<<s<<endl;
        z++;
    }



    return 0;
}
