#include <iostream>
using namespace std;
int main()
{
    int n,a=0,i,c,b=0;
    cout<<"Enter the no. of steps: ";
    cin>>n;
    char arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(i=0;i<n;i++)
    {
        if(arr[i]=='U')
        a+=1;
        else if(arr[i]=='D')
        b+=1;
    }
    c=a-b;
    if(c==0)
    c=1;
    else if(c<0)
    c=0;
    cout<<c;
}
