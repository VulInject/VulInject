static int
FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
unsigned short VAR5;
VAR6 *VAR7;
int VAR8 = 0;
rs_size_t VAR9;

if(VAR2->VAR10.VAR11.VAR12.VAR13 == VAR14)
goto VAR15;

VAR7 = FUN2(VAR4, NULL, &VAR2->VAR10.VAR11.VAR12,
&VAR9, &VAR5, NULL);


switch(VAR2->VAR10.VAR11.VAR16 ) {
case VAR17:
if(FUN3(VAR2->VAR10.VAR11.VAR18, (VAR6*) VAR7) != -1)
VAR8 = 1;
break;
case VAR19:
if(VAR9 == 0)
VAR8 = 1; 
break;
case VAR20:
if(FUN4(VAR2->VAR10.VAR11.VAR18,
VAR7, VAR9) == 0)
VAR8 = 1; 
break;
case VAR21:
if(FUN5(VAR2->VAR10.VAR11.VAR18,
VAR7, VAR9) == 0)
VAR8 = 1; 
break;
case VAR22:
if(FUN6(VAR2->VAR10.VAR11.VAR18,
(unsigned char*) VAR7, 0, &VAR2->VAR10.VAR11.VAR23) == VAR24)
VAR8 = 1;
break;
case VAR25:
if(FUN6(VAR2->VAR10.VAR11.VAR18,
(unsigned char*) VAR7, 1, &VAR2->VAR10.VAR11.VAR23) == VAR24)
VAR8 = 1;
break;
case VAR26:
default:

assert(VAR2->VAR10.VAR11.VAR16 == VAR26);
VAR8 = 1; 
break;
}


if(VAR2->VAR10.VAR11.VAR27)
VAR8 = (VAR8 == 1) ?  0 : 1;

if(VAR28) {
if(VAR2->VAR10.VAR11.VAR12.VAR13 == VAR29) {
FUN7("",
VAR2->VAR10.VAR11.VAR12.VAR30, VAR7);
} else if(VAR2->VAR10.VAR11.VAR12.VAR13 == VAR31) {
FUN7("",
VAR2->VAR10.VAR11.VAR12.VAR30, VAR7);
} else if(VAR2->VAR10.VAR11.VAR12.VAR13 == VAR32) {
FUN7("",
VAR2->VAR10.VAR11.VAR12.VAR30, VAR7);
} else {
FUN7("",
FUN8(VAR2->VAR10.VAR11.VAR12.VAR13), VAR7);
}
if(VAR2->VAR10.VAR11.VAR27)
FUN7("");
if(VAR2->VAR10.VAR11.VAR16 == VAR19) {
FUN7("",
FUN9(VAR2->VAR10.VAR11.VAR16),
VAR8 ? "" : "");
} else {
FUN7("",
FUN9(VAR2->VAR10.VAR11.VAR16),
FUN10(VAR2->VAR10.VAR11.VAR18),
VAR8 ? "" : "");
}
}


if(VAR5)
free(VAR7);
VAR15:
return VAR8;
}