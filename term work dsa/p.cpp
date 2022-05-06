#include <iostream>
using namespace std;
 
int main()
{
 
    char str[100];
    int i,j,len,len1;
 
    cout<<"INPUT-";
    cin>>str;
     
    /*calculating length*/
    for(len=0; str[len]!='\0'; len++);
 
    /*assign 0 to len1 - length of removed characters*/
    len1=0;
 
    /*Removing consecutive repeated characters from string*/
    for(i=0; i<(len-len1);)
    {
        if(str[i]==str[i+1])
        {
            /*shift all characters*/
            for(j=i;j<(len-len1);j++)
                str[j]=str[j+1];
            len1++;
        }
        else
        {
            i++;
        }
    }
 
    cout<<"OUTPUT-"<<str;
 
    return 0;
}