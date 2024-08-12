static unsigned char *FUN1(struct VAR1
*VAR2,
unsigned char *VAR3,
unsigned char *VAR4)
{
unsigned int VAR5, VAR6;
int VAR7 = 0, VAR8 = 0, VAR9 = 0, VAR10 = 0;

if (!VAR3)
return NULL;

while ((char *)VAR3 < (char *)VAR4) {


if (VAR3[0] & VAR11) {	
VAR5 = (VAR3[2] << 8) | VAR3[1];
VAR6 = VAR3[0];
} else {	
VAR5 = VAR3[0] & 0x07;
VAR6 = ((VAR3[0] >> 3) & 0x0f);
}

switch (VAR6) {

case VAR12:
if (VAR5 != 9)
goto VAR13;
FUN2(VAR2, VAR3,
FUN3(VAR2, VAR14, VAR10));
VAR10++;
break;

case VAR15:
if (VAR5 != 17)
goto VAR13;
FUN4(VAR2, VAR3,
FUN3(VAR2, VAR14, VAR10));
VAR10++;
break;

case VAR16:
if (VAR5 != 9)
goto VAR13;
FUN5(VAR2, VAR3,
FUN3(VAR2, VAR14, VAR10));
VAR10++;
break;

case VAR17:
if (VAR5 < 2 || VAR5 > 3)
goto VAR13;
FUN6(VAR2, VAR3,
FUN3(VAR2, VAR18, VAR8));
VAR8++;
break;

case VAR19:
if (VAR5 != 2)
goto VAR13;
FUN7(VAR2, VAR3,
FUN3(VAR2, VAR20, VAR9));
VAR9++;
break;

case VAR21:
if (VAR5 != 7)
goto VAR13;
FUN8(VAR2, VAR3,
FUN3(VAR2, VAR22, VAR7));
VAR7++;
break;

case VAR23:

break;

case VAR24:
if (VAR5 != 3)
goto VAR13;
FUN9(VAR2, VAR3,
FUN3(VAR2, VAR22, VAR7));
VAR7++;
break;

case VAR25:
VAR3 = VAR3 + 2;
return (unsigned char *)VAR3;
break;

default:	
VAR13:
FUN10(&VAR2->VAR2, "",
VAR6, VAR5);
break;
}


if (VAR3[0] & VAR11)
VAR3 += VAR5 + 3;
else
VAR3 += VAR5 + 1;
}

FUN10(&VAR2->VAR2, "");

return NULL;
}