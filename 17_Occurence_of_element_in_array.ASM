          AREA PROGRAM,CODE,READONLY
	  ENTRY
	  MOV R0,#0X40000000
	  MOV R1,#0X05
	  MOV R2,#0X32
	  MOV R6,#0X00
L4	  LDRB R3,[R0]
	  ADD R0,R0,#1
	  CMP R2,R3
	  BNE L3
	  ADD R6,R6,#1	  
L3	  SUBS R1,R1,#1
	  BNE L4
	  STRB R6,[R0]


L2 	  B L2
	  END
