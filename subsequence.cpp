#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

void calculate(int n,int &add,int &multi)
{
    int a,b,c;
    a=n/100;
    n%=100;
    b=n/10;
    c=n%10;
    add=add+a+b+c;
    multi=multi*a*b*c;
}

int main()
{
   int j,k;
   for(int i=123;i<=333;i++)
   {
       int add=0,multi=1;
     j=i*2;
     k=i*3;
     calculate(i,add,multi);
     calculate(j,add,multi);
     calculate(k,add,multi);
     if(add==45&&multi==362880) cout<<i<<" "<<j<<" "<<k<<endl;
   }
    return 0;
}
