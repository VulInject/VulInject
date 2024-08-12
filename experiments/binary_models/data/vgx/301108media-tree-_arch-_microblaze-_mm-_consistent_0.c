void FUN1(void *VAR1, size_t VAR2, int VAR3)
{
unsigned long VAR4;
unsigned long VAR5;

VAR4 = (unsigned long)VAR1;


VAR4 &= ~VAR6;
VAR5 = VAR4 + VAR2;

switch (VAR3) {
case VAR7:
FUN2();
case VAR8:	
FUN3(VAR4, VAR5);
break;
case VAR9:		
FUN4(VAR4, VAR5);
break;
case VAR10:	
FUN4(VAR4, VAR5);
break;
}
}