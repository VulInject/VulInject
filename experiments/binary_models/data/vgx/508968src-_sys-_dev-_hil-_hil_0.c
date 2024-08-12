void
FUN1(struct VAR1 *VAR2, u_int8_t VAR3, u_int8_t VAR4)
{
struct VAR5 *VAR6;

switch ((VAR3 >> VAR7) & VAR8) {
case VAR9:
if (VAR4 & VAR10) {
VAR2->VAR11 = 1;
switch (VAR4) {
case VAR12:
VAR2->VAR13 = VAR14;
break;
case VAR15:
VAR2->VAR13 = VAR16;
break;
}
break;
}
if (VAR4 & VAR17) {
if (VAR4 & VAR18) {	
VAR6 = VAR2->VAR19[VAR2->VAR20];
if (VAR6 != NULL && VAR6->VAR21 != NULL)
VAR6->FUN2(VAR6,
VAR2->VAR22 - VAR2->VAR23,
VAR2->VAR23);
} else {		
VAR2->VAR24 = 1;
}
VAR2->VAR20 = 0;
} else {
if (VAR4 & VAR18) {	
VAR2->VAR20 = (VAR4 & VAR25);
VAR2->VAR22 = VAR2->VAR23;
} else {		
if (VAR2->VAR26 == (VAR4 & VAR25)) {
VAR2->VAR27 = VAR2->VAR28;
VAR2->VAR20 = 0;
}
}
}
break;
case VAR29:
if (VAR2->VAR20 != 0)	
*VAR2->VAR22++ = VAR4;
else {
if (VAR2->VAR26 != 0) {  
if (VAR2->VAR24) {
VAR2->VAR11 = 1;
VAR2->VAR24 = 0;
} else  
*VAR2->VAR27++ = VAR4;
}
}
break;
}
}