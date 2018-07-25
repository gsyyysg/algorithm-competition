#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
   int a,b,c;
   while((scanf("%d %d %d",&a,&b,&c))!=EOF&&!(a==b&&b==c&&c==0))
   {
   cout.precision(c);
   cout<<double(a)/double(b)<<endl;
   }
    return 0;
}
