#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
    int a,b,c,m,judge=0,n;
    cin>>a>>b>>c;
    if((10-b)%5==0) m=(10-b)/5;
    else m=(10-b)/5+1;
    for(;m<=(100-b)/5&&judge==0;m++)
    {
      if((m*5+b-a)%3==0&&(m*5+b-c)%7==0) judge=1,n=m;
    }
    if(judge==1) cout<<5*n+b<<endl;
    else cout<<"No answer"<<endl;
    printf("Time used=%.2f\n",(double)clock()/CLOCKS_PER_SEC);
    return 0;
}
//韩信点兵
