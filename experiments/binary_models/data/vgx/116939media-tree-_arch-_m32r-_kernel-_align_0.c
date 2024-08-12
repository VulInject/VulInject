static int FUN1(unsigned short VAR1, struct VAR2 *VAR3)
{
int VAR4 = -1;

if ((VAR1 & 0x7fff) == VAR5)	
return 0;

switch(VAR1 & 0x7000) {
case VAR6:		
VAR4 = FUN2(VAR1, VAR3);
break;
case VAR7:		
VAR4 = FUN3(VAR1, VAR3);
break;
default:
break;
}

if (!VAR4)
return 0;

switch(VAR1 & 0x70f0) {
case VAR8:		
VAR4 = FUN4(VAR1, VAR3);
break;
case VAR9:		
VAR4 = FUN5(VAR1, VAR3);
break;
case VAR10:		
VAR4 = FUN6(VAR1, VAR3);
break;
case VAR11:		
VAR4 = FUN7(VAR1, VAR3);
break;
case VAR12:		
VAR4 = FUN8(VAR1, VAR3);
break;
case VAR13:		
VAR4 = FUN9(VAR1, VAR3);
break;
case VAR14:		
VAR4 = FUN10(VAR1, VAR3);
break;
case VAR15:		
VAR4 = FUN11(VAR1, VAR3);
break;
case VAR16:		
VAR4 = FUN12(VAR1, VAR3);
break;
case VAR17:		
VAR4 = FUN13(VAR1, VAR3);
break;
case VAR18:		
VAR4 = FUN14(VAR1, VAR3);
break;
case VAR19:		
VAR4 = FUN15(VAR1, VAR3);
break;
case VAR20:		
VAR4 = FUN16(VAR1, VAR3);
break;
case VAR21:		
VAR4 = FUN17(VAR1, VAR3);
break;
case VAR22:		
VAR4 = FUN18(VAR1, VAR3);
break;
case VAR23:	
VAR4 = FUN19(VAR1, VAR3);
break;
case VAR24:	
VAR4 = FUN20(VAR1, VAR3);
break;
default:
break;
}

if (!VAR4)
return 0;

switch(VAR1 & 0x70ff) {
case VAR25:	
VAR4 = FUN21(VAR1, VAR3);
break;
case VAR26:	
VAR4 = FUN22(VAR1, VAR3);
break;
default:
break;
}

return VAR4;
}