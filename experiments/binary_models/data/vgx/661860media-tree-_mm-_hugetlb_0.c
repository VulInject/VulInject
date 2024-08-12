static struct VAR1 *FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
unsigned long VAR6, int VAR7,
long VAR8)
{
struct VAR1 *VAR1 = NULL;
struct VAR9 *VAR10;
VAR11 *VAR12;
struct VAR13 *VAR13;
struct VAR14 *VAR14;
struct VAR15 *VAR16;
unsigned int VAR17;


if (!FUN2(VAR5, VAR8) &&
VAR3->VAR18 - VAR3->VAR19 == 0)
goto VAR20;


if (VAR7 && VAR3->VAR18 - VAR3->VAR19 == 0)
goto VAR20;

VAR21:
VAR17 = FUN3();
VAR13 = FUN4(VAR5, VAR6,
FUN5(VAR3), &VAR10, &VAR12);

FUN6(VAR14, VAR16, VAR13,
VAR22 - 1, VAR12) {
if (FUN7(VAR14, FUN5(VAR3))) {
VAR1 = FUN8(VAR3, FUN9(VAR14));
if (VAR1) {
if (VAR7)
break;
if (!FUN2(VAR5, VAR8))
break;

FUN10(VAR1);
VAR3->VAR19--;
break;
}
}
}

FUN11(VAR10);
if (FUN12(!VAR1 && FUN13(VAR17)))
goto VAR21;
return VAR1;

VAR20:
return NULL;
}