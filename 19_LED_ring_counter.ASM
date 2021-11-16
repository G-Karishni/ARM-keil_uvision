//use startup and save file with .c

#include<lpc214x.h>
unsigned int i;
void main()
{
	PINSEL2=0X00000000;  
	IO1DIR = 0X000F0000; //Pin 19,18,17,16

	while(1)
	{
		IO1SET = 0X00010000;     //setting Pin 16
		for(i=0;i<500000;i++);
		IO1CLR = 0X00010000;     //clearing Pin 16
		IO1SET = 0X00020000;     //setting Pin 17
		for(i=0;i<500000;i++);
		IO1CLR = 0X00020000;     //clearing Pin 17
		IO1SET = 0X00040000;     //setting Pin 18
		for(i=0;i<500000;i++);
		IO1CLR = 0X00040000;     //clearing Pin 18
		IO1SET = 0X00080000;     //setting Pin 19
		for(i=0;i<500000;i++);
		IO1CLR = 0X00080000;     //clearing Pin 19

	}
}
