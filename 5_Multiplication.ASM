          //multiplication: r2 = 9*8 
          AREA PROGRAM,CODE,READONLY
	  ENTRY
	  MOV R0,#0X00
	  MOV R1,#0X09
	  MOV R2,#0X08
	  CMP R2,#0
	  BEQ L2
L         ADD R0,R0,R1
          SUB R2,R2,#1
	  CMP R2,#0
	  BNE L
L2 	  B L2
	  END



