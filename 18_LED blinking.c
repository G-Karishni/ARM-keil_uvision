#include<lpc214x.h>
unsigned int i;
void main()
{
	PINSEL2=0X00000000;  //configure as GPIO
	IO1DIR = 0X000F0000; //setting Pin 19,18,17,16 as output pins

	while(1)
	{
		IO1SET = 0X00010000;   //setting Pin 16 (ON)
		for(i=0;i<500000;i++); //delay
		IO1CLR = 0X00010000;   //clearing Pin 16 (OFF)
                for(i=0;i<500000;i++); //delay
               }
}
