FUN1 (struct VAR1 *VAR2, const struct VAR3 *VAR3, uint64_t VAR4, int *VAR5)
{
struct VAR6 *VAR7, *VAR8;
uint64_t VAR9, VAR10;

if (!*VAR5)
return 0;

if (FUN2(VAR2, (VAR11) VAR3)) {
VAR7 = (void *) VAR2->VAR12.VAR13->VAR14;
VAR8 = (void *) VAR7 + VAR2->VAR12.VAR13->VAR15;
} else {
VAR7 = (void *) VAR2->VAR12.VAR16->VAR14;
VAR8 = (void *) VAR7 + VAR2->VAR12.VAR16->VAR15;
}


VAR9 = ((VAR11 *) VAR4)[0];
VAR10 = ((VAR11 *) VAR4)[1];


while (VAR7->VAR17[0][0]) {
if (FUN3(VAR7) == VAR9)
goto VAR18;
if (++VAR7 >= VAR8)
FUN4();
}
*VAR7 = VAR19;
if (!FUN5(VAR2, VAR7, VAR9, VAR10)) {
*VAR5 = 0;
return 0;
}
if (FUN3(VAR7) != VAR9) {
FUN6("",
VAR20, VAR9, FUN3(VAR7));
*VAR5 = 0;
return 0;
}
VAR18:
return (VAR11) VAR7;
}