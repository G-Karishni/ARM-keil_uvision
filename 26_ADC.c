#include <lpc214x.h> 

Unsigned int AcquireADC ()
{
   VPBDIV =0x01://Set the Pelk to 60 Mhz
   //PINSEL1 - PINSEL1 |0x00001000;

   pinselect (0,22,1)                 //AD1.7 
   AD1CR = 0x00000000; 
   AD1CR |= (0x01 << channelnumber);  // Channel Select
   ADICR |= 13 << 8;                  // CLKDIV
   ADICR |= 0x01 << 16;               // Burst ON 
   ADICR |= 0x01 <<< 21;              // PDN - 1
   
   //Start Conversion 
   ADICR |= 0x01 << 24; 
   //Check for EOC
   while (ADIGDR & (0x01 <<31)==0);
   adcdata = ADIGDR;
   adcdata = (adedata >> 6 )& 0x000003FF; 
   return adcdata;
}