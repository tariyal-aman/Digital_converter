#include<iostream>
#include<math.h>
#include<stdio.h>
#include<process.h>
#include<cstdlib>
#include<stdio.h>
using namespace::std;
int az(long long int a,int n)
{
	int x,y,z=0;
	while(a!=0)
	{
		x=a%10;
		a=a/10;
		if(n==2)
		  if(!(x>=0&&x<=1))
		  return 0;
		if(n==8)
		  if(!(x>=0&&x<8))
           return 0;
		if(n==10)
		  if(!(x>=0&&x<=9))	
		  return 0;
		  
	if(a==0)
	++z;	
		
	}
if(z==1)
return 1;
}
long long int input(int &z,int n);
void out(long long int n,int p)
{
	int z=0,a,i=0;
	long long int t=0;

		while(n!=0)
	{
		 a=n%10;
		n=n/10;
		a=a*pow(p,i);
		t=t+a;
		++i;

	}
//	////////////system("color fc");
	cout<<"in decimal format = ";
	cout<<t;
	cout<<"\n";

}

void octbin(long long int n)
{
	int ar[100],a,b,c=0,i=0,j;
	while(n>=0)
	{
		c=0;
		a=n%10;
		n=n/10;
		while(a>=0)
		{
			ar[i]=a%2;
			a=a/2;
			++i;
			if(a<2)
			{
			
			ar[i]=a;
	         ++i;
	         ++c;
	         break;
		}
    ++c;
	}
	if(c!=2)
{	
	ar[i]=0;
++i;
}
if(n==0)
break;
	}
//	////////////system("color fc");
	cout<<"in binary format= ";
for(b=i-1;b>=0;--b)
cout<<ar[b];
cout<<"\n";
}
void octhex(long long int n)
{
	int z,x=0,ar[100],br[50],a,b,c=0,i=0,j;
	while(n>=0)
	{
		c=0;
		a=n%10;
		n=n/10;
		while(a>=0)
		{
			ar[i]=a%2;
			a=a/2;
			++i;
			if(a<2)
			{
			
			ar[i]=a;
	         ++i;
	         ++c;
	         break;
		}
    ++c;
	}
	if(c!=2)
{	
	ar[i]=0;
++i;
}
if(n==0)
break;
	}

	int sum=0,v;
for(b=0;b<i;++b)
{
v=0;
	sum=0;
	for(z=0;z<4;++z)
	{
	sum=sum+ar[b]*pow(2,v);
	if(z<3)
	++b;
	if(b>=i)
	break;
	++v;
	}
	br[x]=sum;
	++x;
}
////////////system("color fc");
cout<<"in hexadecimal format = ";
for(b=x-1;b>=0;--b)
{
	 if(br[b]==10)
	 cout<<"A";
	 else if(br[b]==11)
	 cout<<"B";
	 else if(br[b]==12)
	 cout<<"C";
	 else if(br[b]==13)
	 cout<<"D";
	 else if(br[b]==14)
	 cout<<"E";
	 else if(br[b]==15)
	 cout<<"F";
	 else	
	cout<<br[b];
	
}
cout<<"\n";
}
void octal()
{
	int z=0;
long long int n= input(z,8);
if(z==1)
octbin(n);
else if(z==2)
out(n,8);
else if(z==3)
octhex(n);
else if(z==4)
{
	octbin(n);
	out(n,8);
	octhex(n);
}
else 
cout<<"you have entered a wrong choice so please make sure that you are entering a number from given choice only";
	
}
void binoct(long long int n)
{
int a,b,c=0,i=0,sum=0,ar[100];
while(n!=0)
{
	i=0;
	sum=0;
	for(b=0;b<3;++b)
	{
	a=n%10;
	n=n/10;
    sum=sum+a*pow(2,i);
	++i;
	if(n==0)
	break;
	}
	ar[c]=sum;
	++c;
	}
	////////////system("color fc");
	cout<<"in octal format = ";
	for(a=c-1;a>=0;--a)
	cout<<ar[a];	
	cout<<"\n";
}
void binhex(long long int n)
{
	
int a,b,c=0,i=0,sum=0,ar[100];
while(n!=0)
{
	i=0;
	sum=0;
	for(b=0;b<4;++b)
	{
	a=n%10;
	n=n/10;
    sum=sum+a*pow(2,i);
	++i;
	if(n==0)
	break;
	}
	ar[c]=sum;
	++c;
	}
	////////////system("color fc");
	cout<<"in hexadecimal format = ";
	for(a=c-1;a>=0;--a)
	{
     
	 if(ar[a]==10)
	 cout<<"A";
	 else if(ar[a]==11)
	 cout<<"B";
	 else if(ar[a]==12)
	 cout<<"C";
	 else if(ar[a]==13)
	 cout<<"D";
	 else if(ar[a]==14)
	 cout<<"E";
	 else if(ar[a]==15)
	 cout<<"F";
	 else	
	cout<<ar[a];
}
cout<<"\n";
}
void binary()
{
	int z=0;
long long int n= input(z,2)	;
if(z==1)
binoct(n);
else if(z==2)
out(n,2);
else if(z==3)
binhex(n);
else if(z==4)
{
	binoct(n);
	out(n,2);
	binhex(n);
}
else 
cout<<"you have entered a wrong choice so please make sure that you are entering a number from given choice only";
}
void high(long long int n,int a)
{
		long long t=0,m;
	int i=0,ar[100];
	while(n>=2)
	{
		ar[i]=n%a;
		n=n/a;
		++i;
		if(n<2)
		ar[i]=n;
	}
	////////////system("color fc");
	if(a==2)
	cout<<"in binary = ";
	else
	if(a==8)
	cout<<"in octal = ";
	else if(a==16)
	cout<<"in hexadecimal = ";
	int j;
	if(a!=16)
	for(j=i;j>=0;--j)
	cout<<ar[j];
	else
	{
		for(j=i;j>=0;--j)
		{
			if(ar[j]==10)
	 cout<<"A";
	 else if(ar[j]==11)
	 cout<<"B";
	 else if(ar[j]==12)
	 cout<<"C";
	 else if(ar[j]==13)
	 cout<<"D";
	 else if(ar[j]==14)
	 cout<<"E";
	 else if(ar[j]==15)
	 cout<<"F";
	 else	
	cout<<ar[j];
		}
	}
cout<<"\n";
}
void decimal()
{
	int z=0;
long long int n= input(z,10);
if(z==1)
high(n,2);
else if(z==2)
high(n,8);
else if(z==3)
high(n,16);
else if(z==4)
{
high(n,2);
high(n,8);
high(n,16);
}
else 
cout<<"you have entered a wrong choice so please make sure that you are entering a number from given choice only";
	
}
void hexbin(int x,int br[100])
{
	int i,j=0,n=0;
	for(i=x-1;i>=0;--i)
	{
	
	n=n+br[i]*pow(16,j);
++j;
}
	long long t=0,m;
	int ar[100];
	int r=0;
	while(n>=2)
	{
		ar[r]=n%2;
		n=n/2;
		++r;
		if(n<2)
		ar[r]=n;
	}
	////////////system("color fc");
	cout<<"in binary format= ";
	for(j=r;j>=0;--j)
	cout<<ar[j];
	cout<<"\n";
	}
	void hexdec(int x,int ar[100])
	{
	int i,j=0,k=0;
	for(i=x-1;i>=0;--i)
		{
			k=k+ar[i]*pow(16,j);
			++j;
		}
	////////////system("color fc");
		cout<<"in decimal format=";
	cout<<k<<"\n";
	}
void hexoct(int x,int ar[100])
{
	int i,j=0,k=0;
	for(i=x-1;i>=0;--i)
	{
	
	k=k+ar[i]*pow(16,j);
++j;
}
high(k,8);
}

void hexa();
int main()
{
	//system("color F4");
	puts("\t\twelcome to the digital conversion ");
	puts("select the format of number in which u want to conversion");
	puts("1.binary\n2.octal\n3.decimal\n4.hexadecimal");
	int a;
	puts("enter your choice");
	cin>>a;
	if(a==1)
	binary();
	else if(a==2)
	octal();
	else if(a==3)
	decimal();
	else if(a==4)
	hexa();
	else 
	cout<<"you have entered a wrong choice so please make sure that you are entering a number from given choice only";
system("pause");
}
void hexa()
{
	char ar[100];
	cout<<"enter a number of hexadecimal format ";
    cin.ignore();
    gets(ar);
    int l=0;
int a,i=0,z,j,br[100];
for(i=0;ar[i]!='\0';++i)
{
	if(ar[i]=='A')
	  a=10;
	else if(ar[i]=='B')
	  a=11;
	else if(ar[i]=='C')
	  a=12;
	else if(ar[i]=='D')
	  a=13;
	else if(ar[i]=='E')
	  a=14;
	else if(ar[i]=='F')
	  a=15;
    else if(ar[i]=='1')
	  a=1;
	else if(ar[i]=='2')
	  a=2;
	else if(ar[i]=='3')
	  a=3;
	else if(ar[i]=='4')
	  a=4;
	else if(ar[i]=='5')
	  a=5;
	else if(ar[i]=='6')
	  a=6;
	else if(ar[i]=='7')
	  a=7;
	else if(ar[i]=='8')
	  a=8;
	else if(ar[i]=='9')
	  a=9;
	else if(ar[i]=='0')
	  a=0;
	else
	{
		l=9;
		break;
		
	}
    br[i]=a;
}
if(l==0)
{
	
	puts("so now in which format you want to convert it");
	puts("1.binary\n2.octal\n3.decimal\n4.In all formats i.e. binary,octal and decimal");
	cin>>z;
	int b;
	if(z==1)
	hexbin(i,br);
	else if(z==2)
	hexoct(i,br);
	else if(z==3)
	hexdec(i,br);
    else if(z==4)
    {
    hexbin(i,br);
	hexoct(i,br);
	hexdec(i,br);
}
else 
cout<<"you have entered a wrong choice so please make sure that you are entering a number from given choice only";
	}
	else
	{
		if(system("CLS"));
		cout<<"\n\nyou have entered a number of wrong format please enter a number of selected format only\nA  number of hexadecimal formatt consist of of only DIGITS (from 1 TO 9) and ALPHABETS FROM A TO F\n\n\n";
		main();
	}
   }
   long long int input(int &z,int n)
{
	
	long long int a;
	cout<<"enter a number of format ";
	if(n==2)
	puts("binary");
	else if(n==8)
	puts("octal");
	else if(n==10)
	puts("decimal");
	else 
	cout<<"you have entered a wrong choice so please make sure that your are entering a number from given choice only";
	cin>>a;
	int s=az(a,n);
	if(s==0)
	{
	if(system("CLS"));
	cout<<"\n\nyou have entered a number of wrong format please enter a number of selected format only\n";
	if(n==2)
	puts("\n\nbinary number is a number which consist of 0 and 1 only so please enter a number of binary format only \n\n");
	else if(n==8)
	puts("\noctal number is a number which consist of digits from 0 to 7 only so please enter a number of octal format only\n\n");
	else if(n==10)
	puts("\ndecimal is a number which consist of digits from 0 to 9 only so please enter a number of decimal format only\n\n");
	else 
	puts("octal");
	main();
	exit(0);
	}
	puts("so now in which format you want to convert it");
	if(n==2)
	puts("1.octal\n2.decimal\n3.hexadecimal\n4.In all format i.e. octal,decimal,hexadecimal");
	else if(n==8)
	puts("1.binary\n2.decimal\n3.hexadecimal\n4.In all format i.e. binary,octal,hexadecimal");
	else if(n==10)
	puts("1.binary\n2.octal\n3.hexadecimal\n4.In all format i.e. binary,octal,decimal");
	else if(n==16)
	puts("1.binary\n2.octal\n3.decimal\n4.In all format i.e. binar,octal,decimal");
	cin>>z;
	return a;
}
