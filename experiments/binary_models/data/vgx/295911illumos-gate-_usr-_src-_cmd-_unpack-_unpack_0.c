int
FUN1()
{
register int VAR1, VAR2, VAR3;
int VAR4, VAR5, VAR6 = 1;
char *VAR7;

VAR8 = &VAR9[0];
VAR5 = 1;
VAR3 = 0;
while (VAR6) {
if (VAR10 <= 0) {
VAR10 = read(VAR11, VAR12 = &VAR13[0], VAR14);
if (VAR10 < 0) {
(void) fprintf(VAR15, FUN2(
""),
VAR16, VAR17);
FUN3("");
return (0);
}
}
if (--VAR10 < 0) {
VAR18:			(void) fprintf(VAR15, FUN2(
""),
VAR16, VAR17);
return (0);
}
VAR2 = *VAR12++;
VAR1 = 8;
while (--VAR1 >= 0) {
VAR3 *= 2;
if (VAR2 & 0200)
VAR3++;
VAR2 <<= 1;
if ((VAR4 = VAR3 - VAR19[VAR5]) >= 0) {
VAR7 = &VAR20[VAR5][VAR4];
if (VAR7 == VAR21) {
VAR2 = VAR8 - &VAR9[0];
if (write(VAR22, &VAR9[0], VAR2)
!= VAR2) {
VAR23:						(void) fprintf(VAR15,
FUN2(
""),
VAR16, VAR24);
FUN3("");
return (0);
}
VAR25 -= VAR2;
if (VAR25 != 0)
goto VAR18;
return (1);
}
*VAR8++ = *VAR7;
if (VAR8 == &VAR9[VAR14]) {
if (write(VAR22, VAR8 = &VAR9[0],
VAR14) != VAR14)
goto VAR23;
VAR25 -= VAR14;
}
VAR5 = 1;
VAR3 = 0;
} else
VAR5++;
}
}
return (1);	
}