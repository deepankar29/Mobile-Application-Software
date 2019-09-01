#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>
#include<ctype.h>
#include<stdlib.h>
#include<iomanip.h>
#include<welcome.h>
void gmail();
void phone();
void hos();
void tictactoe();
void quiz();
void shop();
void call();
void map();
void front();
void main()
{  _setcursortype(_NOCURSOR);
   welcome();
   int gd=DETECT,gm,x,y;
   initgraph(&gd,&gm,"c:\\TC\\bgi");
   circle(300,230,80);
   circle(270,205,10);
   circle(330,205,10);
   line(300,210,300,240);
   arc(300,230,190,350,40);
   gotoxy(29,22);
   cout<<"Starting Your Phone";
   for(int i=0;i<1050;i++)
   {
    setcolor(WHITE);
    arc(270,205,i+90,i+180,8);
    arc(330,205,i+90,i+180,8);
    delay(4);
    setcolor(BLACK);
    arc(270,205,i+90,i+180,8);
    arc(330,205,i+90,i+180,8);
   }
   sleep(1);
   cleardevice();
   closegraph();
   gmail();
}
void front()
{
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 setfillstyle(1,RED);
 textcolor(BLACK);
 cleardevice();
 _setcursortype(_NOCURSOR);
 gotoxy(36,1);
 cout<<"APPS";
 gotoxy(36,2);
 cout<<"****";
 bar(180,150,190,180);
 bar(170,160,200,170);
 rectangle(168,148,202,182);
 gotoxy(28,11);
 cout<<"6.Hospital";
 rectangle(8,188,42,222);
 rectangle(20,188,30,222);
 rectangle(8,200,42,210);
 line(8,188,42,222);
 line(20,188,8,200);
 line(42,210,30,222);
 line(30,200,20,210);
 circle(25,194,3);
 circle(36,194,3);
 circle(36,205,3);
 gotoxy(8,14);
 cout<<"2.TicTacToe";
 rectangle(8,228,42,262);
 line(10,230,10,245);
 line(18,230,18,245);
 line(10,230,15,236);
 line(18,230,15,236);
 line(25,230,20,245);
 line(25,230,30,245);
 line(32,230,32,245);
 arc(33,235,270,90,5);
 line(22,238,28,238);
 gotoxy(8,16);
 cout<<"3.GIS Map";
 setfillstyle(1,BLUE);
 rectangle(8,268,42,302);
 arc(25,283,0,180,8);
 bar(12,283,38,298);
 gotoxy(8,18);
 cout<<"4.Shopping";
 rectangle(8,308,42,342);
 arc(25,319,270,150,7);
 line(25,326,25,336);
 gotoxy(8,21);
 cout<<"5.Quiz";
 setfillstyle(1,WHITE);
 rectangle(8,148,42,182);
 bar(13,155,21,160);
 bar(27,170,35,175);
 arc(39,154,200,235,20);
 arc(39,152,200,239,27);
 gotoxy(8,11);
 cout<<"1.Phone";
 gotoxy(25,15);
 cout<<"7. Log Out";
 gotoxy(25,17);
 cout<<"8. Exit";
 int choice;
 gotoxy(20,22);
 cin>>choice;
 /*cleardevice();
 closegraph();*/
 clrscr();
 switch(choice)
 {
  case 1:phone();
  case 2:cleardevice();
	 closegraph();
	 tictactoe();
  case 3:cleardevice();
	 closegraph();
	 map();
  case 4:cleardevice();
	 closegraph();
	 shop();
  case 5:cleardevice();
	 closegraph();
	 quiz();
  case 6:hos();
  case 7:gmail();
  case 8:exit(0);
 }
}
void quiz()
{
clrscr();
int a=1,b=1,c=79,d=26,e=33,f=33,s=30,flag=0;char ans;
_setcursortype(_NOCURSOR);
textbackground(GREEN);
clrscr();
textcolor(BLUE);
clrscr();
for(int i=1;i<80;i++)
{
 gotoxy(a,1);
cout<<char(2);
a--;
delay(15);
}
for(int j=1;j<26;j++)
{ gotoxy(79,b);
cout<<char(2);
b++;
delay(15);
}
for(int l=1;l<80;l++)
{ gotoxy(c,25);
cout<<char(2);
c--;
delay(15);
}
for(int m=1;m<26;m++)
{ gotoxy(1,d);
cout<<char(2);
d--;
delay(15);
}
gotoxy(35,12);
cout<<"WELCOME";
delay(1500);
clrscr();

textbackground(CYAN);
clrscr();
textcolor(RED);
clrscr();
gotoxy(33,12);
cout<<"THE MIND QUIZ";
for(int n=1;n<14;n++)
{
 gotoxy(e,13);
cout<<char(22);
e++;
delay(200);
}
delay(500);
delay(100);
 clrscr();
 gotoxy(33,12);
cout<<"THE MIND QUIZ";
for(int o=1;o<14;o++)
{
 gotoxy(f,13);
cout<<char(22);
f++;
delay(200);
}
clrscr();
textbackground(YELLOW);
clrscr();
textcolor(BLACK);
clrscr();
gotoxy(35,2);
cout<<"INSTRUCTIONS";
gotoxy(35,3);
for(int k=0;k<12;k++)
{
cout<<char(22);
}
gotoxy(2,6);
cout<<char(16);
char sent1[]="There will be 5 Questions";
for(int q=0;q<26;q++)
{
gotoxy((q+5),6);
cout<<sent1[q];
delay(100);
}
gotoxy(2,8);
cout<<char(16);
char sent2[]="30 Seconds will be given for answering each question";
for(q=0;q<52;q++)
{
gotoxy((q+5),8);
cout<<sent2[q];
delay(100);
}
gotoxy(2,10);
cout<<char(16);
char sent3[]="On answering wrong or not answering within 30 seconds you will lose";
for(q=0;q<67;q++)
{
gotoxy((q+5),10);
cout<<sent3[q];
delay(100);
}
gotoxy(2,12);
cout<<char(16);
char sent4[]="If you enter any invalid input, you will lose";
for(q=0;q<45;q++)
{
gotoxy((q+5),12);
cout<<sent4[q];
delay(100);
}
gotoxy(2,14);
cout<<char(16);
char sent5[]="1 point will be given for every right answer";
for( q=0;q<44;q++)
{
gotoxy((q+5),14);
cout<<sent5[q];
delay(100);
}
delay(800);
clrscr();
textbackground(BLUE);
clrscr();
textcolor(WHITE);
clrscr();
gotoxy(35,1);
cout<<"QUESTION 1";
gotoxy(1,5);
cout<<"Jhonny's Mother had three children. The first child was named April.The second\nwas named May. What was the third child's name\n";
cout<<"\n1.June\n\n2.July\n\n3.John\n\n4.Jhonny";
cout<<"\n\n\nEnter Your Choice ";
while(!kbhit())
{
gotoxy(78,1);
cout<<"  ";
gotoxy(78,1);
cout<<s--;
delay(1000);
if(s==-1)
{
 flag=1;
 break;
}
}
if(flag==1)
{
 textbackground(YELLOW);
 clrscr();
textcolor(RED);
clrscr();
 gotoxy(35,12);
 cout<<"YOU LOSE";
 gotoxy(35,14);
 cout<<"0 POINTS";
 delay(2000);
 front();
}
gotoxy(13,17);
ans=getch();
if(ans=='1'||ans=='2'||ans=='3')
{
textbackground(YELLOW);
clrscr();
textcolor(RED);
clrscr();
gotoxy(35,12);
cout<<"YOU LOSE";
gotoxy(35,14);
 cout<<"0 POINTS";
delay(2000);
front();
}
else if(ans=='4')
{
 textbackground(7);
 textcolor(5);
 clrscr();
 gotoxy(33,12);
 cout<<"!!!RIGHT!!!";
 gotoxy(35,14);
 cout<<"1 POINT";
 delay(2000);
 clrscr();
}
else
{
 textbackground(MAGENTA);
 textcolor(7);
 clrscr();
 gotoxy(33,12);
 cout<<"INVALID INPUT";
 gotoxy(35,14);
 cout<<"YOU LOSE";
 gotoxy(35,16);
 cout<<"0 POINTS";
 delay(2000);
 front();
}
textbackground(BLUE);
clrscr();
textcolor(GREEN);
clrscr();
gotoxy(35,1);
cout<<"QUESTION 2";
gotoxy(1,5);
cout<<"Before Mt. Everest was discovered, which was the highest mountain in the world? \n";
cout<<"\n1.Mount K2\n\n2.Mount Kailash\n\n3.Mount Everest\n\n4.Nilgiri Hills";
cout<<"\n\n\nEnter Your Choice ";
 s=30;
while(!kbhit())
{
gotoxy(78,1);
cout<<"  ";
gotoxy(78,1);
cout<<s--;
delay(1000);
if(s==-1)
{
 flag=1;
 break;
}
}
if(flag==1)
{
 textbackground(YELLOW);
 clrscr();
textcolor(RED);
clrscr();
 gotoxy(35,12);
 cout<<"YOU LOSE";
 gotoxy(35,14);
 cout<<"1 POINT";
 delay(2000);
 front();
}
gotoxy(13,17);
ans=getch();
if(ans=='1'||ans=='2'||ans=='4')
{
textbackground(YELLOW);
 clrscr();
textcolor(RED);
clrscr();
gotoxy(35,12);
cout<<"YOU LOSE";
gotoxy(35,14);
 cout<<"1 POINT";
delay(2000);
front();
}
else if(ans=='3')
{
 textbackground(7);
 textcolor(5);
 clrscr();
 gotoxy(33,12);
 cout<<"!!!RIGHT!!!";
 gotoxy(35,14);
 cout<<"2 POINTS";
 delay(2000);
 clrscr();
}
else
{
 textbackground(MAGENTA);
 textcolor(7);
 clrscr();
 gotoxy(33,12);
 cout<<"INVALID INPUT";
 gotoxy(35,14);
 cout<<"YOU LOSE";
 gotoxy(35,16);
 cout<<"1 POINT";
 delay(2000);
 front();
}
textbackground(GREEN);
clrscr();
textcolor(BLACK);
clrscr();
gotoxy(35,1);
cout<<"QUESTION 3";
gotoxy(1,5);
cout<<" Which is correct to say,The yolk of the egg is white or The yolk of the egg \n are white?\n";
cout<<"\n1.The yolk of the egg is white\n\n2.The yolk of egg are white\n\n3.Yolk is not white it is yellow\n\n4.None of these";
cout<<"\n\n\nEnter Your Choice ";
s=30;
while(!kbhit())
{
gotoxy(78,1);
cout<<"  ";
gotoxy(78,1);
cout<<s--;
delay(1000);
if(s==-1)
{
 flag=1;
 break;
}
}
if(flag==1)
{
 textbackground(YELLOW);
 clrscr();
textcolor(RED);
clrscr();
 gotoxy(35,12);
 cout<<"YOU LOSE";
 gotoxy(35,14);
 cout<<"2 POINTS";
 delay(2000);
 front();
}
gotoxy(13,17);
ans=getch();
if(ans=='1'||ans=='2'||ans=='4')
{
textbackground(YELLOW);
 clrscr();
textcolor(RED);
clrscr();
gotoxy(35,12);
cout<<"YOU LOSE";
gotoxy(35,14);
 cout<<"2 POINTS";
delay(2000);
front();
}
else if(ans=='3')
{
 textbackground(7);
 textcolor(5);
 clrscr();
 gotoxy(33,12);
 cout<<"!!!RIGHT!!!";
 gotoxy(35,14);
 cout<<"3 POINTS";
 delay(2000);
 clrscr();
}
else
{
 textbackground(MAGENTA);
 textcolor(7);
 clrscr();
 gotoxy(33,12);
 cout<<"INVALID INPUT";
 gotoxy(35,14);
 cout<<"YOU LOSE";
 gotoxy(35,16);
 cout<<"2 POINTS";
 delay(2000);
 front();
}
textbackground(BLACK);
clrscr();
textcolor(GREEN);
clrscr();
gotoxy(35,1);
cout<<"QUESTION 4";
gotoxy(1,5);
cout<<"  Which name you cannot give to your folder ?\n";
cout<<"\n1.Yo\n\n2.Con\n\n3.Malware\n\n4.Virus";
cout<<"\n\n\nEnter Your Choice ";
s=30;
while(!kbhit())
{
gotoxy(78,1);
cout<<"  ";
gotoxy(78,1);
cout<<s--;
delay(1000);
if(s==-1)
{
 flag=1;
 break;
}
}
if(flag==1)
{
 textbackground(YELLOW);
 clrscr();
textcolor(RED);
clrscr();
 gotoxy(35,12);
 cout<<"YOU LOSE";
 gotoxy(35,14);
 cout<<"3 POINTS";
 delay(2000);
 front();
}
gotoxy(13,17);
ans=getch();
if(ans=='1'||ans=='3'||ans=='4')
{
textbackground(YELLOW);
 clrscr();
textcolor(RED);
clrscr();
gotoxy(35,12);
cout<<"YOU LOSE";
gotoxy(35,14);
 cout<<"3 POINTS";
delay(2000);
front();
}
else if(ans=='2')
{
 textbackground(7);
 textcolor(5);
 clrscr();
 gotoxy(33,12);
 cout<<"!!!RIGHT!!!";
 gotoxy(35,14);
 cout<<"4 POINTS";
 delay(2000);
 clrscr();
}
else
{
 textbackground(MAGENTA);
 textcolor(7);
 clrscr();
 gotoxy(33,12);
 cout<<"INVALID INPUT";
 gotoxy(35,14);
 cout<<"YOU LOSE";
 gotoxy(35,16);
 cout<<"3 POINTS";
 delay(2000);
 front();
}
textbackground(BLUE);
clrscr();
textcolor(RED);
clrscr();
gotoxy(35,1);
cout<<"QUESTION 5";
gotoxy(1,5);
cout<<"Divide 30 By half and add 10.What will be the answer ?\n";
cout<<"\n1.25\n\n2.40\n\n3.70\n\n4.31";
cout<<"\n\n\nEnter Your Choice ";
s=30;
while(!kbhit())
{
gotoxy(78,1);
cout<<"  ";
gotoxy(78,1);
cout<<s--;
delay(1000);
if(s==-1)
{
 flag=1;
 break;
}
}
if(flag==1)
{
 textbackground(YELLOW);
 clrscr();
textcolor(RED);
clrscr();
 gotoxy(35,12);
 cout<<"YOU LOSE";
 gotoxy(35,14);
 cout<<"4 POINTS";
 delay(2000);
 front();
}
gotoxy(13,17);
ans=getch();
if(ans=='1'||ans=='2'||ans=='4')
{
textbackground(YELLOW);
 clrscr();
textcolor(RED);
clrscr();
gotoxy(35,12);
cout<<"YOU LOSE";
gotoxy(35,14);
 cout<<"4 POINTS";
delay(2000);
front();
}
else if(ans=='3')
{
 textbackground(7);
 textcolor(5);
 clrscr();
 gotoxy(33,12);
 cout<<"!!!RIGHT!!!";
 gotoxy(35,14);
 cout<<"5 POINTS";
  delay(2000);
}
else
{
 textbackground(MAGENTA);
 textcolor(7);
 clrscr();
 gotoxy(33,12);
 cout<<"INVALID INPUT";
 gotoxy(35,14);
 cout<<"YOU LOSE";
 gotoxy(35,16);
 cout<<"4 POINTS";
 delay(2000);
 front();
}
clrscr();
textbackground(BLACK);
clrscr();
textcolor(RED);
clrscr();

int x=10,y=62;
 for(i=1;i<=25;i++)
{
clrscr();
gotoxy(x,12);
cout<<"YOU";
gotoxy(y,12);
cout<<"WON";
x++,y--;
delay(70);

}
delay(1500);
}

class graphics
{
 protected:
 void logo();
 void load(char u[]);
}g;
char user[20],pas[20];
class account:public graphics
{
 int mon,dat,yr;
 char fname[20],lname[20],u[30],p[20],ptemp[20],gen[10],mob[10];
 public:
 void create();
 void login();
 void del();
 void show();
}a;
void graphics::logo()
{
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
 setcolor(BLUE);
 setfillstyle(1,BLUE);
 rectangle(235,223,385,240);
 rectangle(235,255,385,272);
 rectangle(210,110,410,300);
 circle(312,160,40);
 pieslice(312,155,0,360,15);
 sector(312,200,29,150,28,18);
 line(312,200,288,192);
 line(309,200,291,194);
 line(312,200,330,194);
 line(318,199,330,195);
}
void graphics::load(char u[])
{
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
 cleardevice();
 setfillstyle(1,BLUE);
 setcolor(WHITE);
 gotoxy(37,5);
 cout<<"Loading";
 gotoxy(32,6);
 cout<<u;
 rectangle(230,95,400,105);
 for(int i=231;i<400;i++)
 {
  bar(231,96,i,104);
  delay(25);
  if(i==300||i==370)
  delay(725);
 }
 delay(500);
 cleardevice();
 closegraph();
 clrscr();
}
void account::login()
{
 clrscr();
 int flag=0;
 logo();
 gotoxy(31,15);
 printf("Username");
 gotoxy(31,17);
 cout<<"Password";
 gotoxy(53,15);
 cout<<"(Press enter after entering)";
 gotoxy(31,15);
 while(!kbhit())
 {}
 gotoxy(31,15);
 printf("        ");
 gotoxy(31,15);
 gets(user);
 while(!kbhit())
 {}
 gotoxy(31,17);
 printf("        ");
 gotoxy(31,17);
 for(int i=0;i<20;++i)
 {
  pas[i]=getch();
  if(pas[i]=='\b')
  {
    printf("\b \b");
    i=i-2;
  }
  else if(pas[i]==(char)13)
  {
   pas[i]='\0';
   flag=1;
   break;
  }
  else
   cout<<"*";
 }
 if(flag!=1)
  pas[i]='\0';
 flag=0;
 ofstream o;
 o.open("gmail.dat",ios::app);
 o.close();
 ifstream ifs;
 ifs.open("gmail.dat");
 while(1)
 {
  ifs.read((char*)&a,sizeof(a));
  if(ifs.eof())
   break;
  if(strcmpi(user,a.u)==0)
  {
   flag=1;
   if(strcmpi(pas,a.p)==0)
   {
    load(user);
    front();
    break;
   }
   else
   {
    cleardevice();
    closegraph();
    clrscr();
    cout<<"\nWrong Password";
    getch();
   }
  }
 }
 ifs.close();
 if(flag==0)
 {
  cleardevice();
  closegraph();
  clrscr();
  cout<<"\nUser not registered. Plz create your account.";
  getch();
 }
 clrscr();
}
void account::create()
{
_setcursortype(_NOCURSOR);
 int gdriver=DETECT,gmode,flag=0;
 initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
 setbkcolor(WHITE);
 setcolor(BLUE);
 cleardevice();
 setfillstyle(1,7);
 bar(370,110,600,410);
 setfillstyle(1,15);
 bar(380,128,470,143);
 bar(480,128,575,143);
 bar(380,176,575,191);
 bar(380,216,575,231);
 bar(380,256,575,271);
 bar(380,288,450,303);
 bar(460,288,500,303);
 bar(510,288,575,303);
 bar(380,336,575,351);
 bar(380,368,575,383);
 outtextxy(220,48,"Create your Ganga account");
 outtextxy(380,118,"Name");
 outtextxy(380,158,"Choose your username");
 outtextxy(380,198,"Create a password");
 outtextxy(380,238,"Confirm your password");
 outtextxy(380,278,"Birthday");
 outtextxy(380,318,"Gender");
 outtextxy(380,358,"Mobile Phone");
 setcolor(7);
 outtextxy(390,132,"First");
 outtextxy(490,132,"Last");
 outtextxy(390,292,"Month");
 outtextxy(470,292,"Day");
 outtextxy(520,292,"Year");
 while(!kbhit())
 {}
 bar(380,128,470,143);
 gotoxy(49,9);
 gets(fname);
 while(!kbhit())
 {}
 bar(480,128,575,143);
 gotoxy(62,9);
 gets(lname);
 gotoxy(49,12);
 gets(u);
 p:
 setcolor(15);
 bar(380,216,575,231);
 bar(380,256,575,271);
 for(int i=0,j=0;i<20;++i,j+=7)
 {
  p[i]=getch();
  if(p[i]=='\b')
  {
    i=i-2;
    j-=7;
    setcolor(15);
    outtextxy(j+380,220,"*");
    j-=7;
  }
  else if(p[i]==(char)13)
  {
   p[i]='\0';
   flag=0;
   break;
  }
  else
  {
   setcolor(7);
   outtextxy(j+380,220,"*");
  }
 }
 if(flag!=0)
 p[i]='\0';
 if(strlen(p)==0)
 {
  setcolor(4);
  outtextxy(380,208,"Field can't be empty");
  goto p;
 }
 else
 {
  setcolor(7);
  outtextxy(380,208,"Field can't be empty");
 }
 for(i=0,j=0;i<20;++i,j+=7)
 {
  ptemp[i]=getch();
  if(ptemp[i]=='\b')
  {
    i=i-2;
    j-=7;
    setcolor(15);
    outtextxy(j+380,260,"*");
    j-=7;
  }
  else if(ptemp[i]==(char)13)
  {
   ptemp[i]='\0';
   flag=0;
   break;
  }
  else
  {
   setcolor(7);
   outtextxy(j+380,260,"*");
  }
 }
 if(flag!=0)
 ptemp[i]='\0';
 if(strcmp(p,ptemp)!=0)
 {
  setcolor(4);
  outtextxy(380,248,"Passwords Doesn't Match");
  goto p;
 }
 else
 {
  setcolor(7);
  outtextxy(380,248,"Passwords Doesn't Match");
 }
 while(!kbhit())
 {}
 bar(380,288,450,303);
 gotoxy(51,19);
 cin>>mon;
 while(!kbhit())
 {}
 bar(460,288,500,303);
 gotoxy(60,19);
 cin>>dat;
 while(!kbhit())
 {}
 bar(510,288,575,303);
 gotoxy(67,19);
 cin>>yr;
 gotoxy(49,22);
 cin>>gen;
 gotoxy(49,24);
 gets(mob);
 ofstream o;
 o.open("gmail.dat",ios::app);
 o.write((char*)&a,sizeof(a));
 o.close();
 sleep(1);
 cleardevice();
 closegraph();
 cout<<"\t\t\tCONGRACTS!!!\n\t\tYour Account has been Created\n\t\tNow You Have Access to all the Services of the Ganga Phone";
 getch();
}
void account::del()
{
_setcursortype(_NOCURSOR);
 char us[30],ans;
 int flag1=0,flag2=0;
 clrscr();
 cout<<"\nEnter Id To Delete:";
 gets(us);
 ofstream o;
 ifstream i;
 o.open("gmail.dat",ios::app);
 o.close();
 i.open("gmail.dat");
 o.open("temp.dat");
 while(1)
 {
  i.read((char*)&a,sizeof(a));
  if(i.eof())
   break;
  else
  {
   if(strcmpi(us,a.u)==0)
   {
    flag1=1;
    cout<<"\nAre You Sure You Want To Delete?(y/n)";
    cin>>ans;
    if(ans=='n')
    {
     flag2=1;
     o.write((char*)&a,sizeof(a));
    }
   }
   else
    o.write((char*)&a,sizeof(a));
  }
 }
 i.close();
 o.close();
 if(flag1==0)
  cout<<"\nUsername Not Found";
 else
 {
  remove("gmail.dat");
  rename("temp.dat","gmail.dat");
  if(flag2==0)
   cout<<"\nRecord Successfully Deleted";
  else
   cout<<"\nRecord Retained";
 }
 getch();
}
void account::show()
{
 clrscr();
 cout<<"\t\t\t\tACCOUNTS\n\t\t\t\t********\n";
 ofstream o;
 o.open("gmail.dat",ios::app);
 o.close();
 ifstream i;
 i.open("gmail.dat");
 cout<<"\nName\t\t\tUser Id\n\n";
 while(1)
 {
  i.read((char*)&a,sizeof(a));
  if(i.eof())
   break;
  else
  {
   cout<<a.fname<<' '<<a.lname<<setw(20)<<a.u<<'\n';
  }
 }
 i.close();
 getch();
}
void gmail()
{
_setcursortype(_NOCURSOR);
 int ch;
 menu:
 clrscr();
 gotoxy(35,1);
 cout<<"MENU";
 gotoxy(30,5);
 cout<<"1.Create account";
 gotoxy(30,7);
 cout<<"2.Login";
 gotoxy(30,9);
 cout<<"3.Delete Account";
 gotoxy(30,11);
 cout<<"4.View all users";
 gotoxy(30,13);
 cout<<"5.Exit";
 gotoxy(30,15);
 cout<<"Enter your choice:";
 cin>>ch;
 switch(ch)
 {
  case 1:
   a.create();
   goto menu;
  case 2:
   a.login();
   goto menu;
  case 3:
   a.del();
   goto menu;
  case 4:
   a.show();
   goto menu;
  case 5:
   exit(0);
  default:
   cout<<"Wrong Input";
   goto menu;
 }
}
void order1()
{
 int ans;
 char name[20],add[50];
 long unsigned phoneno;
 cin>>ans;
 if(ans==1||ans==2||ans==3||ans==4||ans==5)
 {
    char x;
    clrscr();
   gotoxy(1,3);
   cout<<"Enter Your Name :";
   gets(name);
   cout<<"\nEnter Your Address :";
   gets(add);
   cout<<"\nEnter Your Phone Number :";
   cin>>phoneno;
   clrscr();
   gotoxy(28,12);
   cout<<"Registering Your Product";
   gotoxy(52,12);
   for(int p=1;p<5;p++)
   {
    cout<<".";
    delay(300);
   }
   delay(500);
   delay(100);
   clrscr();
   gotoxy(28,12);
   cout<<"Registering Your Product";
   gotoxy(52,12);
   for(p=1;p<5;p++)
   {
    cout<<".";
    delay(300);
   }
   delay(1000);
   clrscr();
   gotoxy(10,10);
   cout<<"Your product has been registered and will be delivered in 2-3 days";
   gotoxy(10,12);
   cout<<"For any query please contact : 9953676291 ";
   gotoxy(10,14);
   cout<<"1) Shop More";
   gotoxy(10,16);
   cout<<"2) Back";
   gotoxy(10,18);
   cout<<"3) Exit";
   gotoxy(10,20);
   cout<<"Your Choice:";
 }
 else
  cout<<"Invalid Entry";
}
void shirts()
{    char chs;
    clrscr();
    gotoxy(36,1);
    cout<<"Shirts";
    gotoxy(9,4);
    cout<<"1) Reebok White Sports Shirt Rs.2000\n\n\t2) Reebok Black Sports Shirt Rs.3000\n\n\t3) Adidas White Shirt Rs.1200\n\n\t4) Puma Green Shirt Rs.2500\n\n\t5) Nike Blue Shirt Rs.3000\n\n\tYour Choice : ";
    order1();
}
 void tshirts()
{
clrscr();
int ans;
   gotoxy(36,1);
   cout<<"T-Shirts";
   gotoxy(9,4);
   cout<<"1) Reebok White Sports T-Shirt Rs.2000\n\n\t2) Reebok Black Sports T-Shirt Rs.3000\n\n\t3) Adidas White T-Shirt Rs.1200\n\n\t4) Puma Green T-Shirt Rs.2500\n\n\t5) Nike Blue T-Shirt Rs.3000\n\n\tYour Choice : ";

   order1();
}
 void jeans()
{
clrscr();
 int ans;
 gotoxy(36,1);
  cout<<"Jeans";
  gotoxy(9,4);
  cout<<"1) Denim Blue Jeans Rs.2000\n\n\t2) Denim Black Jeans Rs.3000\n\n\t3) Lee Blue Jeans Rs.3000\n\n\t4) Flying Machine Black Jeans Rs.2500\n\n\t5) Lee Black Jeans\n\n\tYour Choice : ";
  order1();
}
void shop()
{
 clrscr();
 _setcursortype(_NOCURSOR);
 char ch[4];
 int ans;
 char chs;
 clrscr();
 while(1)
 {
  V:
  textbackground(BLACK);
  textcolor(WHITE);
  clrscr();
  gotoxy(36,1);
  cout<<"SHOP IT";
  gotoxy(36,2);
  cout<<"**** **";
  gotoxy(5,6);
  cout<<"1.GARMENTS";
  gotoxy(25,6);
  cout<<"2.GADGETS";
  gotoxy(46,6);
  cprintf("3.FOOTWEAR");
  gotoxy(70,6);
  cprintf("4.BOOKS");
  gotoxy(5,8);
  cprintf("5.BACK");
  gotoxy(25,8);
  cprintf("6.EXIT");
  gotoxy(3,20);
  cout<<"ENTER YOUR CHOICE :";
  cin>>ans;
  if(ans==1)
  {
  clrscr();
  gotoxy(35,1);
  cprintf("GARMENTS");
  gotoxy(2,5);
  cout<<"PLEASE SELECT CATEGORY";
  gotoxy(2,8);
  cout<<"1.MENS";
  gotoxy(2,10);
  cout<<"2.WOMENS";
  gotoxy(2,12);
  cout<<"3.KIDS";
  gotoxy(2,15);
  cprintf("ENTER YOUR CHOICE : ");
  cin>>ans;
  if(ans==1)
  {
   clrscr();
   gotoxy(36,1);
   cout<<"MENS";
   B:
   gotoxy(9,4);
   cout<<"1) Shirts\n\n\t2) T-Shirts\n\n\t3) Jeans\n\n\t4) Shots\n\n\t5) Glasses\n\n\tYour Choice : ";
   cin>>ans;
   if(ans==1)
    shirts();
   else if(ans==2)
    tshirts();
   else if(ans==3)
    jeans();
   else if (ans==4)
   {
    clrscr();
    gotoxy(36,1);
    cout<<"Shots";
    gotoxy(9,4);
    cout<<"1) Reebok Blue Shots Rs.2000\n\n\t2) Nike Black Shots Rs.3000\n\n\t3) Adidas Blue Shots Rs.1200\n\n\t4) Puma Green Shots Rs.2500\n\n\t5) Nike Blue Shots Rs.3000\n\n\tYour Choice : ";
    order1();
   }
   else if(ans==5)
   {
    clrscr();
    gotoxy(36,1);
    cout<<"Glasses";
    gotoxy(9,4);
    cout<<"1) Ray.Ban Sunglasses Rs.2000\n\n\t2) Emporio Armani White Glasses Rs.3000\n\n\t3) Ray.Ban White Glasses Rs.1200\n\n\t4) Gucci BLue Glasses Rs.1500\n\n\t5) Ray.Ban Blue Glasses Rs.3000\n\n\tYour Choice : ";
    order1();
   }
   else
   {
    gotoxy(4,22);
    cout<<"Invalid Choice";
   }
  }
  else if(ans==2)
  {
   clrscr();
   gotoxy(36,1);
   cout<<"WOMENS";
   gotoxy(9,4);
   cout<<"1) Shirts\n\n\t2) T-Shirts\n\n\t3) Jeans\n\n\t4) Skirts\n\n\t5) Accessories \n\n\t Your Choice : ";
   cin>>ans;
   if (ans==1)
    shirts();
   else if(ans==2)
    tshirts();
   else if(ans==3)
    jeans();
   else if(ans==4)
   {
    clrscr();
    gotoxy(36,1);
    cout<<"Skirts";
    gotoxy(9,4);
    cout<<"1) Jaipur Blue Skirt Rs.3000\n\n\t2) Jaipur White Skirt \n\n\t3) Lady Bug Black Skirt Rs.2000\n\n\t4) Aarde White Skirt Rs.2000\n\n\t5)Goodwill Black Skirt Rs.2500 \n\n\t Your Choice : ";
    order1();
   }
   else if(ans==5)
   {
    clrscr();
    gotoxy(36,1);
    cout<<"Accessories";
    gotoxy(9,4);
    cout<<"1) White Pearl Necklace Rs.5000\n\n\t2) Tanishq Jewelery Set Rs.10000 \n\n\t3) L'Oreal Lipstick Rs.500 \n\n\t4) Tanishq Earings  Rs.1000\n\n\t5) Black Breslet Rs.500 \n\n\t Your Choice : ";
    order1();
   }
   else
   {
    gotoxy(4,22);
    cout<<"Invalid Choice";
   }
  }
  else if(ans==3)
  {
   clrscr();
   gotoxy(36,1);
   cout<<"KIDS";
   goto B;
  }
  else
  {
    gotoxy(4,22);
    cout<<"Invalid Choice";
  }
 }
 else if(ans==2)
 {
  clrscr();
  gotoxy(35,1);
  cout<<"GADGETS";
  gotoxy(2,5);
  cout<<"PLEASE SELECT CATEGORY";
  gotoxy(2,8);
  cout<<"1.Mobile Phones";
  gotoxy(2,10);
  cout<<"2.Tablets";
  gotoxy(2,12);
  cout<<"3.Cameras";
  gotoxy(2,14);
  cout<<"4.Smart Watches";
  gotoxy(2,16);
  cout<<"5.Computers ";
  gotoxy(2,18);
  cout<<"Your Choice :";
  cin>>ans;
  if(ans==1)
  {
   clrscr();
   gotoxy(36,1);
   cout<<"Mobile Phones";
   gotoxy(9,4);
   cout<<"1) Asus Zenfone 2 Rs.23000\n\n\t2) Samsung Galaxy S6 Edge Rs.50000 \n\n\t3) Sony Xperia Z4 Rs.48000 \n\n\t4) Gionee Marathon M3  Rs.20000\n\n\t5) Micromax Spark Rs.5000 \n\n\t Your Choice : ";
   order1();
  }
  else if(ans==2)
  {
   clrscr();
   gotoxy(36,1);
   cout<<"Tablets";
   gotoxy(9,4);
   cout<<"1) Apple iPad Air 2 Rs.40000\n\n\t2) Apple ipad mini 2 Rs.24000 \n\n\t3) Sony Xperia Z4 Tablet Rs.50000 \n\n\t4) Samsung Galaxy Tab S 10.5 Rs.40000\n\n\t5) Asus Transformer Book T100 Rs.35000 \n\n\t Your Choice : ";
   order1();
  }
  else if(ans==3)
  {
   clrscr();
   gotoxy(36,1);
   cout<<"Cameras";
   gotoxy(9,4);
   cout<<"1) Sony CyberShot HX60V Rs.33000\n\n\t2) Sony CyberShot RX100 111 Rs.70000 \n\n\t3) Panasonic Lumix LX100 Rs.64000 \n\n\t4) Fujifilm FinePix X100s Rs.98000\n\n\t5) Panasonic Lumix FZ1000 Rs.64000 \n\n\t Your Choice : ";
   order1();
  }
  else if(ans==4)
  {
   clrscr();
   gotoxy(36,1);
   cout<<"Smart Watches";
   gotoxy(9,4);
   cout<<"1) Apple iwatch Rs.30000\n\n\t2) Pebble Steel Rs.70000 \n\n\t3) Moto 360 Rs.20000 \n\n\t4) LG G Watch R Rs.22000\n\n\t5) Samsung Gear Live Rs.16000 \n\n\t Your Choice : ";
   order1();
  }
  else if(ans==5)
  {
   clrscr();
   gotoxy(36,1);
   cout<<"Computer";
   gotoxy(9,4);
   cout<<"1) Dell 21 inch Monitor Rs.10000\n\n\t2)LG Cooler Master CPU  Rs.70000 \n\n\t3) Logitech G602 Mouse Rs.5000 \n\n\t4) Corsair K95 RGB Keyboard Rs.12000\n\n\t5) Cannon Image Class Printer Rs.16000 \n\n\t Your Choice : ";
   order1();
  }
  else
  {
   gotoxy(10,20);
   cout<<"Invalid Entry";
  }
 }
 else if(ans==3)
 {
  clrscr();
  gotoxy(35,1);
  cout<<"FOOTWEAR";
  gotoxy(2,5);
  cout<<"PLEASE SELECT CATEGORY";
  gotoxy(2,8);
  cout<<"1.Sport Shoes";
  gotoxy(2,10);
  cout<<"2.Formal Shoes";
  gotoxy(2,12);
  cout<<"3.Chappals";
  gotoxy(2,14);
  cout<<"4.Sandals and Floaters ";
  gotoxy(2,18);
  cout<<"Your Choice :";
  cin>>ans;
  if(ans==1)
  {
   clrscr();
   gotoxy(36,1);
   cout<<"Sport Shoes";
   gotoxy(9,4);
   cout<<"1) Adidas Ultra Boost  Rs.12000\n\n\t2) Nike Flyknit Racer Rs.10000 \n\n\t3) Nike Flyknit Lunar 3 Rs.9500 \n\n\t4) Adidas Pure Boost 2  Rs.8300\n\n\t5) Reebok ZPump Fusion Rs.7000 \n\n\t Your Choice : ";
   order1();
  }
  else if(ans==2)
  {
   clrscr();
   gotoxy(36,1);
   cout<<"Formal Shoes";
   gotoxy(9,4);
   cout<<"1) Brown Foraml Boots Rs.3000\n\n\t2) Catwalk Black Shoes Rs.1000 \n\n\t3) Rozo Black Shoes Rs.1200 \n\n\t4) Clarks Brown Shoes  Rs.2000\n\n\t5) Jolly Black Shoes Rs.1000 \n\n\t Your Choice : ";
   order1();
  }
  else if(ans==3)
  {
   clrscr();
   gotoxy(36,1);
   cout<<"Chappals";
   gotoxy(9,4);
   cout<<"1) Lee Cooper Grey  Rs.500\n\n\t2) Lee Cooper Blue Rs.500 \n\n\t3) Lams Designs Girls  Rs.300 \n\n\t4) Lee Cooper Casual Olive  Rs.200\n\n\t5) Mocas White Rs.400 \n\n\t Your Choice : ";
   order1();
  }
  else if(ans==4)
  {
   clrscr();
   gotoxy(36,1);
   cout<<"Sandals And Floaters";
   gotoxy(9,4);
   cout<<"1) Cooper England Rs.500\n\n\t2) Adreno Sandal Rs.400 \n\n\t3) Tomcat Blue Rs.600 \n\n\t4) Campus Black  Rs.700\n\n\t5) Action Blue Rs.500 \n\n\t Your Choice : ";
   order1();
  }
  else
  {
   gotoxy(4,22);
   cout<<"Invalid Choice";
  }
 }
 else if(ans==4)
 {
  clrscr();
  gotoxy(36,1);
  cout<<"BOOKS";
  gotoxy(2,5);
  cout<<"PLEASE SELECT CATEGORY";
  gotoxy(2,8);
  cout<<"1.Novels";
  gotoxy(2,10);
  cout<<"2.Cbse Books";
  gotoxy(2,12);
  cout<<"3.Comics";
  gotoxy(2,14);
  cout<<"Your Choice :";
  cin>>ans;
  if(ans==1)
  {
   clrscr();
   gotoxy(36,1);
   cout<<"Novels";
   gotoxy(9,4);
   cout<<"1) US By David Nicholls Rs.1000\n\n\t2) Big Little Lies By Liane Morarity Rs.500 \n\n\t3) Still Life With Bread Crumbs Rs.300 \n\n\t4) Still Life By Julie Lawson Rs.200\n\n\t5) After I Do It Rs.400 \n\n\t Your Choice : ";
   order1();
  }
  else if(ans==2)
  {
   clrscr();
   gotoxy(36,1);
   cout<<"Cbse Books";
   gotoxy(9,4);
   cout<<"Enter Your Class ";
   cin>>ans;
   gotoxy(9,6);
   cout<<"1) Maths Book Rs.200\n\n\t2) Science-Bio Pack Rs.600 \n\n\t3) Science-Maths Pack Rs.600 \n\n\t4) English Books Set Rs.200\n\n\t5) SST Books Set Rs.500 \n\n\t Your Choice : ";
   order1();
  }
  else if(ans==3)
  {
   clrscr();
   gotoxy(36,1);
   cout<<"Comics";
   gotoxy(9,4);
   cout<<"1) Wimpy Kid Set Rs.3000\n\n\t2) Goosebumps Set Rs.5000 \n\n\t3) A-Z Mysteries Rs.2000 \n\n\t4) Tin-Tin Rs.200\n\n\t5) Marvel Comic Set Rs.5000 \n\n\t Your Choice : ";
   order1();
  }
  else
  {
   gotoxy(2,16);
   cout<<"Invalid Choice";
  }
 }
 else if(ans==5)
 {
  front();							//////////////
 }
 else if(ans==6)
 {
  exit(0);
 }
 else
 {
  gotoxy(4,22);
  cout<<"Invalid Choice.Try again";
  getch();
 }

 int y;
 cin>>y;
 if(y==3)
 exit(0);
 else if(y==2)
 front();
 }
}
void map()
{
clrscr();
int n,x=1,y=1,a=24,d=12,e=49;
_setcursortype(_NOCURSOR);
textbackground(GREEN);
textcolor(BLUE);
clrscr();
delay(500);
gotoxy(y,10);
cout<<setw(35)<<"W";
delay(500);
cout<<setw(1)<<"E";
delay(500);
cout<<setw(1)<<"L";
delay(500);
cout<<setw(1)<<"C";
delay(500);
cout<<setw(1)<<"O";
delay(500);
cout<<setw(1)<<"M";
delay(500);
cout<<setw(1)<<"E";
delay(500);
clrscr();
textbackground(CYAN);
clrscr();
textcolor(BLUE+BLINK);
clrscr();
for(int i=1;i<=65;i++)
{
clrscr();
textcolor(i);
gotoxy(x,10);
cout<<"THE MAP OF GIS";
x++;
delay(100);
}
delay(1000);
clrscr();
textbackground(BLACK);
clrscr();
textcolor(BLACK);
clrscr();
m:
textcolor(MAGENTA);
clrscr();
textcolor(RED);
gotoxy(36,1);
cprintf("GIS MAP");
delay(50);
gotoxy(2,2);
textcolor(GREEN);
cprintf("\nSELECT YOUR DESTINATION FROM THE MAIN GATE");
gotoxy(3,6);
cout<<"1)\n  2)\n  3)\n  4)\n  5)\n  6)\n  7)";
gotoxy(6,6);
textcolor(CYAN);
cprintf("MAIN FIELD");
gotoxy(6,7);
textcolor(CYAN);
cprintf("RECEPTION");
gotoxy(6,8);
textcolor(CYAN);
cprintf("NARAYNI HOSTEL");
gotoxy(6,9);
textcolor(CYAN);
cprintf("MESS");
gotoxy(6,10);
textcolor(CYAN);
cprintf("SR. BOYS HOSTEL");
gotoxy(6,11);
textcolor(CYAN);
cprintf("BACK");
gotoxy(6,12);
textcolor(CYAN);
cprintf("EXIT");
gotoxy(3,13);
textcolor(BLUE);
cprintf("YOUR CHOICE : ");
cin>>n;
if(n==1)
{
a=24,d=12,e=49;
textbackground(BLACK);
clrscr();
textcolor(GREEN);
gotoxy(41, 25);
cprintf("Sr.Boys Hostel");
 gotoxy(8, 9);
cprintf("Field");
 gotoxy(40, 11);
cprintf("Reception");
 gotoxy(60, 19);
cprintf("Mess");
 gotoxy(38, 17);
cprintf("Narayni Hostel");
 gotoxy(5, 25);
cprintf("Main Gate");
delay(1300);
for(int i=1;i<16;i++)
{
textcolor(CYAN);
gotoxy(11,a);
cout<<char(24);
a--;
delay(99);
}
for( char t=0;t<2;t++)
{ gotoxy(8, 9);
cout<<"     ";
delay(150);
textcolor(WHITE);
 gotoxy(8, 9);
cprintf("Field");
delay(900);

}
delay(1500);
clrscr();
goto m;
}
  if (n==2)
 {
 a=24,d=12,e=49;
textbackground(BLACK);
clrscr();
  textcolor(BLUE);
  clrscr();
   gotoxy(41, 25);
cout<<"Sr.Boys Hostel";
 gotoxy(8, 9);
 textcolor(RED);
cout<<"Field";
 gotoxy(40, 10);
cout<<"Reception";
 gotoxy(60, 19);
cout<<"Mess";
 gotoxy(38, 17);
cout<<"Narayni Hostel";
 gotoxy(5, 25);
cout<<"Main Gate";
delay(1300);
for(int i=1;i<16;i++)
{
textcolor(CYAN);
gotoxy(11,a);
cout<<char(24);
a--;
delay(99);
}
delay(99);
for(int s=1;s<29;s++)
{ gotoxy(d,10);
cout<<">";
d++;
delay(99);
}
for( char t=0;t<2;t++)
{ gotoxy(40, 10);
cout<<"         ";
delay(150);
textcolor(WHITE);
 gotoxy(40, 10);
cprintf("Reception");
delay(900);
}
delay(1500);
clrscr();
goto m;
}
 else if(n==3)
 {
 a=24,d=12,e=49;
textbackground(BLACK);
clrscr();
  textcolor(YELLOW);
  clrscr();
   gotoxy(41, 25);
cout<<"Sr.Boys Hostel";
 gotoxy(8, 9);
cout<<"Field";
 gotoxy(40, 10);
cout<<"Reception";
 gotoxy(60, 19);
cout<<"Mess";
 gotoxy(38, 17);
cout<<"Narayni Hostel";
 gotoxy(5, 25);
cout<<"Main Gate";
delay(1300);
for(int i=1;i<16;i++)
{ gotoxy(11,a);
cout<<char(24);
a--;
delay(99);
}
delay(99);
for(int s=1;s<29;s++)
{ gotoxy(d,10);
cout<<">";
d++;
delay(99);
}
delay(99);
for(int p=1;p<12;p++)
{ gotoxy(e,10);
cout<<">";
e++;
delay(99);
}
delay(99);
int q=10;
for(int w=1;w<9;w++)
{ gotoxy(60,q);
cout<<char(25);
q++;
delay(99);
}
delay(99);
int f=59;
for(int v=1;v<9;v++)
{ gotoxy(f,17);
cout<<"<";
f--;
delay(99);
}
for( char t=0;t<2;t++)
{ gotoxy(38, 17);
cout<<"              ";
delay(150);
textcolor(WHITE);
 gotoxy(38, 17);
cprintf("Narayni Hostel");
delay(900);
}
delay(1500);
clrscr();
goto m;
}
 else if(n==4)
 {
 a=24,d=12,e=49;
textbackground(BLACK);
clrscr();
  textcolor(RED);
  clrscr();
   gotoxy(41, 25);
cout<<"Sr.Boys Hostel";
 gotoxy(8, 9);
cout<<"Field";
 gotoxy(40, 10);
cout<<"Reception";
 gotoxy(60, 19);
cout<<"Mess";
 gotoxy(38, 17);
cout<<"Narayni Hostel";
 gotoxy(5, 25);
cout<<"Main Gate";
delay(1300);
for(int i=1;i<16;i++)
{ gotoxy(11,a);
cout<<char(24);
a--;
delay(99);
}
delay(99);
for(int s=1;s<29;s++)
{ gotoxy(d,10);
cout<<">";
d++;
delay(99);
}
delay(99);
for(int p=1;p<12;p++)
{ gotoxy(e,10);
cout<<">";
e++;
delay(99);
}
delay(99);
int q=10;
for(int w=1;w<10;w++)
{ gotoxy(60,q);
cout<<char(25);
q++;
delay(99);
}
for( char t=0;t<2;t++)
{ gotoxy(60, 19);
cout<<"    ";
delay(150);
textcolor(WHITE);
 gotoxy(60, 19);
cprintf("Mess");
delay(900);
}
delay(1000);
clrscr();
goto m;
}
 else if(n==5)
 {
 a=24,d=12,e=49;
textbackground(BLACK);
clrscr();
  textcolor(CYAN);
  clrscr();
   gotoxy(41, 25);
cout<<"Sr.Boys Hostel";
 gotoxy(8, 9);
cout<<"Field";
 gotoxy(40, 10);
cout<<"Reception";
 gotoxy(60, 19);
cout<<"Mess";
 gotoxy(38, 17);
cout<<"Narayni Hostel";
 gotoxy(5, 25);
cout<<"Main Gate";

delay(1300);
for(int i=1;i<16;i++)
{ gotoxy(11,a);
cout<<char(24);
a--;
delay(99);
}
delay(99);
for(int s=1;s<29;s++)
{ gotoxy(d,10);
cout<<">";
d++;
delay(99);
}
delay(99);
for(int p=1;p<12;p++)
{ gotoxy(e,10);
cout<<">";
e++;
delay(99);
}
int q=10;
for(int w=1;w<10;w++)
{ gotoxy(60,q);
cout<<char(25);
q++;
delay(99);
}
int k=20;
for(int h=1;h<7;h++)
{ gotoxy(60,k);
cout<<char(25);
k++;
delay(99);
}
int f=59;
for(int v=1;v<6;v++)
{ gotoxy(f,25);
cout<<"<";
f--;
delay(99);
}
for( char t=0;t<2;t++)
{ gotoxy(41, 25);
cout<<"              ";
delay(150);
textcolor(WHITE);
 gotoxy(41, 25);
cprintf("Sr.Boys Hostel");
delay(900);
}
delay(1500);
clrscr();
goto m;
}
else if(n==6)
{
 front();
}
else if(n==7)
{
 exit(0);
}
else
{
 cout<<"\nInvalid Input.Try Again";
 goto m;
}
}
void prntbox()
{
_setcursortype(_NOCURSOR);
clrscr();
textbackground(WHITE);
textcolor(BLACK);
clrscr();
for(int i=0;i<=79;i++)
{
gotoxy(i,1);
cout<<"*";
delay(10);
}
delay(100);
for(int j=0;j<=24;j++)
{
gotoxy(80,j);
cout<<"*";
delay(10);
}
for(int k=80;k>0;k--)
{
gotoxy(k,24);
cout<<"*";
delay(10);
}
for(int l=24;l>0;l--)
{
gotoxy(1,l);
cout<<"*";
delay(10);
}
gotoxy(38,13);
cout<<"WELCOME";
delay(3000);
}
void tictactoe()
{
prntbox();
textbackground(WHITE);
textcolor(BLUE);
clrscr();
char n[10],m[10];
cout<<"Enter player 1 name ";
gets(n);
cout<<"\nEnter player 2 name ";
gets(m);
clrscr();
char ans='y';
while(ans=='y')
{
for(int j=20;j<31;j+=10)
{
for(int i=5;i<20;i++)
{
gotoxy(j,i);
cout<<"";
}
}
for(j=10;j<20;j+=5)
{
for(int i=10;i<40;i++)
{
gotoxy(i,j);
cout<<"";
}
}
int a=1;
for(int i=6;i<20;i+=5)
{
for(j=12;j<41;j+=10)
{
gotoxy(j,i);
cout<<a;
a++;
}
}
int f=0,k=0;
int arr[4]={100,101,102,104};
int pla[4]={100,101,102,103};
int pox[3]={15,25,35};
int poy[3]={8,13,18};
int tx=0,ty=0;
int temp;
int flag=0;
i=0,j=0;
int ch[8][3]={{1,2,3},{4,5,6},{7,8,9},{1,4,7,},{2,5,8},{3,6,9},{1,5,9},{3,5,7}};
int cn1=0;
while(f<5 && k<4)
{
m:
gotoxy(50,10);
cout<<n<<" enter ";
cin>>arr[i];
for(int t=0;t<i;t++)
{
if(arr[t]==arr[i]||pla[t]==arr[i])
{
gotoxy(50,4);
cout<<"\aInvalid choice";
goto m;
}
}
if(arr[i]%3==0)
tx=2;
else
tx=(arr[i]%3)-1;
if(arr[i]%3==0)
ty=(arr[i]/3)-1;
else
ty=arr[i]/3;
gotoxy(pox[tx],poy[ty]);
cout<<"X";
gotoxy(50,10);
cout<<"                ";
i++;
f++;
for(int s=0;s<4;s++)
{
 for(int g=s;g<4;g++)
 {
  if(arr[s]>arr[g])
  {
  temp=arr[s];
  arr[s]=arr[g];
  arr[g]=temp;
  }
 }
}
if(f>2)
{
 for(s=0;s<2;s++)
 {
   for(int q=0;q<8;q++)
   {
    cn1=0;
    for(int w=s;w<(s+3);w++)
    {
     for(int e=0;e<3;e++)
     {
      if(ch[q][e]==arr[w])
      cn1++;
     }
    }
     if(cn1==3)
     {
     gotoxy(52,10);
     cout<<n<<" win";
     flag=1;
     break;
     }
   }
 }
}
if(flag==1 || f==5)
break;
ma:
gotoxy(50,15);
cout<<m<<" enter ";
cin>>pla[j];
for(t=0;t<j;t++)
{
if(arr[t]==pla[j] || pla[t]==pla[j] || arr[t+1]==pla[j])
{
gotoxy(50,4);
cout<<"\aInvalid choice";
goto ma;
}
}
if(pla[j]%3==0)
tx=2;
else
tx=(pla[j]%3)-1;
if(pla[j]%3==0)
ty=(pla[j]/3)-1;
else
ty=pla[j]/3;
gotoxy(pox[tx],poy[ty]);
cout<<"0";
gotoxy(50,15);
cout<<"                 ";
j++;
k++;
for(s=0;s<4;s++)
{
 for(int g=s;g<4;g++)
 {
  if(pla[s]>pla[g])
  {
  temp=pla[s];
  pla[s]=pla[g];
  pla[g]=temp;
  }
 }
}
if(k>2)
{
 for(s=0;s<2;s++)
 {
   for(int q=0;q<8;q++)
   {
    cn1=0;
    for(int w=s;w<(s+3);w++)
    {
     for(int e=0;e<3;e++)
     {
      if(ch[q][e]==pla[w])
      cn1++;
     }
    }
     if(cn1==3)
     {
     gotoxy(62,10);
     cout<<m<<" wins";
     flag=1;
     break;
     }
   }
 }
}
if(flag==1)
break;
}
if(flag==0)
{
gotoxy(50,17);
cout<<"Match draw";
}
gotoxy(50,19);
cout<<"Play Again?(y/n)";
ans=getch();
clrscr();
}
delay(1000);
front();
}
void hospital();
class Doctors
{
  int latest;
  char Phone[15],Degree[50],Address[50],Date[20];
  protected:
   long searchdoc(char dept[]);
  public:
  int D_id;
  char D_Name[20],Department[50];
 Doctors()        //Construtor
 {
  D_id=latest=1;
  strcpy(Department,NULL);
  strcpy(Phone,NULL);
 }
 void entry();              //Function for taking the doctor's entry
 void show();               //Function for displaying doctor's record
 void writing();            //Function for writing doctor's record on file
 void reading();            //Function for reading doctor's  info from file
 void menu();               //Function for menu
 void searching();   //Function for searching doctor's record
 void deletion();           //Function for deleting a doctor's record
 void modification();       //Function for modifying a doctor's record
 }d;
 long Doctors::searchdoc(char dept[])
 {
  long pos[100];
  int k=0;
  fstream i;
  i.open("doc.dat",ios::in);
  while(1)
  {
   pos[k]=i.tellg();
   i.read((char*)&d,sizeof(d));
   if(i.eof())
    break;
   if(strcmpi(dept,d.Department)==0)
    k++;
  }
  i.close();
  if(k!=0)
  {
   randomize();
   int a=random(k);
   return pos[a];
  }
  else
   return -1;
 }
 void Doctors::entry()
 {
  clrscr();
  gotoxy(35,1);
  cout<<"HOSPITAL";
  gotoxy(4,3);
  cout<<"Name                                     :  ";
  gotoxy(4,4);
  cout<<"Degree                                   :  ";
  gotoxy(4,5);
  cout<<"Date of joining (dd/mm/yyyy)             :  ";
  gotoxy(4,6);
  cout<<"Department                               :  ";
  gotoxy(4,7);
  cout<<"Phone Number                             :  ";
  gotoxy(4,8);
  cout<<"Address                                  :  ";
  gotoxy(46,3);
  gets(D_Name);
  gotoxy(46,4);
  gets(Degree);
  gotoxy(46,5);
  gets(Date);
  gotoxy(46,6);
  gets(Department);
  gotoxy(46,7);
  gets(Phone);
  gotoxy(46,8);
  gets(Address);
  delay(500);
  gotoxy(4,9);
  cout<<"Your Doctor ID is "<<D_id;
 }
 void Doctors::show()
 {
  cout<<"\n\n\nDoctor Id         : "<<D_id;

  cout<<"\nName              : "<<D_Name;

  cout<<"\nDegree            : "<<Degree;

  cout<<"\nDate Of Joining   : "<<Date;

  cout<<"\nDepartment        : "<<Department;

  cout<<"\nPhone Number      : "<<Phone;

  cout<<"\nAddress           : "<<Address;
 }
 void Doctors::reading()
 {
  clrscr();
  int j=0;
  gotoxy(31,1);
  cout<<"Details Of Doctors";
  ifstream i;
  i.open("doc.dat");
  while(1)
  {
   i.read((char*)&d,sizeof(d));
   if(i.eof())
   break;
   else
   {
     j++;
     d.show();
     if(j%2==0)
     {
      gotoxy(68,25);
      cout<<"Press Enter ";
      getch();
      clrscr();
      gotoxy(31,1);
      cout<<"Details Of Doctors";
     }
     cout<<"\n";
   }
  }
  i.close();
 }
 void Doctors:: writing()
 {
  int flag=0;
  ofstream o;
  o.open("doc.dat",ios::app);
  o.close();
  ifstream i;
  i.open("doc.dat");
  while(1)
  {
   i.read((char*)&d,sizeof(d));
   if(i.eof())
    break;
   else
    flag=latest;
  }
  i.close();
  if(flag!=0)
  {
   D_id=flag+1;
   latest=D_id;
  }
  d.entry();
  o.open("doc.dat",ios::app);
  o.write((char*)&d,sizeof(d)) ;
  o.close();
  fstream f;
  f.open("doc.dat",ios::in|ios::out);
  while(1)
  {
   long pos=f.tellg();
   f.read((char*)&d,sizeof(d));
   if(f.eof())
    break;
   else
   {
    d.latest=flag+1;
    f.seekp(pos);
    f.write((char*)&d,sizeof(d));
   }
  }
  f.close();
 }
void Doctors ::searching()
{
 int flag=0,docid=0;
 clrscr();
 cout<<"\nEnter id to search:";
 cin>>docid;
 ifstream i;
 i.open("doc.dat");
 while(1)
 {
  i.read((char*)&d,sizeof(d));
  if(i.eof())
  break;
  else
  {
   if(docid==D_id)
   {
    flag=1;
    break;
   }
  }
 }
 if(flag==0)
 {
  gotoxy(5,6);
  cout<<"Record Not Found";
 }
 else
 {
  gotoxy(5,6);
  cout<<"Record Found";
  d.show();
 }
}
 void Doctors :: deletion()
 {
   int flag=0,idd;
   clrscr();
   gotoxy(33,1);
   cout<<"Delete Record";
   gotoxy(5,4);
   cout<<"Enter Doctor's ID : ";
   cin>>idd;
   ofstream o;
   ifstream i;
   i.open("doc.dat");
   o.open("temp.dat");
   while(1)
   {
    i.read((char*)&d,sizeof(d));
    if(i.eof())
    break;
    else
    {
     if(idd==d.D_id)
      flag=1;
     else
     o.write((char*)&d,sizeof(d));
    }
    }
    i.close();
    o.close();
    remove("doc.dat");
    rename("temp.dat","doc.dat");
    if(flag==0)
    {
    gotoxy(5,6);
    cout<<"Record Not Found";
    }
    else
    {
    gotoxy(5,6) ;
    cout<<"Record Deleted";
    }
   }
   void Doctors:: modification()
   {
     char na[20],lo[20],di[20],c=0,p[10],de[50];
     int did;
     clrscr();
     gotoxy(33,1);
     cout<<"Modify Record";
     gotoxy(5,4);
     cout<<"Enter Doctor's ID : ";
     cin>>did;
     fstream f;
     f.open("doc.dat",ios::in|ios::out);
     while(1)
     {
      long a=f.tellg();
      f.read((char*)&d,sizeof(d));
      if(f.eof())
       break;
      else
      {
       if(did==d.D_id)
       {
	gotoxy(5,6);
	cout<<"Enter Name To Be Modified (Press R To Retain Old Name) ";
	gets(na);
	if(strcmpi(na,"R")!=0)
	 strcpy(d.D_Name,na);
	gotoxy(5,8);
	cout<<"Enter Degree To Be Modified (Press R To Retain Old Degree)";
	 gets(de);
	if(strcmpi(de,"R")!=0)
	 strcpy(d.Degree,de);
	gotoxy(5,10);
	cout<<"Enter Department To Be Modified (Press R To Retain Old Disease)";
	 gets(di);
	if(strcmpi(di,"R")!=0)
	 strcpy(d.Department,di);
	 gotoxy(5,12);
	 cout<<"Enter Phone Number To Be Modified (Press R To Retain Old Location)";
	gets(p);
	if(strcmpi(p,"R")!=0)
	 strcpy(d.Phone,p);
	gotoxy(5,14);
	cout<<"Enter Address To Be Modified (Press R To Retain Old Location)";
	gets(lo);
	if(strcmpi(lo,"R")!=0)
	 strcpy(d.Address,lo);

	f.seekp(a);
	f.write((char*)&d,sizeof(d));
	c=1;
       }
      }
     }
     if(c==1)
     {
     gotoxy(5,16);
     cout<<"Record Modified";
     }
     else
     {
     gotoxy(5,6);
     cout<<"Record Not Found";
     }
    }
 void Doctors::menu()
 {
   clrscr();
  char ans;
  gotoxy(36,1);
  cout<<"HOSPITAL";
  gotoxy(9,3);
  cout<<"1) Enter Details";
    gotoxy(9,5);
  cout<<"2) View Details";
   gotoxy(9,7);
  cout<<"3) Search Record";
    gotoxy(9,9);
  cout<<"4) Delete Record";
  gotoxy(9,11);
  cout<<"5) Modify Record";
  gotoxy(9,13);
  cout<<"6) Back To Menu";
  gotoxy(9,15);
  cout<<"7) Exit";
  gotoxy(9,17);
  cout<<"Enter Your Choice ";
  gotoxy(28,17);
  cin>>ans;
  if(ans=='1')
  {
   d.writing();
   getch();
  }
  else if(ans=='2')
  {
   d.reading();
   getch();
  }
  else if(ans=='3')
  {
   d.searching();
   getch();
  }
  else if(ans=='4')
  {
   d.deletion();
   getch();
  }
  else if(ans=='5')
  {
   d.modification();
   getch();
  }
  else if(ans=='6')
  {
    hospital();
  }
   else if(ans=='7')
   exit(0);
  else
  {
   cout<<"\n\tInvalid Entry";
   getch();
  }
 }
class Patient:public Doctors
{
 public :
 char name[20],dname[20],disease[20],location[20],date[20],dept[25];
 int age,did,id,latestid;
 Patient()        //Construtor
 {
  age=0;
  id=1;
  did=-1;
  latestid=1;
 }
 ~Patient()       //Destructor
 {
   id=0;
   age=0;
 }
 long entry();        //Function for taking the patient's entry
 void show();         //Function for displaying patient's record
 void writing();      //Function for writing patient's record on file
 void reading();      //Function for reading patient's from file
 void menu();         //Function for hospital menu
 void searching();    //Function for searching patient's record
 void deletion();     //Function for deleting a patient's record
 void modification(); //Function for modifying a patient's record
 }h;
 long Patient::entry()
 {
  clrscr();
  gotoxy(35,1);
  cout<<"HOSPITAL";
  gotoxy(4,3);
  cout<<"Name                          : ";
  gotoxy(4,4);
  cout<<"Age                           : ";
  gotoxy(4,5);
  cout<<"Date (dd/mm/yyyy)             :  ";
  gotoxy(4,6);
  cout<<"Disease                       : ";
  gotoxy(4,7);
  cout<<"Department                    :";
  gotoxy(4,8);
  cout<<"Current Location              :";
  gotoxy(35,3);
  gets(name);
  gotoxy(35,4);
  cin>>age;
  gotoxy(35,5);
  gets(date);
  gotoxy(35,6);
  gets(disease);
  gotoxy(35,7);
  gets(dept);
  gotoxy(36,8);
  gets(location);
  delay(500);
  gotoxy(4,9);
  long pos=searchdoc(dept);
  if(pos!=-1)
  {
   fstream i;
   i.open("doc.dat",ios::in);
   i.seekp(pos);
   i.read((char*)&d,sizeof(d));
   did=d.D_id;
   strcpy(dname,d.D_Name);
   i.close();
  }
  return(pos);
 }
 void Patient::show()
 {
  cout<<"\n\n\nPatient Id        : "<<id;
  cout<<"\nName              : "<<name;
  cout<<"\nAge               : "<<age;
  cout<<"\nDate              : "<<date;
  cout<<"\nDisease           : "<<disease;
  cout<<"\nDepartment        : "<<dept;
  cout<<"\nCurrent Location  : "<<location;
 }
 void Patient::reading()
 {
  clrscr();
  int j=0;
  gotoxy(31,1);
  cout<<"Details Of Hospital";
  ifstream i;
  i.open("hos.dat");
  while(1)
  {
   i.read((char*)&h,sizeof(h));
   if(i.eof())
   break;
   else
   {
     j++;
     h.show();
     if(j%2==0)
     {
      gotoxy(68,25);
      cout<<"Press Enter ";
      getch();
      clrscr();
      gotoxy(31,1);
      cout<<"Details Of Hospital";
     }
     cout<<"\n";
   }
  }
  getch();
  i.close();
 }
 void Patient:: writing()
 {
  int flag=0;
  long pos;
  ofstream o;
  o.open("hos.dat",ios::app);
  o.close();
  ifstream i;
  i.open("hos.dat");
  while(1)
  {
   i.read((char*)&h,sizeof(h));
   if(i.eof())
    break;
   else
    flag=latestid;
  }
  i.close();
  if(flag!=0)
  {
   id=flag+1;
   latestid=id;
  }
  pos=h.entry();
  if(pos!=-1)
  {
   o.open("hos.dat",ios::app);
   o.write((char*)&h,sizeof(h)) ;
   o.close();
   fstream f;
   f.open("hos.dat",ios::in|ios::out);
   while(1)
   {
    long pos=f.tellg();
    f.read((char*)&h,sizeof(h));
    if(f.eof())
     break;
    else
    {
     h.latestid=flag+1;
     f.seekp(pos);
     f.write((char*)&h,sizeof(h));
    }
   }
   f.close();
   cout<<"\nYour Patient ID is "<<id;
   cout<<"\nYour Doctor ID is "<<did<<"\nYour Doctor Name is "<<dname;
  }
  else
   cout<<"\nNo Doctors for this Disease Available at this Moment.";
  getch();
 }
 void Patient ::searching()
 {
  int idd;
  int flag=0;
  clrscr();
  gotoxy(33,1);
  cout<<"Search Record";
  gotoxy(5,4);
  cout<<"Enter Patient's ID : ";
  cin>>idd;
  ifstream i;
  i.open("hos.dat");
  while(1)
  {
   i.read((char*)&h,sizeof(h));
   if(i.eof())
   break;
   else
   {
    if(idd==id)
    {
     flag=1;
     break;
    }
   }
  }
  if(flag==0)
  {
   gotoxy(5,6);
   cout<<"Record Not Found";
  }
  else
  {
   gotoxy(5,6);
   cout<<"Record Found";
   h.show();
  }
  getch();
 }
 void Patient :: deletion()
 {
  int flag=0,idd;
  clrscr();
  gotoxy(33,1);
  cout<<"Delete Record";
  gotoxy(5,4);
  cout<<"Enter Patient's ID : ";
  cin>>idd;
  ofstream o;
  ifstream i;
  i.open("hos.dat");
  o.open("temp.dat");
  while(1)
  {
   i.read((char*)&h,sizeof(h));
   if(i.eof())
   break;
   else
   {
    if(idd==h.id)
     flag=1;
    else
    o.write((char*)&h,sizeof(h));
   }
  }
  i.close();
  o.close();
  remove("hos.dat");
  rename("temp.dat","hos.dat");
  if(flag==0)
  {
   gotoxy(5,6);
   cout<<"Record Not Found";
  }
  else
  {
   gotoxy(5,6) ;
   cout<<"Record Deleted";
  }
  getch();
 }
 void Patient:: modification()
 {
  char na[20],lo[20],di[20];
  int age,c=0,pid;
  clrscr();
  gotoxy(33,1);
  cout<<"Modify Record";
  gotoxy(5,4);
  cout<<"Enter Patient's ID : ";
  cin>>pid;
  fstream f;
  f.open("hos.dat",ios::in|ios::out);
  while(1)
  {
   long a=f.tellg();
   f.read((char*)&h,sizeof (h));
   if(f.eof())
    break;
   else
   {
    if(pid==h.id)
    {
     gotoxy(5,6);
     cout<<"Enter Name To Be Modified (Press R To Retain Old Name) ";
     gets(na);
     if(strcmpi(na,"R")!=0)
      strcpy(h.name,na);
      gotoxy(5,8);
      cout<<"Enter Disease To Be Modified (Press R To Retain Old Disease)";
      gets(di);
      if(strcmpi(di,"R")!=0)
       strcpy(h.disease,di);
      gotoxy(5,10);
      cout<<"Enter Location To Be Modified (Press R To Retain Old Location)";
      gets(lo);
      if(strcmpi(lo,"R")!=0)
       strcpy(h.location,lo);
      f.seekp(a);
      f.write((char*)&h,sizeof(h));
      c=1;
    }
   }
  }
  if(c==1)
  {
   gotoxy(5,12);
   cout<<"Record Modified";
  }
  else
  {
   gotoxy(5,12);
   cout<<"Record Not Found";
  }
  getch();
 }
 void Patient::menu()
 {
   clrscr();
  char ans;
  gotoxy(36,1);
  cout<<"HOSPITAL";
  gotoxy(9,3);
  cout<<"1) Enter Details";
    gotoxy(9,5);
  cout<<"2) View Details";
   gotoxy(9,7);
  cout<<"3) Search Record";
    gotoxy(9,9);
  cout<<"4) Delete Record";
  gotoxy(9,11);
  cout<<"5) Modify Record";
  gotoxy(9,13);
  cout<<"6) Back To Menu";
  gotoxy(9,15);
  cout<<"7) Exit";
  gotoxy(9,17);
  cout<<"Enter Your Choice ";
  gotoxy(28,17);
  cin>>ans;
  if(ans=='1')
   h.writing();
  else if(ans=='2')
   h.reading();
  else if(ans=='3')
   h.searching();
  else if(ans=='4')
   h.deletion();
  else if(ans=='5')
   h.modification();
  else if(ans=='6')
   hospital();
  else if(ans=='7')
   exit(0);
  else
   cout<<"\n\tInvalid Entry";
 }
void hospital()
{
int flag=0;
char ch,pas[20];
while(1)
{
clrscr();
gotoxy(33,1);
cout<<"HOSPITAL MENU";
gotoxy(33,2);
cout<<"******** ****";
gotoxy(2,4);
cout<<"Enter Your Choice \n\n1) Doctor \n2) Patient \n3) Back\n4) Exit";
cin>>ch;
if(ch=='1')
{
cout<<"\nEnter Password: ";
for(int i=0;i<20;++i)
 {
  pas[i]=getch();
  if(pas[i]=='\b')
  {
    printf("\b \b");
    i=i-2;
  }
  else if(pas[i]==(char)13)
  {
   pas[i]='\0';
   flag=1;
   break;
  }
  else
   cout<<"*";
 }
 if(flag!=1)
  pas[i]='\0';
 if(strcmp(pas,"Hello")==0)
 while(1)
 {
 d.menu();
 }
 else
  cout<<"\nWrong Password";
}
else if(ch=='2')
{
 while(1)
  h.menu();
}
else if(ch=='3')
 front();
else if(ch=='4')
 exit(0);
else
{
 cout<<"\nInvalid Input.Try Again";
}
 }
}
void hos()
{
 clrscr();
_setcursortype(_NOCURSOR);
 gotoxy(35,12);
  cout<<"WELCOME";
  delay(1800);
  clrscr();
  gotoxy(33,12);
  cout<<"THE LIFE HOSPITAL";
  delay(1800);
  clrscr();
 hospital();
}
int allnum(char n[])
{
 int s=strlen(n);
 for(int i=0;i<s;i++)
 {
  if(!isdigit(n[i]))
   return 0;
 }
 return 1;
}
void phone()
{
   int gd=DETECT, gm;
initgraph(&gd,&gm,"C:\\TC\\bgi");
cleardevice();
_setcursortype(_NOCURSOR);
int ans;char num[10];
clrscr();
gotoxy(35,12);
cout<<"WELCOME";
delay(2000);
gotoxy(35,12);
cout<<"MY PHONE";
delay(2000);
clrscr();
A:
clrscr();
gotoxy(36,1);
cout<<"MY PHONE";
gotoxy(9,3);
cout<<"1) Keypad";
gotoxy(9,5);
cout<<"2) Logs";
gotoxy(9,7);
cout<<"3) Contacts";
gotoxy(9,9);
cout<<"4) BACK";
gotoxy(9,11);
cout<<"5) EXIT";
gotoxy(9,13);
cout<<"Enter Your Choice ";
cin>>ans;
if(ans==1)
{
 cleardevice();
 rectangle(225,120,425,350);
 line(225,150,425,150);
 line(225,199,425,199);
 line(225,248,425,248);
 line(225,297,425,297);
 line(288,150,288,350);
 line(362,350,362,150);
 gotoxy(38,2);
 cout<<"Keypad";
 gotoxy(32,12);
 cout<<"1";
  gotoxy(41,12);
 cout<<"2";
  gotoxy(50,12);
 cout<<"3";
  gotoxy(32,15);
 cout<<"4";
  gotoxy(41,15);
 cout<<"5";
  gotoxy(50,15);
 cout<<"6";
  gotoxy(32,18);
 cout<<"7";
  gotoxy(41,18);
 cout<<"8";
  gotoxy(50,18);
 cout<<"9";
  gotoxy(32,21);
 cout<<"*";
  gotoxy(41,21);
 cout<<"0";
  gotoxy(50,21);
 cout<<"#";
 for(int i=0;i<10;i++)
 {
  num[i]=getch();
  gotoxy(31+i,9);
  cout<<num[i];
  if(num[i]=='1')
  {
   delay(100);
   gotoxy(32,12);
   cout<<" ";
   delay(100);
   gotoxy(32,12);
   cout<<num[i];
  }
  else if(num[i]=='2')
  {
   delay(100);
   gotoxy(41,12);
   cout<<" ";
   delay(100);
   gotoxy(41,12);
   cout<<"2";
  }
  else if(num[i]=='3')
  {
   delay(100);
   gotoxy(50,12);
   cout<<" ";
   delay(100);
   gotoxy(50,12);
   cout<<"3";
  }
  else if(num[i]=='4')
  {
   delay(100);
   gotoxy(32,15);
   cout<<" ";
   delay(100);
   gotoxy(32,15);
   cout<<"4";
  }
  else if(num[i]=='5')
  {
   delay(100);
   gotoxy(41,15);
   cout<<" ";
   delay(100);
   gotoxy(41,15);
   cout<<"5";
  }
  else if(num[i]=='6')
  {
   delay(100);
   gotoxy(50,15);
   cout<<" ";
   delay(100);
   gotoxy(50,15);
   cout<<"6";
  }
  else if(num[i]=='7')
  {
   delay(100);
   gotoxy(32,18);
   cout<<" ";
   delay(100);
   gotoxy(32,18);
   cout<<"7";
  }
  else if(num[i]=='8')
  {
   delay(100);
   gotoxy(41,18);
   cout<<" ";
   delay(100);
   gotoxy(41,18);
   cout<<"8";
  }
  else if(num[i]=='9')
  {
   delay(100);
   gotoxy(50,18);
   cout<<" ";
   delay(100);
   gotoxy(50,18);
   cout<<"9";
  }
  else if(num[i]=='*')
  {
   delay(100);
   gotoxy(32,21);
   cout<<" ";
   delay(100);
   gotoxy(32,21);
   cout<<"*";
  }
  else if(num[i]=='0')
  {
   delay(100);
   gotoxy(41,21);
   cout<<" ";
   delay(100);
   gotoxy(41,21);
   cout<<"0";
  }
  else if(num[i]== '#')
  {
   delay(100);
   gotoxy(50,21);
   cout<<" ";
   delay(100);
   gotoxy(50,21);
   cout<<"#";
  }
  else if(num[i]=='\b')
  {
   gotoxy(30+i,9);
   cout<<' ';
   i-=2;
  }
 }
 num[i]='\0';
getch();
 if(allnum(num))
 {
  _setcursortype(_NOCURSOR);
    clrscr();
    gotoxy(35,12);
    cout<<"Calling ";
    cout<<num;
    for(int p=1;p<5;p++)
    {
     gotoxy(52+p,12);
     cout<<".";
     delay(300);
    }
    delay(500);
    gotoxy(53,12);
    cout<<"     ";
    for(p=1;p<5;p++)
    {
     gotoxy(52+p,12);
     cout<<".";
     delay(300);
    }
    gotoxy(35,12);
    cout<<"              	         ";
    delay(500);
    gotoxy(28,14);
    cout<<"Could Not Connect Please Try Again Later";
    gotoxy(28,15);
    delay(2000);
    cout<<"Moving To Main Menu";
    ofstream o;
    o.open("Myfile.txt",ios::app);
    o<<endl<<num<<endl;
    o.close();
    delay(2500);
    goto A;
  }
  else
  {
   gotoxy(36,12);
   cout<<"Invalid Number";
   getch();
   goto A;
  }
 }
 else if(ans==2)
 {
   char a,n;
   clrscr();
   gotoxy(36,1);
   cout<<"Logs\n\n";
   ifstream i;
   i.open("Myfile.txt");
   while(!i.eof())
   {
    i>>num;
    cout<<endl<<num<<endl;
   }
   i.close();
    gotoxy(60,20);
    cout<<"Options";
    gotoxy(55,21);
    cout<<"1) Main Menu";
    gotoxy(55,22);
    cout<<"2) Delete All ";
    gotoxy(55,23);
    cout<<"YOUR CHOICE :";
    gotoxy(68,23);
    cin>>n;
    if(n=='1')
     goto A;
     else if(n=='2')
     {
      remove("Myfile.txt");
      ofstream o;
      o.open("Myfile.txt");
      o.close();
      clrscr();
      gotoxy(36,1);
      cout<<"Logs";
      gotoxy(60,20);
      cout<<"Options";
      gotoxy(55,21);
      cout<<"1) Main Menu";
      gotoxy(55,22);
      cout<<"2) Delete All ";
      gotoxy(55,23);
      cout<<"YOUR CHOICE :";
      gotoxy(3,22);
      cout<<"All Logs Are Deleted Sucessfully";
      gotoxy(3,23);
      cout<<"Moving To Main Menu";
      delay(2500);
      goto A;
     }
 }
    if(ans==3)
    {
     clrscr();
     gotoxy(36,1);
     cout<<"Contacts";
     gotoxy(9,4);
     cout<<"1) Create Contact";
      gotoxy(9,6);
     cout<<"2) My Contacts";
     gotoxy(9,10);
     cout<<"Enter Your Choice ";
      cin>>ans;
      if(ans==1)
      {
       clrscr();
       gotoxy(36,1);
       cout<<"New Contact";
       gotoxy(9,3);
       ofstream o;
       o.open("contacts.txt",ios::app);
       char name[15],number[10];
       cout<<"Number : ";
       gotoxy(9,5);
       cout<<"Name : ";
       gotoxy(18,3) ;
       cin>>number;
       gotoxy(16,5);
       gets(name);
       o<<"\n\n"<<number<<"\t"<<name;
       o.close();
       delay(1000);
       gotoxy(9,7);
       cout<<"Your Contact Has Been Saved Sucessfully";
       delay(1000);
       gotoxy(9,9);
       cout<<"Moving To Main Menu";
       delay(3000);
       clrscr();
       goto A;
       }
       else if(ans==2)
       {
	clrscr();
	gotoxy(35,1);
	cout<<"My Contacts";
	char name[15],number[11];
	int n=1;
	ifstream i;
	i.open("contacts.txt");
	while(!i.eof())
	{
	i>>number;
	i>>name;

	cout<<"\n\n"<<n<<") "<<number<<"\t"<<name;
	n++;
       }
       i.close();
       getch();
       clrscr();
       gotoxy(9,9);
       cout<<"Moving To Main Menu";
       delay(3000);
       clrscr();
       goto A;
   }
     }
 else if(ans==4)
 {
  cleardevice();
  closegraph();
  front();
 }
 else if(ans==5)
  exit(0);
 else
 {
  cout<<"\nInvalid Input.Try again";
  getch();
  goto A;
 }
}
