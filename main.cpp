#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main()
{
    string str,s;
    cin>>str;
    int length=str.size(),judge=0;;
    for(int i=0;i<str.size();i++)
    {
      if(i==0) s+=str[0];
      else
      {
          if(s[0]==str[i]&&length%s.size()==0)
          {
              string t;
              for(int j=0;j<length/s.size();j++)
                t+=s;
              if(str==t) judge=1,cout<<s.size()<<endl;
          }
          else s+=str[i];
      }
    }
    if(judge==0) cout<<length<<endl;
    return 0;
}
