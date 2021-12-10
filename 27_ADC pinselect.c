#include <lpc214x.h> 

void pinselect(int portnumber,int pinnumber. int functionselect)
{
  if (portnumber ==0)
  {
  if (pinnumber>=0 && pinnumber<= 15 ) 
  PINSEL0 |= functionselect << (pinnumber*2);
 
  if (pinnumber>=16 && pinnumber <=31)
  PINSEL1 |= functionselect << ((pinnumber-16)*2);
  }
  else if (portnumber==1) 
  {
    if (pinnumber> 16 && pinnumber <= 31) 
	PINSEL2 |= functionselect << ((pinnumber-16)*2)	;
  }
  else
      portnumber = 3; // Dummy Write
}