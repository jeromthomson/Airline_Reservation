#include<fstream.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
void welcome()			       //for the welcome screen
{
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"\\bgi");
	setbkcolor(WHITE);
	setcolor(BLUE);
	settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
	outtextxy(20,100,"Prakash higher Secondary School");
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
	outtextxy(0,200,"Programmed by : Jerom Thomson");
	outtextxy(0,230,"Class : XII A");
	outtextxy(0,260,"Roll Number : 9");
	outtextxy(0,290,"Year : 2018-2019");
	getch();
	closegraph();
}
void plane()  					//for the plane screen
{
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"\\bgi");
	int j=10,a=55,b=80,m=55,n=80,x=0;
	for(int w=0;w<=500;w++)
	{
		setcolor(WHITE);
		j=20+x;a=55+x;b=80+x;m=55+x;n=80+x;
		delay(3);
		cleardevice();
		for(int i=129;i<=150;i+=3)
		{
			line(10+x,i,j,i);
			j+=2;
		}
	line(10+x,150,100+x,150);
	line(10+x,153,105+x,153);
	line(10,156,110+x,156);
	line(10+x,159,110+x,159);
	line(10+x,162,105+x,162);
	for(int k=164;k<=179;k+=3)
	{
		line(m,k,n,k);
		m-=5;
		n-=5;
	}

	for(int l=146;l>=131;l-=3)
	{
		line(a,l,b,l);
		a-=5;
		b-=5;
	}
	x+=1;
	}
	delay(200);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	setcolor(RED);
	outtextxy(250,190,"Welcome to");
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
	setcolor(CYAN);
	outtextxy(150,200,"Prakash Airlines");
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
	outtextxy(190,450,"(Press Enter to Continue)");
	getch();
	closegraph();
}

struct cus		       //structure to store info
{
	char fname[10];
	char lname[10];
	float pnr;
	int dep;
	int arr;
	int seatno;
	float tikno;
	char date[10];
	char clss[15];
	float amt;
}customer;


void menu()             //function for menu
{
	clrscr();
	textcolor(YELLOW);
	gotoxy(30,9);
	cprintf("Enter your choice(1,2,3,4)");
	textcolor(GREEN);
	gotoxy(30,10);
	cprintf("1) Manage your Trip");
	gotoxy(30,11);
	cprintf("2) Airline Features");
	gotoxy(30,12);
	cprintf("3) Travel Information");
	gotoxy(30,13);
	cprintf("4) Baggage");
	gotoxy(30,14);

}
int city(int a)           //func to display dest. city
{
	int b;
	if(a==1)
	{
	cout<<"2) Delhi "<<endl;
	cout<<"3) Mumbai "<<endl;
	cout<<"4) Chennai"<<endl;
	}
	else if(a==2)
	{
	cout<<"1) Ahmedabad "<<endl;
	cout<<"3) Mumbai "<<endl;
	cout<<"4) Chennai"<<endl;
	}
	else if(a==3)
	{
	cout<<"1) Ahmedabad "<<endl;
	cout<<"2) Delhi "<<endl;
	cout<<"4) Chennai "<<endl;
	}
	else if(a==4)
	{
	cout<<"1) Ahmedabad "<<endl;
	cout<<"2) Delhi "<<endl;
	cout<<"3) Mumbai "<<endl;
	}
	cin>>b;
	return b;
}
void assingclass(int c)      //function to assing class
{
	if(c==1)
	{
	strcpy(customer.clss,"First Class");
	customer.amt=20000;
	}
	else if(c==2)
	{
	strcpy(customer.clss,"Buisness Class");
	customer.amt=10000;
	}
	else if(c==3)
	{
	strcpy(customer.clss,"Economy Class");
	customer.amt=3000;
	}
}
void bill(int a,int b)   //function to display the bill
{
	clrscr();
	cout<<"Name : "<<customer.fname;
	cout<<" "<<customer.lname;
	cout<<endl;
	if(a==1&&b==2)
	{
		cout<<"Depature from : Ahemdabad"<<endl;
		cout<<"At : 12:00"<<endl;
		cout<<"Arrival : Delhi"<<endl;
		cout<<"At : 14:00"<<endl;
		cout<<"Flight Number : PA101"<<endl;
	}
	else if(a==1&&b==3)
	{
		cout<<"Depature from : Ahemdabad"<<endl;
		cout<<"At : 15:00"<<endl;
		cout<<"Arrival : Mumbai"<<endl;
		cout<<"At : 16:00"<<endl;
		cout<<"Flight Number : PA102"<<endl;
	}
	else if(a==1&&b==4)
	{
		cout<<"Depature from : Ahemdabad"<<endl;
		cout<<"At : 17:00"<<endl;
		cout<<"Arrival : Chennai"<<endl;
		cout<<"At : 19:00"<<endl;
		cout<<"Flight Number : PA103"<<endl;
	}
	else if(a==2&&b==1)
	{
		cout<<"Depature : Delhi"<<endl;
		cout<<"At : 20:00"<<endl;
		cout<<"Arrival : Ahemdabad"<<endl;
		cout<<"At : 22:00"<<endl;
		cout<<"Flight Number : PA104"<<endl;
	}
	else if(a==2&&b==3)
	{
		cout<<"Depature : Delhi"<<endl;
		cout<<"At :23:00"<<endl;
		cout<<"Arrival : Mumbai"<<endl;
		cout<<"At : 1:00"<<endl;
		cout<<"Flight Number : PA105"<<endl;
	}
	else if(a==2&&b==4)
	{
		cout<<"Depature : Delhi"<<endl;
		cout<<"At : 2:00"<<endl;
		cout<<"Arrival : Chennai"<<endl;
		cout<<"At : 4:00"<<endl;
		cout<<"Flight Number : PA106"<<endl;
	}
	else if(a==3&&b==1)
	{
		cout<<"Depature : Mumbai"<<endl;
		cout<<"At : 5:00"<<endl;
		cout<<"Arrival : Ahemdabad"<<endl;
		cout<<"At : 6:00"<<endl;
		cout<<"Flight Number : PA107"<<endl;
	}
	else if(a==3&&b==2)
	{
		cout<<"Depature : Mumbai"<<endl;
		cout<<"At : 7:00"<<endl;
		cout<<"Arrival : Delhi"<<endl;
		cout<<"At : 9:00"<<endl;
		cout<<"Flight Number : PA108"<<endl;
	}
	else if(a==3&&b==4)
	{
		cout<<"Depature : Mumbai"<<endl;
		cout<<"At : 10:00"<<endl;
		cout<<"Arrival : Chennai"<<endl;
		cout<<"At : 12:00"<<endl;
		cout<<"Flight Number : PA109"<<endl;
	}
	else if(a==4&&b==1)
	{
		cout<<"Depature : Chennai"<<endl;
		cout<<"At : 13:00"<<endl;
		cout<<"Arrival : Ahemdabad"<<endl;
		cout<<"At : 15:00"<<endl;
		cout<<"Flight Number : PA110"<<endl;
	}
	else if(a==4&&b==2)
	{
		cout<<"Depature : Chennai"<<endl;
		cout<<"At : 16:00"<<endl;
		cout<<"Arrival : Delhi"<<endl;
		cout<<"At : 18:00"<<endl;
		cout<<"Flight Number : PA111"<<endl;
	}
	else if(a==4&&b==3)
	{
		cout<<"Depature : Chennai"<<endl;
		cout<<"At : 19:00"<<endl;
		cout<<"Arrival : Mumbai"<<endl;
		cout<<"At : 21:00"<<endl;
		cout<<"Flight Number : PA112"<<endl;
	}
	cout<<"Depature Date (dd/mm/yyyy) : "<<customer.date<<endl;
	cout<<"PNR : "<<customer.pnr<<endl;
	cout<<"Seat Number : "<<customer.seatno<<endl;
	cout<<"Ticket Number : "<<customer.tikno<<endl;
	cout<<"You would be travelling in : "<<customer.clss<<endl;
	cout<<"Amount to be paid : "<<customer.amt<<endl;
}
void booktic()   //function to book tickets
{
	int ch1,ch2,ch3;
	textcolor(CYAN);
	clrscr();
	cout<<"Enter your first name : ";
	gets(customer.fname);
	cout<<"Enter your last name : ";
	gets(customer.lname);
	cout<<"Choose your city "<<endl;
	cout<<"1) Ahmedabad"<<endl;
	cout<<"2) Delhi"<<endl;
	cout<<"3) Mumbai"<<endl;
	cout<<"4) Chennai"<<endl;
	cin>>ch1;
	cout<<"Choose your Destination City"<<endl;
	ch2=city(ch1);
	customer.dep=ch1;
	customer.arr=ch2;
	cout<<"Enter your date of travel (dd/mm/yyyy) :";
	gets(customer.date);
	cout<<"Choose your Class "<<endl;
	cout<<"1) First class"<<endl;
	cout<<"2) Buisness class"<<endl;
	cout<<"3) Economy Class"<<endl;
	cin>>ch3;
	assingclass(ch3);
	int n;
	fstream ifl("Global.txt",ios::in|ios::out);
	ifl>>n;
	customer.seatno=n;
	customer.tikno=(n+29);
	customer.pnr=(n+6752);
	n++;
	ifl.seekg(0);
	ifl<<n;
	ifl.close();
	cout<<"THANK YOU FOR TRAVELLING WITH PRAKASH ";
	cout<<"AIRLINES HERE IS YOUR BILL";

}

void cancel()
{
	textcolor(CYAN);
	clrscr();
	int flag=0;
	float n;
	cout<<"\nEnter Yout PNR : ";
	cin>>n;
	ifstream fil("Prakash.txt",ios::in);
	ofstream fout("temp.txt",ios::out);
	while(!fil.eof())
	{
	fil.read((char*)&customer,sizeof(customer));
	if(customer.pnr==n)
	{
	 flag=1;
	}
	else
	{
	 fout.write((char*)&customer,sizeof(customer));
	}
	if(fil.eof())
	break;
	}
	if(flag==0)
	cout<<"Ticket not found";
	else
	cout<<"Ticket succesfully deleted";
	fout.close();
	fil.close();
	remove("Prakash.txt");
	rename("temp.txt","Prakash.txt");
}
void view()
{
	textcolor(CYAN);
	clrscr();
	cout<<"Enter your PNR :";
	float ch;
	cin>>ch;
	ifstream fil("Prakash.txt",ios::in);
	int flag=0;
	while(!fil.eof())
	{
		fil.read((char*)&customer,sizeof(customer));
		if(customer.pnr==ch)
		{
		bill(customer.dep,customer.arr);
		flag=1;
		}
	}
	if(flag==0)
	cout<<"Ticket not found";
}
void change()
{
	textcolor(CYAN);
	clrscr();
	cout<<"ENTER THE DETAILS AS REQUIRED ";
	getch();
	clrscr();
	cout<<"Enter your PNR : ";
	float ch;
	cin>>ch;
	long pos,n;
	int flag=0;
	fstream fout("Prakash.txt",ios::in|ios::ate);
	while(!fout.eof())
	{
	pos=fout.tellg();
	fout.read((char*)&customer,sizeof(customer));
	if(customer.pnr==ch)
	{
	n=pos-sizeof(customer);
	fout.seekg(n);
	booktic();
	fout.write((char*)&customer,sizeof(customer));
	flag=1;
	}
	if(fout.eof())
	break;
	}
	fout.close();
	if(flag==1)
	{
	 clrscr();
	 cout<<"Your ticket has been succesfull changed";
	 getch();
	}
	else
	{
	clrscr();
	cout<<"ticket not found";
	getch();
	}

}
void modify()              //functionsto modify records
{
	start:
	textcolor(CYAN);
	clrscr();
	cout<<"Enter your choice"<<endl;
	cout<<"1) Cancel Ticket"<<endl;
	cout<<"2) Change Ticket"<<endl;
	cout<<"3) view Ticket"<<endl;
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1: cancel();
			break;
		case 2: change();
			break;
		case 3: view();
			break;
	}

}
void timetable()        //function to display timetable
{
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"\\bgi");
	setcolor(CYAN);
	rectangle(0,0,630,470);
	line(200,0,200,470);
	line(320,0,320,470);
	line(420,0,420,470);
	line(520,0,520,470);
	line(0,25,630,25);
	outtextxy(10,10,"Flight Route");
	outtextxy(210,10,"Flight Number");
	outtextxy(330,5,"Depature");
	outtextxy(330,15,"Time");
	outtextxy(430,5,"Arrival");
	outtextxy(430,15,"Time");
	outtextxy(530,5,"Baggage");
	outtextxy(530,15,"Allowance");
	outtextxy(10,30,"Ahemdabad - Delhi");
	outtextxy(230,30,"PA101");
	outtextxy(330,30,"12:00");
	outtextxy(430,30,"14:00");
	outtextxy(530,30,"15 kg");
	outtextxy(10,60,"Ahemdabad - Mumbai");
	outtextxy(230,60,"PA102");
	outtextxy(330,60,"15:00");
	outtextxy(430,60,"16:00");
	outtextxy(530,60,"15 kg");
	outtextxy(10,90,"Ahemdabad - Chennai");
	outtextxy(230,90,"PA103");
	outtextxy(330,90,"17:00");
	outtextxy(430,90,"19:00");
	outtextxy(530,90,"15 kg");
	outtextxy(10,120,"Delhi - Ahemdabad");
	outtextxy(230,120,"PA104");
	outtextxy(330,120,"20:00");
	outtextxy(430,120,"22:00");
	outtextxy(530,120,"15 kg");
	outtextxy(10,150,"Delhi - Mumbai");
	outtextxy(230,150,"PA105");
	outtextxy(330,150,"23:00");
	outtextxy(430,150,"1:00");
	outtextxy(530,150,"15 kg");
	outtextxy(10,180,"Delhi - Chennai");
	outtextxy(230,180,"PA106");
	outtextxy(330,180,"3:00");
	outtextxy(430,180,"5:00");
	outtextxy(530,180,"15 kg");
	outtextxy(10,210,"Mumbai - Ahemdabad");
	outtextxy(230,210,"PA107");
	outtextxy(330,210,"6:00");
	outtextxy(430,210,"7:00");
	outtextxy(530,210,"15 kg");
	outtextxy(10,240,"Mumbai - Delhi");
	outtextxy(230,240,"PA108");
	outtextxy(330,240,"8:00");
	outtextxy(430,240,"10:00");
	outtextxy(530,240,"15 kg");
	outtextxy(10,270,"Mumbai - Chennai");
	outtextxy(230,270,"PA109");
	outtextxy(330,270,"11:00");
	outtextxy(430,270,"13:00");
	outtextxy(530,270,"15 kg");
	outtextxy(10,300,"Chennai - Ahemdabad");
	outtextxy(230,300,"PA110");
	outtextxy(330,300,"14:00");
	outtextxy(430,300,"16:00");
	outtextxy(530,300,"15 kg");
	outtextxy(10,330,"Chennai - Delhi");
	outtextxy(230,330,"PA111");
	outtextxy(330,330,"17:00");
	outtextxy(430,330,"19:00");
	outtextxy(530,330,"15 kg");
	outtextxy(10,360,"Chennai - Mumbai");
	outtextxy(230,360,"PA112");
	outtextxy(330,360,"20:00");
	outtextxy(430,360,"22:00");
	outtextxy(530,360,"15 kg");
	getch();
	closegraph();
}
void main()                       //main function

{

	welcome();
	plane();
	clrscr();
	start:
	clrscr();
	menu();                 //function call to display menu
	int ch;
	cin>>ch;
	switch(ch)
	{
		case 1: goto manage;
		case 2: goto airfeature;
		case 3: goto travelinfo;
		case 4: goto baggage;
		default:goto def;
	}
	manage:
	{
		textcolor(CYAN);
		clrscr();
		cout<<"Enter your choice "<<endl;
		cout<<"1) Book tickets "<<endl;
		cout<<"2) View Timetable "<<endl;
		cout<<"3) View / Modify ticket"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1: ofstream fout("Prakash.txt",ios::ate);
				booktic();
				bill(customer.dep,customer.arr);
			fout.write((char*)&customer,sizeof(customer));
			fout.close();
				break;
			case 2: timetable();
				break;
			case 3: modify();
				break;
			default: goto def;
		 }
		 getch();
		 textcolor(CYAN);
		 clrscr();
		 cout<<"Do you want to continue(Y/N)"<<endl;
		 char ch;
		 cin>>ch;
		 if(ch=='Y'||ch=='y')
		 goto start;
		 else
		 exit(0);
	}
	baggage:       //label for baggage
{
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"\\bgi");
	setcolor(CYAN);
	outtextxy(0,0,"The Dimensions of Hand Baggage allowed onboard Prakash Airlines");
	outtextxy(0,15,"are as given below");
	outtextxy(0,30,"Height : 55cms ");
	outtextxy(0,45,"Length : 35cms ");
	outtextxy(0,60,"Width  : 25cms ");
	outtextxy(0,75,"Total Weight : 15kg");
	line(100,140,100,115);              //for the handle of the bag
	line(105,140,105,120);
	line(105,120,130,120);
	line(100,115,135,115);
	line(130,120,130,140);
	line(135,115,135,140);
	rectangle(80,140,155,250);         //body of the bag
	circle(145,255,5);
	circle(90,255,5);
	line(175,135,175,255);
	line(175,135,165,135);
	line(175,255,165,255);		   // dimensional indicator
	outtextxy(190,200,"55cms");
	line(80,270,155,270);
	line(80,270,80,265);
	line(155,270,155,265);
	outtextxy(100,280,"35cms");
	getch();
	closegraph();
	textcolor(CYAN);
	clrscr();
	cout<<"Do you want to continue(y/n)";
	char q;
	cin>>q;
	if(q=='y')
	goto start;
	else
	exit(0);
}

	airfeature:  //label for airline info
{
	textcolor(YELLOW);
	clrscr();
	gotoxy(10,0);
	cout<<"Here are some Features of our Airlines"<<endl;
	cout<<"1) Onboard prakash Airlines we serve you top quality food from"<<endl;
	cout<<"   FOODLINE SERVICES you have multi cuisine option onboard prakash ailines"<<endl;
	cout<<"2) Your security is our primarary concern our on air staff as has a 6 month"<<endl;
	cout<<"   training from ODESSA SECURITY SERVICES"<<endl;
	cout<<"3) We provide a variety of playing material for children below 5 yrs of age"<<endl;
	cout<<"   from Hamley's"<<endl;
	cout<<"4) Onboard Prakash airlines we provide you with catalog for shopping with"<<endl;
	cout<<" the world famous";
	cout<<" INFINITY mall"<<endl;
	cout<<"5) Vareity of entertainment from REDBOX"<<endl;
	getch();
	clrscr();
	cout<<"Do you want to continue(Y/N)"<<endl;
	char ch;
	cin>>ch;
	if(ch=='Y'||ch=='y')
	goto start;
	else
	exit(0);
	travelinfo:
	textcolor(BROWN);
	clrscr();
	cout<<"1)Rules and Regulations"<<endl;
	cout<<"2)Travel Tips"<<endl;
	cout<<"enter your choice(1/2)"<<endl;
	int l;
	cin>>l;
	if(l==1)
	goto rules;
	else
	goto tip;
	rules:                //label for display of rules
	{
		clrscr();
		cout<<"1) No requests will be acknoledged after No-show board is"<<endl;
		cout<<"   shown"<<endl;
		cout<<"2) Passengers are not allowed to carry fluids in excess of"<<endl;
		cout<<"   100 ml"<<endl;
		cout<<"3) Inflamable and objectionable items are not allowed with the"<<endl;
		cout<<"   luggage"<<endl;
		cout<<"4) Items such as Knives,guns,ammunition,sports gear are not allowed"<<endl;
		getch();
		clrscr();
		cout<<"Do you want to continue(y/n)"<<endl;
		char f;
		cin>>f;
		if(f=='y')
		goto start;
		else
		exit(0);
	}
	tip:               //label for tips
	{
		clrscr();
		cout<<"1) Please carry the Itinerary receipt and valid Photo Id card"<<endl;
		cout<<"2) Counter will close 45 minutes before the depature time"<<endl;
		cout<<"3) Passengers are advised not to include valuable/fragile &"<<endl;
		cout<<"   important articles in checked Baggage to avoid damage,loss or delay"<<endl;
		getch();
		clrscr();
		cout<<"Do you want to continue (y/n)";
		char p;
		cin>>p;
		if(p=='y')
		goto start ;
		else
		exit(0);
	}
}

	def:
	{
	textcolor(RED);
	clrscr();
	cout<<"You have entered wrong choice"<<endl;
	cout<<"Do you want to continue (Y/N)"<<endl;
	char ch;
	cin>>ch;
	if(ch=='Y'||ch=='y')
	goto start;
	else
	exit(0);
	}
	getch();
}
