FUN1(struct VAR1 *VAR2)
{
switch(VAR2->VAR3)
{
default: fprintf(VAR4,"", VAR2->VAR3);
FUN2(VAR5, 1);
case VAR6:
return(FUN3(VAR2->VAR7.VAR8));
case VAR9:	return(FUN4(VAR2->VAR10,VAR2->VAR7.VAR8));
case VAR11: return((*VAR12)());
case VAR13:
case VAR14:	VAR15 += VAR2->VAR10;
return(1);
case VAR16: VAR15=VAR2->VAR10-VAR17 - 1;
return(1);
case VAR18: VAR15 -= VAR2->VAR10;
if(VAR15 < -VAR17)	
VAR15 = -VAR17;
return(1);
}
}