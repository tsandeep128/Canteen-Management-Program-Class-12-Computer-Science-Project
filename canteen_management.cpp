//**********************************************
//          HEADER FILES
//**********************************************

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
#include<iomanip.h>
#include<dos.h>


//**********************************************
//         GLOBAL VARIABLES
//**********************************************
unsigned int sum,add,d,i,j,e,f,g,h,k,l,w,x,y,z;
unsigned int bir=10, per=36, der=110, mur=8, par=110 ,cor=90, twr=1199, lur=17,tir=107, rer=1499;
int qubis=1000, abis=0, qupep=1000, apep=0, quden=110, aden=0,qumun=1000,amun=0,quperk=500,aperk=0,qucoc=400,acoc=0,qutit=100,atit=0,qulux=1000,alux=0,qutid=1000,atid=0,quree=300,aree=0;
unsigned int m=0, n=0, o=0, p=0, q=0, r=0,s=0,t=0, u=0,v=0;
char name[50],rank[10],pu,c[20],a[15],b[15],ok;


//**********************************************
//          FUNCTION PROTOTYPES
//**********************************************
void menu();
void detail();
void quant();
void eexit();
void main();
void imp();


//**********************************************
//         FUNCTION DEFINITIONS
//**********************************************
//  Introduction Function ***********************
void intro()
{
 clrscr();
 gotoxy(34,2);
 cout<<"  CANTEEN";
 gotoxy(35,4);
 cout<<"MANAGEMENT";
 gotoxy(35,6);
 cout<<" PROGRAM"<<endl<<endl<<endl<<endl<<endl;
 cout<<"\n\nComputer Science Project ";
 cout<<"\n\nMADE BY : T Sandeep ";
 cout<<"\n\nCLASS   : 12 - B ";
 cout<<"\n\nSCHOOL  : New Era Senior Seconday School "<<endl<<endl<<endl;
 cout<<"PRESS ANY KEY TO CONTINUE..."<<endl;
 getch();
}

//  Choice Function ******************************
void again()
{
	 again:;								
      clrscr();
      cout<<"\n\n\n\n1.MENU & PURCHASE";
      cout<<"\n\n\n2.DETAILS";
      cout<<"\n\n\n3.NEW CUSTOMER";
      cout<<"\n\n\n4.QUANTITY AVAILABLE";
      cout<<"\n\n\n5.EXIT";
      cout<<"\n\n\nENTER YOUR CHOICE:";
      cin>>d;
      clrscr();
  switch(d)
  {
     case 1:  menu();

     case 2:  detail();
     case 3:  imp();	
     case 4:  quant();
     case 5:  eexit();	
     default:
	cout<<"Your choice is wrong";
	getch();
	goto again;
   }	
}

//  Menu Function ******************************
void menu()
{
      cout<<"\nITEMS\t\t\t\t\t\t\t      RATE(RS)";
      cout<<"\n\n\nCADBURY BISCUIT\t\t\t\t\t\t\t10  ";
      cout<<"\n\nPEPSODENT TOOTHPASTE\t\t\t\t\t\t36";
      cout<<"\n\nDENIM POWDER\t\t\t\t\t\t\t110   ";
      cout<<"\n\nNESTLE MUNCH\t\t\t\t\t\t\t8  ";
      cout<<"\n\nPARK AVENUE PERFUME\t\t\t\t\t\t110   ";
      cout<<"\n\nCOCONUT HAIR OIL\t\t\t\t\t\t90  ";
      cout<<"\n\nTITAN WATCH\t\t\t\t\t\t\t1199   ";
      cout<<"\n\nLUX BATHING SOAP\t\t\t\t\t\t17   ";
      cout<<"\n\nTIDE WASHING SOAP\t\t\t\t\t\t107   ";
      cout<<"\n\nREEBOK SPORTS SHOES\t\t\t\t\t\t1499   ";
      start:
      cout<<"\n\n\nDO YOU WANT TO PURCHASE(Y/N):\n";
      cin>>pu;
	if(pu=='Y'||pu=='y')
	{switch(pu)
	 case 1:
	  clrscr();
	  cout<<"\n\n\n\t\t\t\tPURCHASE LIST";
	  
         bis:;								
	  cout<<"\nCADBURY BISCUIT(MAX 30): ";
	  cin>>m;
	  if(m>30)
	  { cout<<"Enter Quantity Smaller than 30";
	    getch();
	    goto bis;
	  }
	  else   abis=qubis-m;

	  pep:;								
	  cout<<"\nPEPSODENT TOOTHPASTE(MAX 2): ";
	  cin>>n;
	   if(n>2)
	  {   cout<<"Enter Quantity Smaller than 2";
	      getch();
	      goto pep;
	  }
	  else   apep=qupep-n;

	  den:;								
	  cout<<"\nDENIM POWDER(MAX 2): ";
	  cin>>o;
	  if(o>2)
	  {   cout<<"Enter Quantity Smaller than 2";
	      getch();
	      goto den;
	  }
	  else  aden=quden-o;

	  mun:;								
	  cout<<"\nNESTLE MUNCH(MAX 50): ";
	  cin>>p;
	  if(p>50)
	  {   cout<<"Enter Quantity Smaller than 50";
	      getch();
	      goto mun;
	  }
	  else amun=qumun-p;

	  park:;                        						
	  cout<<"\nPARK AVENUE PERFUME(MAX 2): ";
	  cin>>q;
	  if(q>2)
	  {   cout<<"Enter Quantity Smaller than 2";
	      getch();
	      goto park;
	  }
	  else  aperk=quperk-q;

	  coco:;								
	  cout<<"\nCOCONUT HAIR OIL(MAX 2): ";
	  cin>>r;
	  if(r>2)
	  {   cout<<"Enter Quantity Smaller than 2";
	      getch();
	      goto coco;
	  }
	  else  acoc=qucoc-r;

	  titan:;								
	  cout<<"\nTITAN WATCH(MAX 2): ";
	  cin>>s;
	  if(s>2)
	  {   cout<<"Enter Quantity Smaller than 2";
	      getch();
             goto titan;
	  }
	  else  atit=qutit-s;

	  lux:;								
	  cout<<"\nLUX BATHING SOAP(MAX 10): ";
	  cin>>t;
	  if(t>10)
	  {   cout<<"Enter Quantity Smaller than 10";
	      getch();
	      goto lux;
	  }
	  else  alux=qulux-t;

	  tid:;									
	  cout<<"\nTIDE WASHING SOAP(MAX 2): ";
	  cin>>u;
	  if(u>2)
	  {   cout<<"Enter Quantity Smaller than 2";
	      getch();
	      goto tid;
	  }
	  else  atid=qutid-u;

	  ree:;									
	  cout<<"\nREEBOK SPORTS SHOES(MAX 4): ";
	  cin>>v;
	  if(v>4)
	  {   cout<<"Enter Quantity Smaller than 4";
	      getch();
	      goto ree;
	  }
	  else  aree=quree-v;

	  cout<<"\n";
	  clrscr();
	  cout<<"\n\n\n\n\n\n\t\t\t\t ABC CANTEEN\n";
	  cout<<"\n\n\t\t\t\t  CASH MEMO\n";
	  cout<<"\n\nBILL NO.:"<<i;
	  cout<<"\n\nNAME:";
	  cout<<name;
	  cout<<"\n\nRANK:"<<rank;
	  cout<<"\n\nSERVICE NO.:"<<a;
	  cout<<"\n\nSMART CARD NO.:"<<b;
	  cout<<"\n\nPHONE NO.:"<<c;
	  cout<<"\n\n\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\nITEMS"            <<setw(40)<<"QUANTITY"<<setw(35)<<"PRICE(Rs.)";
	  cout<<"===============================================================================";
	  if(m>0)
	  cout<<"\n\nCADBURY BISCUIT"      <<setw(30)<<m<<setw(28)<<"Rs."<<m*bir;
	  if(n>0)
	  cout<<"\n\nPEPSODENT TOOTHPASTE"        <<setw(25)<<n<<setw(28)<<"Rs."<<n*per;
	  if(o>0)
	  cout<<"\n\nDENIM POWDER"     <<setw(33)<<o<<setw(28)<<"Rs."<<o*der;
	  if(p>0)
	  cout<<"\n\nNESTLE MUNCH"            <<setw(33)<<p<<setw(28)<<"Rs."<<p*mur;
	  if(q>0)
	  cout<<"\n\nPARK AVENUE PERFUME"<<setw(26)<<q<<setw(28)<<"Rs."<<q*par;
	  if(r>0)
	  cout<<"\n\nCOCONUT HAIR OIL" <<setw(29)<<r<<setw(28)<<"Rs."<<r*cor;
	  if(s>0)
	  cout<<"\n\nTITAN WATCH"      <<setw(34)<<s<<setw(28)<<"Rs."<<s*twr;
	  if(t>0)
	  cout<<"\n\nLUX BATHING SOAP"         <<setw(29)<<t<<setw(28)<<"Rs."<<t*lur;
	  if(u>0)
	  cout<<"\n\nTIDE"             <<setw(41)<<u<<setw(28)<<"Rs."<<u*tir;
	  if(v>0)
	  cout<<"\n\nREEBOK SPORTS SHOES"     <<setw(26)<<v<<setw(28)<<"Rs."<<v*rer;
		e=m*bir;
		f=n*per;
		g=o*der;
		h=p*mur;
		k=q*par;
		l=r*cor;
		w=s*twr;
		x=t*lur;
		y=u*tir;
		z=v*rer;
		sum=e+f+g+h+k+l+w+x+y+z;
		add=m+n+o+p+q+r+s+t+u+v;
	    cout<<"\n===============================================================================";
	    cout<<"\nTOTAL:"<<setw(39)<<add<<setw(28)<<"Rs."<<sum;
	    cout<<"\n\nTHANK YOU .\t\t\t    PLEASE VISIT US AGAIN\n";
	getch();
	clrscr();
	 again();                                                       			
	}
	else
	{ again();										
	}
}

//  Function to Display details of the Canteen  ******* 
void detail()
{
	cout<<"\n\n\n\n\n\t\t\t\tCANTEEN DETAILS";
	cout<<"\n\n#TIMING:\n\n 11 AM TO 02 PM \n 03 PM TO 05 PM";
	cout<<"\n\n\n#CANTEEN WILL REMAIN CLOSED ON TUESDAY";
	cout<<"\n\n#GOODS ONCE SOLD WILL NOT BE EXCHANGED/REPLACED";
	cout<<"\n\n#COLLECT YOUR SMART CARD & BILL AFTER PAYMENT";
	getch();
	clrscr();
	 again();
}

//Function to Accept Information from the Customer*  
void imp()
{
	{   
      cout<<"\n\n\n\t\t\t        ABC CANTEEN ";
      cout<<"\n\n\n\t\t\t      CONSUMER INFORMATION";
      cout<<"\n\n\n\n NAME:";
      gets(name);
      cout<<"\n RANK:";
      gets(rank);
      cout<<"\n SERVICE NO.:";
      cin>>a;
      cout<<"\n SMART CARD NO.:";
      cin>>b;
      cout<<"\n PHONE NO.:";
      cin>>c;
      cout<<"\n ENTER BILL NO.:";
      cin>>i;
 	again();
         }
}

//Function to Display Quantities of Available Items***
void quant()
{
	if(m>0||n>0||o>0||p>0||q>0||r>0||s>0||t>0||u>0||v>0)
	  {
	  cout<<"\n\t\t\tItems Avaliable In Canteen:\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\nITEMS"            <<setw(40)<<"QUANTITY";
	  cout<<"\n===============================================================================";
	  cout<<"\n\n\nCADBURY BISCUIT"        <<setw(30)<<abis;
	  cout<<"\n\n\nPEPSODENT TOOTHPASTE"        <<setw(25)<<apep;
	  cout<<"\n\n\nDENIM POWDER"     <<setw(33)<<aden;
	  cout<<"\n\n\nNESTLE MUNCH"            <<setw(33)<<amun;
	  cout<<"\n\n\nPARK AVENUE PERFUME"<<setw(26)<<aperk;
	  cout<<"\n\n\nCOCONUT HAIR OIL" <<setw(29)<<acoc;
	  cout<<"\n\n\nTITAN WATCH"      <<setw(34)<<atit;
	  cout<<"\n\n\nLUX BATHING SOAP"         <<setw(29)<<alux;
	  cout<<"\n\n\nTIDE WASHING SOAP"             <<setw(28)<<atid;
	  cout<<"\n\n\nREEBOK SPORTS SHOES"     <<setw(26)<<aree;
	  cout<<"\n*******************************************************************************";
	  getch();
	  again();
	  }
	  else
	  {
	  {cout<<"\n\t\t\tItems Available In Canteen:\n\n\n";
	  cout<<"===============================================================================";
	  cout<<"\nITEMS"            <<setw(40)<<"QUANTITY";
	  cout<<"\n===============================================================================";
	  cout<<"\n\n\nCADBURY BISCUIT"        <<setw(30)<<qubis;
	  cout<<"\n\n\nPEPSODENT TOOTHPASTE"        <<setw(25)<<qupep;
	  cout<<"\n\n\nDENIM POWDER"     <<setw(33)<<quden;
	  cout<<"\n\n\nNESTLE MUNCH"            <<setw(33)<<qumun;
	  cout<<"\n\n\nPARK AVENUE PERFUME"<<setw(26)<<quperk;
	  cout<<"\n\n\nCOCONUT HAIR OIL" <<setw(29)<<qucoc;
	  cout<<"\n\n\nTITAN WATCH"      <<setw(34)<<qutit;
	  cout<<"\n\n\nLUX BATHING SOAP"         <<setw(29)<<qulux;
	  cout<<"\n\n\nTIDE WASHING SOAP"             <<setw(28)<<qutid;
	  cout<<"\n\n\nREEBOK SPORTS SHOES"     <<setw(26)<<quree;
	  cout<<"\n\n*******************************************************************************";
	  getch();
	  again();

	  }}
}

//Exit Function ********************************
void eexit()
{
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
	sleep(1);
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
	sleep(1);
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
	sleep(1);
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
	sleep(1);
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
	sleep(1);
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
	sleep(1);
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
	sleep(1);
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t   THANKS";
	sleep(1);
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\tPress any key to Exit.......";
	getch();
	exit(0);
}

//************************************************
//    	THE MAIN FUNCTION OF PROGRAM
//************************************************

void main()
   {
    clrscr();
    intro();	
    clrscr();										
    imp();							
   }
   
//***************************************************
//          	END OF SOURCE CODE
//***************************************************
