static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4,
VAR5 *VAR6)
{
size_t	VAR7 = 0;
VAR3	*VAR8 = VAR4;


if (!VAR2) {
if (!VAR4)

return (int) 12 + (VAR6->VAR9 >> 3);
*VAR8++ = 0x06;			
*VAR8++ = 0x01; 			
*VAR8++ = 0x01;
*VAR8++ = 0x10;			
*VAR8++ = (VAR6->VAR9 >> 3) & 0xff;
*VAR8++ = 0x13;			
*VAR8++ = 0x04;
*VAR8 = (VAR3) VAR6->VAR10;	
} else {

size_t	VAR11 = VAR2->VAR12.VAR13  & 0xff,
VAR14 = VAR2->VAR15.VAR13 & 0xff;

if (!VAR4)
return (int) 8 + VAR11 + VAR14 + 1;

*VAR8++ = 0x06;			
*VAR8++ = 0x01; 			
*VAR8++ = 0x01;
*VAR8++ = 0x10;			
*VAR8++ = VAR11;
*VAR8++ = 0x13;			
*VAR8++ = VAR14 + 1;
*VAR8++ = (VAR3) VAR6->VAR10;	

for (VAR7 = VAR11; VAR7 != 0; VAR7--)
*VAR8++ = VAR2->VAR12.VAR16[VAR7 - 1];

for (VAR7 = VAR14; VAR7 != 0; VAR7--)
*VAR8++ = VAR2->VAR15.VAR16[VAR7 - 1];
*VAR8 = 0x00;
}
return VAR17;
}