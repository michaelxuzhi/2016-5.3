#include <iostream.h> 
int main() 
{  
int x,y,d,m=31,n=30,l=28; 
cin>>x>>y;                      //x��ʾ��y��ʾ�� 
switch(x) 
{ 
case 1: 
case 3: 
case 5: 
case 7: 
case 8: 
case 10:  
case 12:
cout<<"��������="<<m<<endl;
break; 
case 4: 
case 6: 
case 9:  
case 11:
cout<<"��������="<<n<<endl;
break; 
}  
if(y%4==0&&y%100!=0||y%400==0&&x==2) 
{ 
d=29;  
cout<<"��һ��Ķ��·�����="<<d<<endl; 
} 
else {
d=28;
cout<<"��һ��Ķ��·�����="<<d<<endl;
}
return (d); 
}