/* ######## THIS CODE BELONGS To##########
-------MD RISHAD NUR------
_____CSE,BRUR______
>>>>>mail: rishad.nur007@gmail.com<<<<<
*/
#include <bits/stdc++.h>

using namespace std;
int makedeci(string s)
{
    int n,i,p,sum=0,k=0;
    n=s.size();
    int h=n-1;
    for(i=0;i<n;i++)
    {
        k=s[i]-'0';

        k=k*(pow(10,h));
        //cout<<k<<endl;
        sum=sum+k;
        h--;

    }

    return sum;
}
int toint(string s)
{
    int i,j,k,x,sum=0;
    x=s.size();
    k=1;
    reverse(s.begin(),s.end());
    for(i=0;i<x;i++)
    {
        if(s[i]=='1')
        {
            sum=sum+k;
        }
        k=k*2;
    }

    return sum;
}

int main()
{
    int n,i,j,x,a,b,c,d,t,w=1;


    cin>>t;

    while(t--)
    {
        string box,first,second,third,forth;
        string contain, A,B,C,D;

        cin>>box>>contain;
        int f=0;
        int fuck=box.size();
        int sex=contain.size();

        int start,finish;
        start=0;
        finish=box.find('.');
        first=box.substr(0,finish);

        start=finish+1;
        finish=0;
        for(i=start;box[i]!='.';i++)
        {
            finish++;
        }
        //finish=(finish,'.');
        second=box.substr(start,finish);

        start=first.size()+second.size()+2;
        finish=0;
        for(i=start;box[i]!='.';i++)
        {
            finish++;
        }
        third=box.substr(start,finish);

        start=first.size()+second.size()+third.size()+3;
        finish=0;

        forth=box.substr(start);
        // ekhon porer kaj

        start=0;
        finish=contain.find('.');
        A=contain.substr(0,finish);
        //cout<<A<<endl;

        start=finish+1;
        finish=0;
        for(i=start;contain[i]!='.';i++)
        {
            finish++;
        }
        B=contain.substr(start,finish);
        //cout<<B<<endl;

        start=A.size()+B.size()+2;
        finish=0;
        for(i=start;contain[i]!='.';i++)
        {
            finish++;
        }
        C=contain.substr(start,finish);
        //cout<<C<<endl;
        start=A.size()+B.size()+C.size()+3;
        D=contain.substr(start);
        //cout<<D<<endl;

        if((makedeci(first)==toint(A)) &&(makedeci(second)==toint(B))&&(makedeci(third)==toint(C)) && (makedeci(forth)== toint(D)))
        {
            cout<<"Case "<<w<<": Yes"<<endl;
        }
        else
            cout<<"Case "<<w<<": No"<<endl;

        w++;
    }



    return 0;


}
