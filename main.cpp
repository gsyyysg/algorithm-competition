#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string instruc,str;
    char key;
    int line,column,judge=1;
    char table[5][5];
    for(int i=0;i<5;i++)
    {
        getline(cin,str);
     for(int j=0;j<5;j++)
    {
        key=str[j];
        table[i][j]=key;
        if(key==' ') line=i,column=j;
    }}
    cin>>instruc;
    for(int i=0;i<instruc.size()&&instruc[i]!='0';i++)
    {
        if(instruc[i]=='A'&&line>0) table[line][column]=table[line-1][column],table[line-1][column]=' ',line--;
        else if(instruc[i]=='B'&&line<4) table[line][column]=table[line+1][column],table[line+1][column]=' ',line++;
        else if(instruc[i]=='L'&&column>0) table[line][column]=table[line][column-1],table[line][column-1]=' ',column--;
        else if(instruc[i]=='R'&&column<4) table[line][column]=table[line][column+1],table[line][column+1]=' ',column++;
        else {cout<<"This puzzle has no final configuration."<<endl,judge=0;break;}
    }
    if(judge==1)
        for(int i=0;i<5;i++)
        {
          for(int j=0;j<4;j++)
             cout<<table[i][j];
             cout<<table[i][4]<<endl;
        }
    return 0;
}
