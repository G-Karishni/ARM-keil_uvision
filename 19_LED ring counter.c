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
#include<lpc214x.h>
unsigned int i;
void main()
{
	PINSEL2=0X00000000;   //configure as GPIO
	IO1DIR = 0X000F0000;  //setting Pin 19,18,17,16 as output pins

	while(1)
	{
		IO1SET = 0X00010000;     //setting Pin 16 (ON)
		for(i=0;i<500000;i++);
		IO1CLR = 0X00010000;    //clearing Pin 16 (OFF)
		IO1SET = 0X00020000;    //setting Pin 17 (ON)
		for(i=0;i<500000;i++);
		IO1CLR = 0X00020000;    //clearing Pin 17 (OFF)
		IO1SET = 0X00040000;    //setting Pin 18 (ON)
		for(i=0;i<500000;i++);
		IO1CLR = 0X00040000;    //clearing Pin 18 (OFF)
		IO1SET = 0X00080000;    //setting Pin 19 (ON)
		for(i=0;i<500000;i++);
		IO1CLR = 0X00080000;    //clearing Pin 19 (OFF)

	}
}


