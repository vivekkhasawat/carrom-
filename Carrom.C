/*Program Developed By Mr. Vivek Khasawat*/
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int i,midx,midy,left, top, right, bottom,j,a;
void start()						//start();
{
int i;
cleardevice();
	settextstyle(7,0,0);
       setcolor(14);
	outtextxy(10,300,"  PRESS ANY KEY TO CONTINUE....");
	settextstyle(7,0,0);
	setcolor(4);
	setusercharsize(35,20,20,4);
	outtextxy(100,50,"CARROM GAME");
	setcolor(14);
  for(i=0;i<15;i++)
     {
     setcolor(i);
     rectangle(90-i,90-i,530+i,250+i);
	  }
    getch();
    }
void carrom()					      ///carrom()
{
int i,midx,midy,left, top, right, bottom,j,a;
int v[10]={119,39,519,39,519,439,119,439,119,39},k[10]={00,00,104,00,104,539,00,539,00,00};
int l[10]={00,00,700,00,700,24,00,24,00,00},m[10]={534,00,700,00,700,500,534,500,534,00},n[10]={00,454,700,454,700,500,00,500,00,454};
setbkcolor(9);
setcolor(1);
{
left = getmaxx() / 2 - 200;
top = getmaxy() / 2 - 200;
right = getmaxx() / 2 + 200;
bottom = getmaxy() / 2 + 200;
setfillstyle(1,1);
fillpoly(5,k);
setfillstyle(1,1);
fillpoly(5,l);
setfillstyle(1,1);
fillpoly(5,m);
setfillstyle(1,1);
fillpoly(5,n);

}
{
setcolor(RED);
/* draw a rectangle */
rectangle(left-1,top-1,right+1,bottom+1);
rectangle(left-2,top-2,right+2,bottom+2);
rectangle(left-3,top-3,right+3,bottom+3);
rectangle(left-4,top-4,right+4,bottom+4);
rectangle(left-5,top-5,right+5,bottom+5);
rectangle(left-6,top-6,right+6,bottom+6);
rectangle(left-7,top-7,right+7,bottom+7);
rectangle(left-8,top-8,right+8,bottom+8);
rectangle(left-9,top-9,right+9,bottom+9);
rectangle(left-10,top-10,right+10,bottom+10);
rectangle(left-11,top-11,right+11,bottom+11);
rectangle(left-12,top-12,right+12,bottom+12);
rectangle(left-13,top-13,right+13,bottom+13);
rectangle(left-14,top-14,right+14,bottom+14);
rectangle(left-15,top-15,right+15,bottom+15);

left = getmaxx() / 2 - 200;
top = getmaxy() / 2 - 200-2;
right = getmaxx() / 2 + 200;
bottom = getmaxy() / 2 + 200+2;
/* draw a rectangle */
rectangle(left-1,top-1,right+1,bottom+1);
rectangle(left-2,top-2,right+2,bottom+2);
rectangle(left-3,top-3,right+3,bottom+3);
rectangle(left-4,top-4,right+4,bottom+4);
rectangle(left-5,top-5,right+5,bottom+5);
rectangle(left-6,top-6,right+6,bottom+6);
rectangle(left-7,top-7,right+7,bottom+7);
rectangle(left-8,top-8,right+8,bottom+8);
rectangle(left-9,top-9,right+9,bottom+9);
rectangle(left-10,top-10,right+10,bottom+10);
rectangle(left-11,top-11,right+11,bottom+11);
rectangle(left-12,top-12,right+12,bottom+12);
rectangle(left-13,top-13,right+13,bottom+13);
rectangle(left-14,top-14,right+14,bottom+14);
rectangle(left-15,top-15,right+15,bottom+15);

}
  setcolor(14);
     settextstyle(0,0,0);
     outtextxy(300,31,"VIVEK");
     outtextxy(300,441,"VIVEK");

midx = getmaxx() / 2;
midy = getmaxy() / 2;
{
setcolor(4);
circle(midx,midy,55);	//center circle near by star
setcolor(6);
circle(midx,midy,54);	//center circle near by star
setcolor(10);
circle(midx,midy,53);	//center circle near by star
}
// line for star
setcolor(2);
line(midx,midy-50,midx+42,midy+28);
setcolor(3);
line(midx+42,midy+28,midx-42,midy+28);
setcolor(4);
line(midx-42,midy+28,midx,midy-50);
setcolor(5);
line(midx,midy+50,midx-42,midy-27);
setcolor(6);
line(midx-42,midy-27,midx+42,midy-27);
setcolor(7);
line(midx+42,midy-27,midx,midy+50);
//end line for star
//circle for the queen zone
{
setcolor(RED);
circle(midx,midy,7);
}
//fill circle for the hole
{
setfillstyle(7,3);
fillellipse(midx-185,midy-185,13,13);
fillellipse(midx-185,midy+185,13,13);
fillellipse(midx+185,midy-185,13,13);
fillellipse(midx+185,midy+185,13,13);
}
/*circle hole*/
setcolor(RED);
circle(midx-185,midy-185,14);
circle(midx-185,midy+185,14);
circle(midx+185,midy-185,14);
circle(midx+185,midy+185,14);
//line in arc
setlinestyle(1, 1,2);
setcolor(56);
line(midx-60,midy-60,midx-160,midy-160)   ;
line(midx-160,midy+160,midx-60,midy+60) ;
line(midx+60,midy-60,midx+160,midy-160) ;
line(midx+60,midy+60,midx+160,midy+160);
//circle in between to striker point
setlinestyle(0, 1, 1);
setcolor(4);
{
circle(midx-140,midy-140,4);
circle(midx-140,midy+140,4);
circle(midx+140,midy-140,4);
circle(midx+140,midy+140,4);
}

// line for the striker point
setlinestyle(1, 1, 3);
setcolor(56);
{//stricker lines
 j=0;
line(midx-134+2*j,midy-156+j,midx+134-2*j,midy-156+j);
line(midx-136,midy-140,midx+136,midy-140);

line(midx-134+2*j,midy+156-j,midx+134-2*j,midy+156-j);
line(midx+136,midy+140,midx-136,midy+140);

line(midx+156-j,midy+134-2*j,midx+156-j,midy-134+2*j);
line(midx+140,midy+136,midx+140,midy-136);

line(midx-156+j,midy-134+2*j,midx-156+j,midy+134-2*j);
line(midx-140,midy-136,midx-140,midy+136);
j=2;
line(midx-134+2*j,midy-156+j,midx+134-2*j,midy-156+j);
line(midx-136,midy-140,midx+136,midy-140);

line(midx-134+2*j,midy+156-j,midx+134-2*j,midy+156-j);
line(midx+136,midy+140,midx-136,midy+140);

line(midx+156-j,midy+134-2*j,midx+156-j,midy-134+2*j);
line(midx+140,midy+136,midx+140,midy-136);

line(midx-156+j,midy-134+2*j,midx-156+j,midy+134-2*j);
line(midx-140,midy-136,midx-140,midy+136);

}
setlinestyle(0, 1, 1);
setcolor(RED);
{
circle(midx-148,midy-132,8); //sticker point circle
circle(midx-148,midy+132,8);
circle(midx+148,midy-132,8);
circle(midx+148,midy+132,8);
circle(midx-132,midy-148,8);
circle(midx-132,midy+148,8);
circle(midx+132,midy-148,8);
circle(midx+132,midy+148,8);
}

//striker point to fill circle
setcolor(4);
{
setfillstyle(1,4);
fillellipse(midx-148,midy-132,5,5);
fillellipse(midx-148,midy+132,5,5);
fillellipse(midx+148,midy-132,5,5);
fillellipse(midx+148,midy+132,5,5);
fillellipse(midx-132,midy-148,5,5);
fillellipse(midx-132,midy+148,5,5);
fillellipse(midx+132,midy-148,5,5);
fillellipse(midx+132,midy+148,5,5);
}					       //	arc
setlinestyle(1, 1, 1);
setcolor(56);
arc(midx+60+10, midy-60-10,90,0, 14);
arc(midx+60+10, midy+60+10,0,270, 14);
arc(midx-60-10, midy-60-10,180,90, 14);
arc(midx-60-10, midy+60+10,270,180, 14);
}
move_1() 						//MOVE_1() first shot
{
  int d,b;
clearviewport();
midx = getmaxx() / 2;
midy = getmaxy() / 2;

left = getmaxx() / 2 - 200;
top = getmaxy() / 2 - 200;
right = getmaxx() / 2 + 200;
bottom = getmaxy() / 2 + 200;
setcolor(4);
setfillstyle(1,4);
fillellipse(midx,midy,7,7);

setcolor(15);
setfillstyle(1,15);
fillellipse(midx,midy-14,7,7);//white
fillellipse(midx+14,midy+7,7,7);//w
fillellipse(midx-14,midy+7,7,7);//w

setcolor(13);
setfillstyle(1,13);
fillellipse(midx,midy+14,7,7);//b
fillellipse(midx+14,midy-7,7,7);//b
fillellipse(midx-14,midy-7,7,7);//b
setcolor(14);
setfillstyle(1,14);
fillellipse(midx,midy+147,10,10);
for(d=0;d<115;d=d+2)
{
carrom();
setcolor(14);
setfillstyle(1,14);
fillellipse(midx,midy+147-d,10,10);
delay(15);
setcolor(9);
setfillstyle(1,9);
fillellipse(midx,midy+147-d,10,10);
setcolor(4);
setfillstyle(1,4);
fillellipse(midx,midy,7,7);
setcolor(15);
setfillstyle(1,15);
fillellipse(midx,midy-14,7,7);//white
fillellipse(midx+14,midy+7,7,7);//w
fillellipse(midx-14,midy+7,7,7);//w
setcolor(13);
setfillstyle(1,13);
fillellipse(midx,midy+14,7,7);//b
fillellipse(midx+14,midy-7,7,7);//b
fillellipse(midx-14,midy-7,7,7);//b
delay(00);
}
setcolor(14);
setfillstyle(1,14);
fillellipse(midx,midy+147-115,10,10);
setcolor(9);
setfillstyle(1,9);
fillellipse(midx,midy+147-115,10,10);

for(d=0;d<50;d=d+2)
{
carrom();
setcolor(14);
setfillstyle(1,14);
fillellipse(midx+5,midy+147-110,10,10);
setcolor(15);
setfillstyle(1,15);
fillellipse(midx,midy-14-d,7,7);//white
delay(15);
setcolor(9);
setfillstyle(1,9);
fillellipse(midx,midy-14-d,7,7);//white
setcolor(4);
setfillstyle(1,4);
fillellipse(midx-d,midy-d,7,7);
delay(15);
setcolor(9);
setfillstyle(1,9);
fillellipse(midx-d,midy-d,7,7);

setcolor(15);
setfillstyle(1,15);
fillellipse(midx+14+d,midy+7+d,7,7);//w
fillellipse(midx-14-d,midy+7+d,7,7);//w
delay(15);
setcolor(9);
setfillstyle(1,9);
fillellipse(midx+14+d,midy+7+d,7,7);//w
fillellipse(midx-14-d,midy+7+d,7,7);//w

setcolor(13);
setfillstyle(1,13);
fillellipse(midx+d,midy+14-d,7,7);//b

fillellipse(midx+14+d,midy-7,7,7);//b
fillellipse(midx-14-d,midy-7,7,7);//b
delay(15);
setcolor(9);
setfillstyle(1,9);
fillellipse(midx+d,midy+14-d,7,7);//b

fillellipse(midx+14+d,midy-7,7,7);//b
fillellipse(midx-14-d,midy-7,7,7);//b

delay(0);

}
for(b=0;b<140;b=b+2)
{
carrom();
setcolor(14);
setfillstyle(1,14);
fillellipse(midx+5,midy+147-110,10,10);
setcolor(15);
setfillstyle(1,15);
fillellipse(midx,midy-14-d,7,7);//white
setcolor(4);
setfillstyle(1,4);
fillellipse(midx-d,midy-d,7,7);
setcolor(15);
setfillstyle(1,15);
fillellipse(midx+14+d,midy+7+d,7,7);//w
fillellipse(midx-14-d,midy+7+d,7,7);//w
delay(15);
setcolor(13);
setfillstyle(1,13);
fillellipse(midx+d+b,midy+14-d-1.05*b,7,7);//b
fillellipse(midx+14+d,midy-7,7,7);//b
fillellipse(midx-14-d,midy-7,7,7);//b
delay(15);
setcolor(9);
setfillstyle(1,9);
fillellipse(midx+d+b,midy+14-d-1.05*b,7,7);//b
delay(00);
//clearviewport();
}
setcolor(13);
setfillstyle(1,13);
fillellipse(midx+d+b,midy+14-d-1.05*b,7,7);//b

}


void bomby_2()					//	bomby_2()
{
 int d,b;
midx = getmaxx() / 2;
midy = getmaxy() / 2;

left = getmaxx() / 2 - 200;
top = getmaxy() / 2 - 200;
right = getmaxx() / 2 + 200;
bottom = getmaxy() / 2 + 200;
carrom();
//setcolor(9);

setfillstyle(1,4);
fillellipse(left+13,midy+163,7,7);
setfillstyle(1,14);
fillellipse(midx-130,midy+147,10,10);
setfillstyle(1,9);
fillellipse(midx-130,midy+147,10,10);
for(d=0;d<62;d=d+2)
{
carrom();
setcolor(9);
setfillstyle(1,14);
fillellipse(midx-130-d,midy+147,10,10);
delay(10);
setfillstyle(1,9);
fillellipse(midx-130-d,midy+147,10,10);
setcolor(4);
setfillstyle(1,4);
fillellipse(left+13,midy+163,7,7);
delay(10);
}
carrom();
setcolor(4);
setfillstyle(1,4);
fillellipse(left+13,midy+163,7,7);
for(d=0;d<22;d=d+2)
{
carrom();
setcolor(14);
setfillstyle(1,14);
fillellipse(midx-185+d,midy+147,10,10);
delay(10);
setcolor(9);
setfillstyle(1,9);
fillellipse(midx-185+d,midy+147,10,10);


setcolor(4);
setfillstyle(1,4);
fillellipse(left+13,midy+163+d,7,7);
delay(10);
setcolor(9);
setfillstyle(1,9);
fillellipse(left+13,midy+163+d,7,7);

delay(00);
//clearviewport();
//carrom();
}
setcolor(14);
setfillstyle(1,14);
fillellipse(midx-185+d,midy+147,10,10);

setcolor(9);
setfillstyle(1,9);
fillellipse(left+13,midy+163+d,7,7);
clearviewport();
}
void move_3()                                          //move_3() queen
{
 int d,b;
midx = getmaxx() / 2;
midy = getmaxy() / 2;

left = getmaxx() / 2 - 200;
top = getmaxy() / 2 - 200;
right = getmaxx() / 2 + 200;
bottom = getmaxy() / 2 + 200;
carrom();
setcolor(4);
setfillstyle(1,4);
fillellipse(midx,midy,7,7);
setfillstyle(1,14);
fillellipse(right-70,midy+147,10,10);
for(d=0;d<131;d=d+2)
{
carrom();
setfillstyle(1,14);
fillellipse(right-70-d,midy+147-d,10,10);
delay(50);
setcolor(9);
setfillstyle(1,9);
fillellipse(right-70-d,midy+147-d,10,10);
setcolor(9);
setfillstyle(1,4);
fillellipse(midx,midy,7,7);
delay(10);
//clearviewport();
}

for(d=0;d<185;d=d+2)
{
carrom();
setcolor(9);
setfillstyle(1,4);
fillellipse(midx-d,midy-d,7,7);
delay(10);

setcolor(9);
setfillstyle(1,9);
fillellipse(midx-d,midy-d,7,7);

setfillstyle(1,14);
fillellipse(midx-7,midy+5,10,10);
delay(10);
}
setcolor(9);
setfillstyle(1,4);
fillellipse(midx-d,midy-d,7,7);

setfillstyle(1,14);
fillellipse(midx-7,midy+5,10,10);
clearviewport();
}
move_4()
{                                                        //move_4()  angle

int d,b;
midx = getmaxx() / 2;
midy = getmaxy() / 2;

left = getmaxx() / 2 - 200;
top = getmaxy() / 2 - 200;
right = getmaxx() / 2 + 200;
bottom = getmaxy() / 2 + 200;

for(d=0;d<260;d=d+2)
{
carrom()   ;
setfillstyle(1,13);
fillellipse(midx+110,midy-130,7,7);    //coin
setfillstyle(1,14);
fillellipse(midx+100,midy+147-d,10,10); //striker
delay(10);
setcolor(9) ;
setfillstyle(1,9);
fillellipse(midx+100,midy+147-d,10,10); //striker
}
for(b=0,d=0;b<72,d<80;b=b+2,d=d+2)
{
carrom();
setfillstyle(1,14);
fillellipse(midx+97,midy-113,10,10); //striker
setfillstyle(1,13);
fillellipse(midx+110+b,midy-130-0.7*d,7,7);    //coin
delay(10);
setcolor(9);
setfillstyle(1,9);
fillellipse(midx+110+b,midy-130-0.7*d,7,7);    //coin
delay(00);

//carrom();
//clearviewport();
}
setfillstyle(1,13);
fillellipse(midx+110+b,midy-130-0.7*d,7,7);    //coin

}
void reverse()						//reverse()
{
 int d,b;
midx = getmaxx() / 2;
midy = getmaxy() / 2;

left = getmaxx() / 2 - 200;
top = getmaxy() / 2 - 200;
right = getmaxx() / 2 + 200;
bottom = getmaxy() / 2 + 200;
//carrom();
setcolor(13);

setfillstyle(1,13);
fillellipse(midx+175,midy+135,7,7);
setfillstyle(1,14);
fillellipse(midx+130,midy+147,9,9);
for(d=0;d<333;d=d+2)
{
carrom();
setcolor(14);
setfillstyle(1,14);
fillellipse(midx+130+(0.07*d),midy+147-d,9,9);
delay(10);
setcolor(9);
setfillstyle(1,0);
fillellipse(midx+130+(0.07*d),midy+147-d,9,9);
setcolor(13);
setfillstyle(1,13);
fillellipse(midx+175,midy+135,7,7);
delay(00);
}
setfillstyle(1,14);
fillellipse(midx+130+(0.07*d),midy+143-d,9,9);
setcolor(13);
setfillstyle(1,13);
fillellipse(midx+175,midy+135,7,7);

for(d=0;d<317;d=d+2)
{
carrom();
setcolor(14);
setfillstyle(1,14);
fillellipse(472+(0.069*d),47+d,9,9);
delay(10);
setcolor(9);
setfillstyle(1,9);
fillellipse(472+(0.069*d),47+d,9,9);
setcolor(13);
setfillstyle(1,13);
fillellipse(midx+175,midy+135,7,7);
delay(00);
}
for(d=0;d<55;d=d+2)
{
carrom();
setcolor(14);
setfillstyle(1,14);
fillellipse(494,364,9,9);
setcolor(13);
setfillstyle(1,13);
fillellipse(midx+175+(0.15*d),midy+135+d,7,7);
delay(10);
setcolor(9);
setfillstyle(1,9);
fillellipse(midx+175+(0.15*d),midy+135+d,7,7);

delay(00);
}
setcolor(13);
setfillstyle(1,13);
fillellipse(midx+175+(0.15*d),midy+135+d,7,7);

setfillstyle(1,14);
fillellipse(494,364,9,9);
clearviewport();
}
 over()
{
clearviewport();
setcolor(14);
outtextxy(150,150,"THANK YOU");
settextstyle(7,0,4);
setcolor(15);
outtextxy(50,340,"Made By :- ");
setcolor(6);
outtextxy(100,340,"        1.VIVEK KHASAWAT ");

//getch();
}


void main()						//main()

{
int gdriver = DETECT, gmode, errorcode,ch,d;
int i,midx,midy,left, top, right, bottom,j;
char a,c,v;
initgraph(&gdriver, &gmode, "..//bgi");
clearviewport();

start();
xyz:
clearviewport();
setbkcolor(0);
settextstyle(3,0,3);
setcolor(4);
outtextxy(50,00,"\n 'Choose a shot to see'=");
settextstyle(10,0,4);
setcolor(3);
outtextxy(100,100,"(1)	Starting shot");
setcolor(4);
outtextxy(100,150,"(2)	Bombay shot");
setcolor(13);
outtextxy(100,200,"(3)	Reverse shot");
setcolor(8);
outtextxy(100,250,"(4)	Queen shot");
setcolor(10);
outtextxy(100,300,"(5)	Angle shot ");
setcolor(15);
outtextxy(100,350,"(Q) 	Exit");

c=getch();
switch(c)
{
case '1':
cleardevice();
move_1();
break;
case '2':
cleardevice();
bomby_2();
break;
case '3':
cleardevice();
reverse();
break;
case '4':
cleardevice();
move_3();
break;
case '5':
cleardevice();
move_4();
break;
case 'q':
over();
delay(1000);
exit(30);
}
goto  xyz;
getch();
closegraph();
}
