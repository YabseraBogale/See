#include<iostream>
using namespace std;
int a,b,c;
int sort(int,int,int);
int main()
{
  int x,y,z,res;
  
  cout<<"enter the numbers to be compared"<<endl;
  cin>>x;
  cin>>y;
  cin>>z;
  res=sort(x,y,z);
  cout<<res;
   
return 0;
}
int sort(int a,int b,int c)
{
 if(a>b)
     {
       if(b>c)
       cout<<a<<" > "<<b<<"> "<<c;
       else 
       cout<<c<<" > "<<a<<"> "<<b;
    }
else if(b>a)
{
  if(a>c)
  cout<<b<<" > "<<a<<"> "<<c;
   else
   cout<<c<<" > "<<b<<"> "<<a;    
  }
else if(c>a)
{
  if(a>b)
  cout<<c<<" > "<<a<<"> "<<b;
  else
  cout<<b<<" > "<<c<<"> "<<a;
  }
  return 0;  
}
