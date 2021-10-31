#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int N,C;
    cin>>N>>C;
    if (C>10)
        cout<<"";
    else if(C>N)
    {
        for(int i=1;i<=N;i++)
        {
            for(int j=i;j<C;j++)
            {
                cout<<"* ";
            }
            cout<<"*";
            cout<<'\n';
        }
    }
    else if(N>C)
    {
        for(int i=1;i<=N;i++)
        {
            for(int j=i;j<C;j++)
            {
                cout<<"* ";
            }
            if(i<=C && i!=2)
            {
               cout<<"*";
               cout<<endl;
            }
            else if(i==2)
            {
                cout<<"* ";
                cout<<'\n';
            }
            else
            {
                cout<<'\n';
            }
        }
    }
}
