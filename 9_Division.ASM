          //division R2-quotient R3-remainder
          AREA PROGRAM,CODE,READONLY
	  ENTRY
	  MOV R0,#0X09
	  MOV R1,#0X02
	  MOV R2,#0X00
	  MOV R3,R2
L         ADD R2,R2,#1
          SUBS R3,R3,R1
	  BPL L 
	  ADD R3,R3,R1
	  SUB R2,R2,#1 
L2 	  B L2
	  END
