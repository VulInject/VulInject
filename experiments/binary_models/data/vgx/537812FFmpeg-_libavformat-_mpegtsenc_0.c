static int FUN1(VAR1 *VAR2, VAR3 **VAR4,
VAR5 *VAR6)
{
uint8_t VAR7;
uint16_t VAR8;
VAR3 *VAR9 = *VAR4;

switch (VAR6->VAR10) {
case VAR11:
VAR7 = 0x30;
VAR8 = 0x0008;
break;
case VAR12:
VAR7 = 0x87;
VAR8 = 0x0012;
break;
default:
FUN2(VAR2, VAR13,
"",
VAR6->VAR10);
return VAR14;
}


*VAR9++ = 0x52;  
*VAR9++ = 1;     
*VAR9++ = VAR7;  


*VAR9++ = 0xFD;  
*VAR9++ = 3;     
FUN3(&VAR9, VAR8);  





*VAR9++ = 0x3D; 

*VAR4 = VAR9;

return 0;
}