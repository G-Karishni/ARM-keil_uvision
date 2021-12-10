//Stepper motor interfacing with LPC2148

#include <LPC214X.H>      // LPC2148 HEADER

void delay_ms()           // Delay function

void main()	            // Main program starts
{
  PINSEL2=0X00000000;	    //Set P1.19 TO PI.22 as GPIO
  I01DIR=0x000000F0;        // Set Port 1 as out port

  while(1)                  //Infinite Loop
  {
        I01PIN=0X00000090       //Send the codel for phase 1
    delay_ms();             //Call Delay
	I01PIN=0X00000050       //Send the code2 for phase 2
    delay_ms();             //Call Delay
	I01PIN=0X00000060       //Send the code3 for phase 3
    delay_ms();             //Call Delay
	I01PIN=0X000000A0       //Send the code4 for phase 4
    delay_ms();             //Call Delay
   }
}
void delay_ms()             // Delay function program
{
   int i,j;
   for(i=0;i<0x0a;i++)
   for(j=0:j<750;j++);
}