#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
    int n,t;
    cin>>n;
    for(int i=n,j=0;i>=1;i--,j++)
    {
        for( t=0;t<j;t++)
            cout<<' ';
        for(t=0;t<2*i-1;t++)
            cout<<'*';
        for(t=0;t<j;t++)
            cout<<' ';
            cout<<endl;
    }
    printf("Time used=%.2f\n",(double)clock()/CLOCKS_PER_SEC);
    return 0;
}
