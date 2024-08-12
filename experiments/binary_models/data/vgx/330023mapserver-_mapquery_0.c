int FUN1(VAR1 *VAR2)
{
int VAR3=-1, VAR4;


if(VAR2->VAR5.VAR6 >= 0) {
VAR3 = VAR2->VAR5.VAR7;
VAR2->VAR5.VAR7 = VAR2->VAR5.VAR6;
}

switch(VAR2->VAR5.VAR8) {
case VAR9:
VAR4 = FUN2(VAR2);
break;
case VAR10:
VAR4 = FUN3(VAR2);
break;
case VAR11:
VAR4 = FUN4(VAR2);
break;
case VAR12:
VAR4 = FUN5(VAR2);
break;
case VAR13:
VAR4 = FUN6(VAR2);
break;
default:
FUN7(VAR14, "", "");
return(VAR15);
}

if(VAR2->VAR5.VAR6 >= 0) {
VAR2->VAR5.VAR7 = VAR3; 
if(VAR4 == VAR16) VAR4 = FUN8(VAR2);
}

return VAR4;
}