VAR1 FUN1(void) FUN2 ((VAR2)); 
VAR1 FUN3(void) { return 0; }		
int FUN4(INT2 VAR3);				
int FUN5(INT2 VAR3) FUN2 ((VAR2)); 

typedef enum {VAR4, VAR5, VAR6} VAR7 FUN2((VAR8));

int VAR9;
int g2 FUN2 ((VAR8));
int g3 FUN2 ((VAR2));
Color VAR10;				

typedef struct {
int VAR11;
int field2 FUN2 ((VAR8));
int VAR12;
int field4 FUN2 ((VAR2));
union {
int VAR13;
int field6 FUN2 ((VAR8));
} VAR14;
int VAR15:1;
int VAR16:1 FUN2 ((VAR8));
union {
int VAR17;
int VAR18;
} u2 FUN2 ((VAR8));
} VAR19;