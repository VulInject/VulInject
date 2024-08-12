static VAR1
FUN1(void *VAR2, char **VAR3, VAR1 *VAR4,
char **VAR5, VAR1 *VAR6, int *VAR7)
{
uchar_t	VAR8;
size_t		VAR9 = 0;
uint_t		VAR10;
ushort_t	VAR11;
ushort_t	VAR12;

VAR13	*VAR14;
size_t		VAR15;
char		*VAR16;
size_t		VAR17;
size_t		VAR18;

size_t		VAR19 = ((VAR20)VAR2)->VAR19;

if ((VAR3 == NULL) || (*VAR3 == NULL)) {
return (0);
}

VAR14 = (VAR13 *)*VAR3;
VAR15 = *VAR4;
VAR16 = *VAR5;
VAR17 = *VAR6;

FUN2(VAR14, VAR15);

while (VAR15 != 0) {
FUN3(&VAR10, 0);

if (VAR10 > 0xffff) {

FUN4(VAR21);
VAR9++;
goto VAR22;
}

FUN5(VAR19, VAR11, VAR10);
if (VAR11 == VAR23) {
VAR11 = FUN6((VAR24)VAR10);
}
if (VAR11 == VAR23) {
FUN4(VAR21);
VAR9++;
goto VAR22;
}

switch (VAR11 & 0x8080) {
case 0x0000:	
if (FUN7((VAR13)VAR11)) {
FUN4(VAR21);
VAR9++;
} else {
VAR8 = (VAR13)VAR11;
FUN4(VAR8);
}
break;
case 0x8080:	
VAR8 = (VAR24)((VAR11 >> 8) & VAR25);
FUN4(VAR26[VAR8]);

VAR8 = (VAR13)((VAR11 & VAR25)
+ (((VAR8 % 2) == 0) ? 0x80 : 0x00));
FUN4(VAR27[VAR8]);
break;
case 0x0080:	
VAR8 = (VAR13)VAR11;
FUN4(VAR8);
break;
case 0x8000:	
VAR8 = (VAR24)((VAR11 >> 8) & VAR25);
if (VAR11 == 0xa271) {

FUN4(0x87);
FUN4(0x82);
} else if (VAR8 < 0x75) { 
VAR12 = FUN8(VAR11 & 0x7f7f);
if (VAR12 == 0xffff) {
FUN4(VAR21);
} else {

if (VAR12 > 0xff) {
FUN4(
(VAR12 >> 8) & 0xff);
FUN4(VAR12 & 0xff);
} else {
FUN4(VAR12 & 0xff);
}
}
} else {
FUN4(VAR28[VAR8]);

VAR8 = (VAR24)((VAR11 & VAR25)
+ (((VAR8 % 2) == 0) ? 0x80 : 0x00));
FUN4(VAR27[VAR8]);
}
break;
}

VAR22:

*VAR3 = (char *)VAR14;
*VAR4 = VAR15;
*VAR5 = VAR16;
*VAR6 = VAR17;
}

VAR29:
return (VAR9);
}