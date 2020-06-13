#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
void main()
{

	int s,e,pr;
	char ch;
	 double lo,wo,nm;
	 double a,vo,h,c,w;
	 double p1,p2,p3,p4,p5,p6,p7;
	 printf("----------------------------------------------------------------------------------------------\n");
	 printf("----------------------------------------------------------------------------------------------\n");
	 printf("                           SUBMITTED TO : Dr. SUMAN MUKHERJEE \n");
	 printf("                           SUBMITTED BY :-   \n  ");
	  printf("   Reg No.:- 11806645  NAME : Ashwani Kumar     ROLL:  B-41     SECTION : K18PG   GROUP- 2 :\n");
	  printf("----------------------------------------------------------------------------------------------\n");
	 printf("----------------------------------------------------------------------------------------------\n");
	printf("This program is going to calculate : WORK FUNCTION and THRESHOLD FREQUECY\n ");
	printf("----------------------------------------------------------------------------------------------\n");
	printf("press any key to enter into the main program");
	//scanf("%d",&e);
	ch=getch();
	system("cls");
	printf("----------------------------------------------------------------------------------------------\n");
	case1:
	printf("\nplease select any one of the following in which units you want to give for threshold wavelength(vo)\n");
	printf("1)nano metre nm\n2)Angstrom(Ao)\n");
	printf("1)nm\n2)Ao\n");
	printf("enter 1. for nano metre(nm)\n");
	printf("enter 2. for Angstrom(Ao)\n");
	scanf("%d",&s);
	printf("............................\n");
	if(s==1)
	{
		system("cls");
		printf("\nyou have selected\n1) nano metre");
		printf("\nnow please give input of Threshold wavelength lambda\"Lo\" in nano metres(nm) Lo = ");
		scanf("%lf",&lo);
	/*	//p1=1/pow(10,34);
		p1=1e-33;
		//h=6.63*p1;
		//c=3*pow(10,8);
		c=3*1e7;
		//p2=1/pow(10,9);
		p2=1e-8;
		h=6.63;
		lo=lo*p2;
		w=(h*c)/lo;
		//p3=1/pow(10,19);
		p3=1e-18;
	//	wo=w/(1.6*p3);
		wo[100]=w/(1.6*p3);*/
		wo=1242.375/lo;
		printf("\nWork Functoin (Wo)= %.6lf ev",wo);
	//	p4=1/pow(10,19);
	//	wo[100]=(wo)*(1.6*p3);
		vo=wo*2413273;
		printf("\n\nThreshold Frequency(Vo)=%.6lf x 1e+5 Hz",vo);
	}
	else if(s==2)
	{
		system("cls");
		printf("\nyou have selected\n2) Angstrom");
		printf("\nnow please give input of Threshold wavelength lambda Lo in Angstrom(a) Lo = ");
		scanf("%lf",&lo);
	 /*	p1=1/pow(10,34);
		h=6.63*p1;
		c=3*pow(10,8);
		p5=1/pow(10,-10);
		lo=lo*p2;
		w=(h*c)/lo;
		p6=1/pow(10,19);
		wo=wo/(1.6*p6);*/
			wo=12423.75/lo;
		printf("\nWork Functoin (Wo)= %.6lf ev",wo);
		//wo=wo*(1.6*p6);
		vo=wo*2413273;
		printf("\n\nThreshold Frequency(Vo)=%.6lf x 1e+5 Hz",vo);
	}
    else{
    	printf("1)nano metre nm\n2)Angstrom(Ao)\n");
    	printf("please enter only 1 or 2");
    	goto case1;
	}
	printf("\n----------------------------------------------------------------------------------------------\n");
	printf("\n----------------------------------------------------------------------------------------------\n");
	printf("\ndo you want to continue");
	printf("\npress 1 to continue");
	printf("\nor ");
	printf("\npress 0 to stop\n");
	char p;
    scanf("%d",&p);
if(p==1)
{
		printf("............................\n");
	system("cls");
	goto case1;
}

}

