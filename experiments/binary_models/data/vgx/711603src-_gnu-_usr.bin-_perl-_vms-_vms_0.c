int
FUN1(int VAR1, int VAR2)
{
int VAR3;
int VAR4;
int VAR5;
int VAR6;
int VAR7;


if (VAR1 & VAR8$VAR9)
VAR7 = 0;
else
VAR7 = VAR10;

VAR6 = VAR1 & ~VAR8$VAR11;

VAR3 = VAR1 & VAR8$VAR12;
VAR4 = VAR1 & VAR8$VAR13;
VAR5 = VAR1 & (VAR8$VAR14 | VAR8$VAR15);

if (((VAR3 == 0) || (VAR4 == 0))  && (VAR2 == 0)) {
switch(VAR5) {
case VAR16$VAR17:
VAR7 = 0;
break;
case VAR16$VAR18:
VAR7 = VAR19;
break;
case VAR16$VAR20:
VAR7 = VAR21;
break;
case VAR16$VAR22:
VAR7 = VAR23;
break;
case VAR16$VAR24:
case VAR16$VAR25:
case VAR16$VAR26:
case VAR16$VAR27:
case VAR16$VAR28:
case VAR16$VAR29:
case VAR16$VAR30:
case VAR16$VAR31:
case VAR16$VAR32:
case VAR16$VAR33:
VAR7 = VAR34;
break;
case VAR16$VAR35:
VAR7 = VAR36;
break;
case VAR16$VAR37:
case VAR16$VAR38:
case VAR16$VAR39:
VAR7 = VAR40;
break;
case VAR16$VAR41:
VAR7 = VAR42;
break;
case VAR16$VAR43:
VAR7 = VAR44;
break;
case VAR16$VAR45:
case VAR16$VAR46:
VAR7 = VAR47;
break;
case VAR16$VAR48:				    
case ((VAR16$VAR48 & VAR8$VAR49) | VAR8$VAR50): 
case ((VAR16$VAR48 & VAR8$VAR49) | VAR8$VAR51): 
VAR7 = VAR52;
break;
case VAR16$VAR53:
VAR7 = VAR54;
break;
case VAR16$VAR55:
VAR7 = VAR56;
break;
case VAR16$VAR57:
VAR7 = VAR58;
break;
case VAR16$VAR59:
case VAR16$VAR60:
VAR7 = VAR61;
break;
case VAR16$VAR62:
VAR7 = VAR63;
break;
default:
if ((VAR3 == 0) && (VAR5 < 8)) {

VAR7 = VAR5;
break;
}
}
}
else {

if ((VAR3 == VAR64) && ((VAR5 & 0xA000) == 0xA000))  {
VAR7 = (VAR5 & 0x07F8) >> 3;
}
else {



if (VAR2 != 0) {



if (VAR5 & VAR8$VAR65)
return 0;



if ((VAR5 & (VAR8$VAR50 | VAR8$VAR66)) == 0)
return 1;



return (VAR5 & VAR8$VAR15);
}



switch(VAR6) {

case VAR67$VAR68:	
case VAR67$VAR69:	
VAR7 = VAR47;
break;
case VAR67$VAR70:	
VAR7 = VAR61;
break;
case VAR67$VAR71:
VAR7 = VAR72;
break;
case VAR67$VAR73:
VAR7 = VAR44;
break;
case VAR67$VAR74:
case VAR67$VAR75:
case VAR67$VAR76:
VAR7 = VAR77;
break;
case VAR67$VAR78:
VAR7 = VAR79;
break;
case VAR67$VAR80:
case VAR67$VAR81:
case VAR82$VAR83:
case VAR82$VAR31:
case VAR82$VAR84:
case VAR82$VAR85:
case VAR86:
VAR7 = VAR34;
break;
case VAR87$VAR88:
case VAR67$VAR89:
case VAR87$VAR90:
case VAR87$VAR91:
VAR7 = VAR54;
break;
case VAR67$VAR92:	
case VAR67$VAR93:	
case VAR67$VAR94:	
VAR7 = VAR40;
break;
case VAR67$VAR95:  
VAR7 = VAR58;
break;

}
}
}

return VAR7;
}