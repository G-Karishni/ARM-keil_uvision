#include <lpc214x.h> 

#define LED1_ON() IO1SET=(1<<16)    //functions-setting output pin (ON)
#define LED2_ON() IO1SET=(1<<17)
#define LED3_ON() IO1SET=(1<<18)
#define LED4_ON() IO1SET=(1<<19)

#define LED1_OFF() IO1CLR=(1<<16)   //functions-clearing output pin (OFF)
#define LED2_OFF() IO1CLR=(1<<17)
#define LED3_OFF() IO1CLR=(1<<18)
#define LED4_OFF() IO1CLR=(1<<19)

#define SW1 (IO0PIN & 0x00008000)  //if switch 1 is pressed then Pin 15 blinks
#define SW2 (IO0PIN & 0x00002000)  //if switch 2 is pressed then Pin 13 blinks
#define SW3 (IO0PIN & 0x00001000)  //if switch 3 is pressed then Pin 12 blinks
#define SW4 (IO0PIN & 0x40000000)  //if switch 4 is pressed then Pin 30 blinks
 
int main(void)
{ 
   PINSEL0 = 0x00000000;  //configure as GPIO
   PINSEL1 = 0x00000000;
   PINSEL2 = 0x00000000;

   IO0DIR = (0<<12) | (0<<13) | (0<<15) | (0<<30); //setting Pin 12,13,15,30 as input
   IO1DIR = (1<<19) | (1<<18) | (1<<17) | (1<<16); //setting Pin 19,18,17,16 as output

while(1)
{ 
   if(!SW1) {LED1_ON();} 
   else {LED1_OFF();} 
 
   if(!SW2) {LED2_ON();} 
   else {LED2_OFF();} 

   if(!SW3) {LED3_ON();} 
   else {LED3_OFF();} 

   if(!SW4) {LED4_ON();} 
   else {LED4_OFF();} 
}
}
