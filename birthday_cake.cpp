#include <iostream>
using namespace std;
int main()
{
    int n,d,m,i,c=0;
    cout<<"Enter the sets of inputs: ";
    cin>>n;
    int a[n];
    cout<<"Enter the values for the chocolate bar:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    cout<<"Enter the date and month of birth: ";
    cin>>d>>m;
    if(n==1)
    {
        if(a[0]%d==0)
        c+=1;
    }
    else
    {
    for(i=0;i<n-1;i++)
    {
        if((a[i]+a[i+1])%d==0)
        c+=1;
    }
    }
    cout<<c;
}

