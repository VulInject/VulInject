int
FUN1(struct VAR1 *VAR2, void *VAR3, int VAR4, VAR5 *VAR6,
int VAR7)
{
VAR8 *VAR9 = VAR3;
uint8_t VAR10;
size_t VAR11;
int VAR12, VAR13, VAR14;

FUN2(("", VAR2->VAR15.VAR16, VAR17, VAR4));

VAR11 = 0;
while (VAR4 > 0) {
if ((VAR12 = FUN3(VAR2,
VAR18 | VAR19, VAR20)))
return VAR12;

VAR14 = FUN4(VAR2);
VAR13 = FUN5(VAR4, VAR14);

for (; VAR13--; VAR4--) {
VAR10 = FUN6(VAR2->VAR21, VAR2->VAR22, VAR23);
FUN2(("", VAR10));
*VAR9++ = VAR10;
VAR11++;
}

if ((VAR7 & VAR24) == 0 && VAR11 >= 6)
break;
}

FUN2((""));

if (VAR6)
*VAR6 = VAR11;

return 0;
}