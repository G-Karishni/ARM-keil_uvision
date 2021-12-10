//LED seven segment display interfacing with LPC2148

#include <lpc21xx.h>

void main(void)
{
   unsigned char seg[16] =[0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10,0x08,0x03,0x46,0x21,0x06,0x0e];
   unsigned char seg_val, seg val1;
   unsigned char count,count1;
   unsigned long int var,var1;
   unsigned long int k;
   PINSEL0= 0X00000000;            // Select Port 0 pins as GPIO lines
   PINSEL1= 0X00000000;	           // Select Port 1 pins as GPIO lines
   IODIR0 = 0X00FF0000:	           //Configure the required pins of Port 0 as output pins
   IODIR1 = 0X00FF0000;	           // Configure the required pins of Port 1 as output pins
   
   for (count=0; count=15; count++) //COUNT FOR MSB
  {
     IOCLR1 = var;
     seg_val= seg[count];
     var = seg_val;
     var = var<<16;
     IOSET1 = var;

     for(count1=0,count1<=15;count1++)
	 {
       IOCLR0=varl;
       seg_val1=seg[countl];
       var1=seg_val1;
       var1=var1<<16;
       IOSET0=varl;
       for(k=0; k<50000; k++);
	   }
		   }
               }                  //End for loop
