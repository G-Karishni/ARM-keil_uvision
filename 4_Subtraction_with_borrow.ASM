        //subtraction with borrow of 9 and 2
        AREA program,CODE,READONLY
	ENTRY
	MOV R0, #0x09 
	MOV R1, R0    
	MOV R2, #0x02 
	MOV R3, #0    
	MVN R4,R3     
	SUBS R1,R1,R2 
	BPL L2
	ADD R3,R3,#1
	EOR R1,R1,R4
	ADD R1,R1,#1
L2
L1      B L1
        END


