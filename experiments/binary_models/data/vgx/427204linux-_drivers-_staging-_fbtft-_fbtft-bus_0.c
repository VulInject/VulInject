void FUN1(struct VAR1 *VAR2, int VAR3, ...)
{
va_list VAR4;
int VAR5, VAR6;
int VAR7 = 0;
VAR8 *VAR9 = (VAR8 *)VAR2->VAR9;

if (FUN2(VAR2->VAR10 & VAR11)) {
FUN3(VAR4, VAR3);
for (VAR5 = 0; VAR5 < VAR3; VAR5++)
*(((VAR12 *)VAR9) + VAR5) = (VAR12)FUN4(VAR4, unsigned int);
FUN5(VAR4);
FUN6(VAR11, VAR2,
VAR2->VAR13->VAR14, VAR12, VAR9, VAR3, "",
VAR15);
}
if (VAR3 <= 0)
return;

if (VAR2->VAR16 && (VAR2->VAR16->VAR17 == 8)) {

VAR7 = (VAR3 % 4) ? 4 - (VAR3 % 4) : 0;
for (VAR5 = 0; VAR5 < VAR7; VAR5++)
*VAR9++ = 0x000;
}

FUN3(VAR4, VAR3);
*VAR9++ = (VAR12)FUN4(VAR4, unsigned int);
VAR5 = VAR3 - 1;
while (VAR5--) {
*VAR9 = (VAR12)FUN4(VAR4, unsigned int);
*VAR9++ |= 0x100; 
}
FUN5(VAR4);
VAR6 = VAR2->VAR18.write(VAR2, VAR2->VAR9, (VAR3 + VAR7) * sizeof(VAR8));
if (VAR6 < 0) {
FUN7(VAR2->VAR13->VAR14,
"", VAR6);
return;
}
}