#include <iostream.h> 
int main() 
{  
int x,y,d,m=31,n=30,l=28; 
cin>>x>>y;                      //x表示月y表示年 
switch(x) 
{ 
case 1: 
case 3: 
case 5: 
case 7: 
case 8: 
case 10:  
case 12:
cout<<"当月天数="<<m<<endl;
break; 
case 4: 
case 6: 
case 9:  
case 11:
cout<<"当月天数="<<n<<endl;
break; 
}  
if(y%4==0&&y%100!=0||y%400==0&&x==2) 
{ 
d=29;  
cout<<"这一年的二月份天数="<<d<<endl; 
} 
else {
d=28;
cout<<"这一年的二月份天数="<<d<<endl;
}
return (d); 
}