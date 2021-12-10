//Toggle pin @ P0.15, Ton=1sec, Toff=0.5sec

#include <lpc214x.h>
#include "GPIO.h"
#include "timer.h"

int main()
{
while(1)
{
    writepin(15,1);
	delayms(1000);
	writepin(15,0);
	delayms(500);
}
}