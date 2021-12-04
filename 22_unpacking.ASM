//Unpacking of numbers from memory and storing in registers
//Given input: 0X40000010 - 12,0X40000011 - 34,0X40000012 - 56,0X40000013 - 78
//Output: R3 = 12, R7 = 34, R9 = 56, R11 = 78

   AREA PROGRAM,CODE,READONLY
   ENTRY
   MOV R0,#0X40000010
   LDR R1,[R0]
   MOV R2,#0XFF000000  
   AND R3,R2,R1       //R3 = 0x00000078
   LSR R4,R3,#24      //R3 = 0x78000000
   MOV R5,#0X40000020
   STRB R4,[R5]
   MOV R6,#0X00FF0000
   AND R7,R6,R1       //R7 = 0x00005600
   LSR R7,#16         //R7 = 0x56000000
   STRB R7,[R5,#1]
   MOV R8,#0X0000FF00
   AND R9,R8,R1       //R9 = 0x00340000
   LSR R9,#8          //R9 = 0x34000000
   STRB R9,[R5,#2]
   MOV R10,#0X000000FF
   AND R11,R10,R1     //R11 = 0x12
   STRB R11,[R5,#3]
L  B L
   END