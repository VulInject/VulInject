int FUN1(const struct VAR1 *VAR2, void *VAR3,
unsigned long VAR4,
unsigned long VAR5, const char *VAR6)
{
struct VAR7 *VAR8 = NULL, *VAR9 = NULL;
int VAR10, VAR11, VAR12;


if (VAR2->VAR13 == VAR14) {
VAR12 = FUN2(&VAR8);
if (VAR12)
goto VAR15;

VAR12 = FUN3(VAR3, VAR8);
if (VAR12) {
FUN4("");
goto VAR15;
}


VAR12 = FUN5(VAR3, VAR16 + 1,
VAR17.VAR18 - VAR19);
if (VAR12) {
FUN4("",
FUN6(VAR12));
goto VAR15;
}


VAR12 = FUN5(VAR3, VAR2->VAR20.VAR21,
VAR19);
if (VAR12) {
FUN4("",
FUN6(VAR12));
goto VAR15;
}
}


VAR12 =  FUN7(VAR3);
if (VAR12 < 0)
goto VAR15;

VAR12 = FUN8(VAR3, VAR22);
if (VAR12 < 0)
goto VAR15;

VAR12 = FUN8(VAR3, VAR23);
if (VAR12 < 0)
goto VAR15;


VAR12 = FUN9(&VAR9);
if (VAR12)
goto VAR15;

VAR11 = VAR9 ? VAR9->VAR11 : 0;
for (VAR10 = 0; VAR10 < VAR11; VAR10++) {
u64 VAR24, VAR25;

VAR24 = VAR9->VAR26[VAR10].VAR18;
VAR25 = VAR9->VAR26[VAR10].VAR27 - VAR24 + 1;
VAR12 = FUN5(VAR3, VAR24, VAR25);
if (VAR12) {
FUN4("",
FUN6(VAR12));
goto VAR15;
}
}


if (FUN10())
VAR12 = FUN11(VAR3);

VAR15:
FUN12(VAR9);
FUN12(VAR8);
return VAR12;
}