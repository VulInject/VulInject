int
FUN1(int VAR1)
{
u_char	VAR2[512];
short	VAR3;

if (read(VAR1, VAR2, 512) != 512)
return(-1);

(void)FUN2(VAR1, (VAR4) 0, VAR5);

VAR3 = (VAR6)(VAR2[VAR7+1]*256 + VAR2[VAR7]);

switch(VAR3) {
case VAR8:		
case VAR9:			
case VAR10:			
case VAR11:		
case VAR12:			
case VAR13:		
case VAR14:		
break;
default:
return(-1);
}

return(0);
}