#include <iostream>

using namespace std;

int main()
{	 
start:
string fname1, fname2, a;
system("cls");

int x, i, cname1=0,  cname2=0, total=0, space1=0, space2=0, fcount1=0, fcount2=0;

cout<<"\tFFFFFFF   LL         AA     M     M   EEEEEE    SSSSS"<<endl;
cout<<"\tFF        LL        A  A    MM   MM   EE       S"<<endl;
cout<<"\tFFFFFF    LL       A    A   M M M M   EEEEEE    SS"<<endl;
cout<<"\tFF        LL       AAAAAA   M  M  M   EE          SS"<<endl;
cout<<"\tFF        LL       A    A   M     M   EE            S"<<endl;
cout<<"\tFF        LLLLLL   A    A   M     M   EEEEEE   SSSSS "<<endl;
cout<<"========================================================================"<<endl<<endl;
cout<<"  ENTER YOUR NAME: ";
getline(cin,fname1);
cout<<"  ENTER YOUR PARTNER'S NAME: ";
getline(cin,fname2);
cout<<endl;
cout<<"========================================================================"<<endl;

//for the input to be uppercase
for(x=0;x<fname1.length();x++)
{fname1[x]=toupper(fname1[x]);}

for(x=0;x<fname2.length();x++)
{fname2[x]=toupper(fname2[x]);}

//count for space
for(x=0;x<fname1.length();x++)
{	if(fname1[x]==' ')
	{space1++;}
}

for(x=0;x<fname2.length();x++)
{	if(fname2[x]==' ')
	{space2++;}
}

//count of letters
for(x=0;x<fname1.length();x++)
{
   for(i=0;i<=fname2.length();i++)
   {
   	if(fname1[x]==fname2[i])
	{
	cname1++;
	break;
	}
   }
}
for(x=0;x<fname2.length();x++)
{
  for(i=0;i<=fname1.length();i++)
   {
   	if(fname2[x]==fname1[i])
	{
	cname2++;
	break;
	}
   }
}

//solution for the total
fcount1=cname1-space1;
fcount2=cname2-space2;
total=fcount1+fcount2;

//result output
cout<<endl;
if(total==1||total==7||total==13||total==19||total==25||total==31||total==37||total==43)
{
	cout<<fname1<<" and "<<fname2<<" are Friends."<<endl;
}
else if(total==2||total==8||total==14||total==20||total==26||total==32||total==38||total==44)
{
	cout<<fname1<<" and "<<fname2<<" are Lovers."<<endl;
}
else if(total==3||total==9||total==15||total==21||total==27||total==33||total==39||total==45)
{
	cout<<fname1<<" and "<<fname2<<" are Aquaintance."<<endl;
}
else if(total==4||total==10||total==16||total==22||total==28||total==34||total==40||total==46)
{
	cout<<fname1<<" and "<<fname2<<" are Married."<<endl;
}
else if(total==5||total==11||total==17||total==23||total==29||total==35||total==41||total==47)
{
	cout<<fname1<<" and "<<fname2<<" are Enemies."<<endl;
}
else if(total==6||total==12||total==18||total==24||total==30||total==36||total==42||total==48)
{
	cout<<fname1<<" and "<<fname2<<" are Sweethearts."<<endl;
}

	else
	{
		cout<<fname1<<" and "<<fname2<<" WALA TALAGANG PAG ASA MAGING KAYO!"<<endl;
	}

	cout<<endl;
  
//AFTER
restart:
system("pause");
	cout<<endl;
	cout<<"Want to play again? (yes or no): ";
	getline(cin, a);
	cout<<endl;
	if(a=="yes"||a=="Yes"||a=="YES")
	{
	goto start;
	}
	else if(a=="no"||a=="No"||a=="NO")
	{
	cout<<"Thank you!"<<endl;
	return 0;
	}
	else
	{
	goto restart;
	}
return 0;
}

