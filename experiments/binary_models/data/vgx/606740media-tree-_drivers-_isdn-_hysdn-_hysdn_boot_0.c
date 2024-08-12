int
FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4)
{
VAR5 *VAR6;
u_char VAR7;

if (VAR2->VAR8 & VAR9)
FUN2(VAR2, "", VAR4);

if (VAR4 < 2) {
FUN2(VAR2, "");
return (1);
}
for (VAR6 = VAR3, VAR7 = 0; VAR6 < (VAR3 + VAR4 - 2); VAR6++)
if ((VAR7 & 0x80))
VAR7 = (((VAR5) (VAR7 << 1)) + 1) + *VAR6;
else
VAR7 = ((VAR5) (VAR7 << 1)) + *VAR6;
VAR7 = ~VAR7;
if (VAR7 != *(VAR3 + VAR4 - 1)) {
FUN2(VAR2, "");
return (1);
}
VAR4--;			
while (VAR4 > 0) {

if (*VAR3 == VAR10)
return (0);	

if (VAR4 < (*(VAR3 + 1) + 2)) {
FUN2(VAR2, "", *VAR3, *(VAR3 + 1));
return (1);
}
switch (*VAR3) {
case VAR11:	
if (*(VAR3 + 1) != 1)
return (1);	
VAR2->VAR12 = *(VAR3 + 2);
break;

case VAR13:	
if (*(VAR3 + 1) != 1)
return (1);	
VAR2->VAR14 = *(VAR3 + 2);
break;

case VAR15:	
if (*(VAR3 + 1) != 6)
return (1);	
memcpy(VAR2->VAR16, VAR3 + 2, 6);
break;

default:
FUN2(VAR2, "", *VAR3, *(VAR3 + 1));
break;
}
VAR4 -= (*(VAR3 + 1) + 2);		
VAR3 += (*(VAR3 + 1) + 2);	
}

FUN2(VAR2, "");
return (1);
}