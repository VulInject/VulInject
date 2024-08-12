static int
FUN1(char **VAR1, VAR2 *VAR3, VAR4 *VAR5)
{
char *VAR6 = *VAR1, *VAR7;
Lineprop VAR8 = *VAR3;
Linecolor VAR9 = *VAR5;
int VAR10;

if (*VAR6 != VAR11 || *(VAR6 + 1) != '')
return 0;
VAR6 += 2;
for (VAR7 = VAR6; FUN2(*VAR7) || *VAR7 == ''; VAR7++) ;
if (*VAR7 != '')
return 0;
*VAR1 = VAR7 + 1;
while (1) {
if (*VAR6 == '') {
VAR8 = VAR12;
VAR9 = 0;
break;
}
if (FUN2(*VAR6)) {
VAR7 = VAR6;
for (VAR6++; FUN2(*VAR6); VAR6++) ;
VAR10 = FUN3(FUN4(VAR7, VAR6 - VAR7));
switch (VAR10) {
case 0:
VAR8 = VAR12;
VAR9 = 0;
break;
case 1:
case 5:
VAR8 = VAR13;
break;
case 4:
VAR8 = VAR14;
break;
case 7:
VAR8 = VAR15;
break;
case 100:		
VAR9 = 0;
break;
case 39:
VAR9 &= 0xf0;
break;
case 49:
VAR9 &= 0x0f;
break;
default:
if (VAR10 >= 30 && VAR10 <= 37)
VAR9 = (VAR9 & 0xf0) | (VAR10 - 30) | 0x08;
else if (VAR10 >= 40 && VAR10 <= 47)
VAR9 = (VAR9 & 0x0f) | ((VAR10 - 40) << 4) | 0x80;
break;
}
if (*VAR6 == '')
break;
}
else {
VAR8 = VAR12;
VAR9 = 0;
break;
}
VAR6++;			
}
*VAR3 = VAR8;
*VAR5 = VAR9;
return 1;
}