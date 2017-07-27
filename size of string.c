#include<iostream>
#include<string>
using namespace std;


int main()
{int n;

    char a[n];

    std::cout<<"\n Enter the range";
    cin>>n;
    std::cout<<"\n Enter the letters";
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(int i=0;i<n;i++)
{
    std::cout<<"\n THe letters are "<<a[i];
}
int len=strlen(a);
std::cout<<"\n THe size is "<<len;
    
    return 0;
    
}
