#include <iostream>
using namespace std;
int main()
{
    int h,h1,m;
    string hh,mm,s,s1;
    cout<<"Enter the hours: ";
    cin>>h;
    cout<<"Enter the minutes: ";
    cin>>m;
    if(m>30)
    {
        h1=h+1;
        m=60-m;
    }
    else
    {
        h1=h;
    }
    if(m==1)
    mm="one";
    else if(m==2)
    mm="two";
    else if(m==3)
    mm="three";
    else if(m==4)
    mm="four";
    else if(m==5)
    mm="five";
    else if(m==6)
    mm="six";
    else if(m==7)
    mm="seven";
    else if(m==8)
    mm="eight";
    else if(m==9)
    mm="nine";
    else if(m==10)
    mm="ten";
    else if(m==11)
    mm="eleven";
    else if(m==12)
    mm="twelve";
    else if(m==13)
    mm="thirteen";
    else if(m==14)
    mm="fourteen";
    else if(m==15)
    mm="quarter";
    else if(m==16)
    mm="sixteen";
    else if(m==17)
    mm="seventeen";
    else if(m==18)
    mm="eighteen";
    else if(m==19)
    mm="nineteen";
    else if(m==20)
    mm="twenty";
    else if(m==21)
    mm="twenty one";
    else if(m==22)
    mm="twenty two";
    else if(m==23)
    mm="twenty three";
    else if(m==24)
    mm="twenty four";
    else if(m==25)
    mm="twenty five";
    else if(m==26)
    mm="twenty six";
    else if(m==27)
    mm="twenty seven";
    else if(m==28)
    mm="twenty eight";
    else if(m==29)
    mm="twenty nine";
    else if(m==30)
    mm="half";
    if(h1==1)
    hh="one";
    else if(h1==2)
    hh="two";
    else if(h1==3)
    hh="three";
    else if(h1==4)
    hh="four";
    else if(h1==5)
    hh="five";
    else if(h1==6)
    hh="six";
    else if(h1==7)
    hh="seven";
    else if(h1==8)
    hh="eight";
    else if(h1==9)
    hh="nine";
    else if(h1==10)
    hh="ten";
    else if(h1==11)
    hh="eleven";
    else if(h1==12)
    hh="twelve";
    else if(h1==13)
    hh="thirteen";
    else if(h1==14)
    hh="fourteen";
    else if(h1==15)
    hh="fifteen";
    else if(h1==16)
    hh="sixteen";
    else if(h1==17)
    hh="seventeen";
    else if(h1==18)
    hh="eighteen";
    else if(h1==19)
    hh="nineteen";
    else if(h1==20)
    hh="twenty";
    else if(h1==21)
    hh="twenty one";
    else if(h1==22)
    hh="twenty two";
    else if(h1==23)
    hh="twenty three";
    else if(h1==24)
    hh="twenty four";
    if(h1!=h)
    {   if(m==1)
    {
        s1="";
        s1+=mm+" minute to "+hh;
    }
      else if(m<30 && m!=15)
    {
        s1="";
        s1+=mm+" minutes to "+hh;
    }
     else if(m==15)
    {
        s1="";
        s1+=mm+" to "+hh;
    }
    }
    else{
    if(m==0)
    {
        mm="o'";
        s1="";
        s1+=hh+" "+mm+" "+"clock";
    }
    else if(m==1)
    {
        s1="";
        s1+=mm+" minute past "+hh;
    }
     else if(m<30 && m!=15)
    {
        s1="";
        s1+=mm+" minutes past "+hh;
    }
     else if(m==15)
    {
        s1="";
        s1+=mm+" past "+hh;
    }
     else if(m==30)
    {
        s1="";
        s1+=mm+" past "+hh;
    }}
    cout<<s1;
}
