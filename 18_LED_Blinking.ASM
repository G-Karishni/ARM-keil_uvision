//use startup and save file with .c

#include<lpc214x.h>
unsigned int i;
void main()
{
	PINSEL2=0X00000000;  
	IO1DIR = 0X000F0000;

	while(1)
	{
		IO1SET = 0X00010000;     //setting Pin 16
		for(i=0;i<500000;i++);   //delay
		IO1CLR = 0X00010000;     //clearing Pin 16
                for(i=0;i<500000;i++);   //delay
               }
}