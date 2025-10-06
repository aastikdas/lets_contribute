#include <iostream>
using namespace std;
int main()
{
   int count;
   long ar,arr=0;
   cin>>count;
   for(int i=0;i<count;i++)
   {
       cin>>ar;
       arr+=ar;
   }
   cout<<arr;

    return 0;
}
