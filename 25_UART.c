//PROGRAM FOR UARTO - Division latch registers

#include <lpc214x.h> 
int main(void)
{  
    PINSEL0=0X00000005;      //Configure P0.0 and P0.1 for serial communication
    U0LCR=0X83;              //Making DLAB 1 for setting Baud rate
    U0DLM=0X00;              //Setting for making Baud rate 9600
    U0DLL=0x61;              //Setting for making Baud rate 9600
    U0LCR=0X03;              //Making DLAB 0 for serial communication
    
    while(1)
    {
     
      while(!(U0LSR & 0X20));  //Checking whether Transmitter buffer is empty or not
           U0THR='A';
     }
}