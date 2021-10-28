          //factorial R0!
          AREA PROGRAM,CODE,READONLY
	  ENTRY
	  MOV R0,#0X03
	  MOV R1,R0
	  MOV R2,R0
	  MOV R3,R0
L2        SUB R3, R3, #1
          MUL R2,R1,R3
	  MOV R1,R2
	  CMP R3,#1
	  BNE L2
L 	  B L
	  END
