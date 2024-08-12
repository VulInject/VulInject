static int FUN1(VAR1 *VAR2, unsigned long VAR3, unsigned char **VAR4, VAR5 *VAR6)
{
int VAR7, VAR8;	

VAR8 = (int) (VAR3 >> 16);
switch (VAR8) {
case 0x21:	
case 0x22:	
case 0x23:	
case 0x24:	
case 0x25:	
case 0x26:	
case 0x27:	
case 0x28:	
case 0x29:	
case 0x2a:	
case 0x2b:	
case 0x2c:	
case 0x2d:	
case 0x2f:	
case 0x30:	
VAR7 =  VAR8 - 0x20;
break;
case 0x2e:	
VAR7 = 3;		
break;
default:
VAR2->VAR9 = VAR10 = VAR11;
return (0);
}

if ( VAR7 >= 2) {
if ( *VAR6 < 4 ){
VAR2->VAR9 = VAR10 = VAR12;
return (-1);
}

*(*VAR4)++ = (unsigned char) VAR13;
*(*VAR4)++ = (unsigned char) (VAR14 + VAR7);
(*VAR6) -= 2;
}

if ( *VAR6 < 2 ){ 
VAR2->VAR9 = VAR10 = VAR12;
return (-1);
}

*(*VAR4)++ = (unsigned char) (((VAR3 >> 8) & 0xff) | VAR15);
*(*VAR4)++ = (unsigned char) ((VAR3 & 0xff) | VAR15);
(*VAR6) -= 2;

return (0);
}