//Generate square wave at 1kHz using Timer

#include <lpc214x.h>
#include "GPIO.h"
#include "timer.h"

int main()
{
init PLL();
while(1)
{
    writepin(15,1);
	delayms(500);
	writepin(15,0);
	delayms(500);
}
}
void initPLL (void)
{
       // To generate 60MHz from 12MHz crystal 
	PLLOCFG=0X24:       // SET PSEL-2 AND MSEL-5 
	PLLOCON=0X01;       //PLL IS ACTIVE BUT NOT YET CONNECT
        PLLOFEED=0XAA;      //FEED SEQUENCE 
	PLLOFEED=0X55;
    
	while ((PLLOSTAT & 0x400)==0); 
	//WAIT FOR FEED SEQUENCE TO BE INSERTED 
	PLLOCON=0X03; // PLL HAS BEEN ACTIVE AND BEING CONNECTED 
	VPBDIV=0X01; // SET PCLK SAME AS FCCLK 
	PLLOFEED=0X55; //FEED SEQUENCE
        PLLOFEED=0XAA; //FEED SEQUENCE
}