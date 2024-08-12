static struct VAR1 *
FUN1(gfp_t VAR2, struct VAR1 *VAR3,
struct VAR4 *VAR5,
unsigned int VAR6, unsigned int VAR7,
unsigned int VAR8, unsigned int VAR9)
{
struct VAR1 *VAR10 = NULL;


if (!FUN2(VAR2) && !FUN3()) {
struct VAR11 *VAR12;


VAR10 = FUN4(VAR13,
VAR2 | VAR14);
if (VAR10)
goto VAR15;


VAR12 = FUN5(&VAR16);
if (VAR12->VAR17) {
VAR10 = VAR12->VAR18;
VAR12->VAR18 = VAR10->VAR3;
VAR12->VAR17--;
}

FUN6(VAR10);
goto VAR15;
}
VAR10 = FUN4(VAR13, VAR2);
VAR15:
FUN7(FUN8(VAR10));
if (VAR10) {
VAR10->VAR6 = VAR6;
VAR10->VAR7 = VAR7;
VAR10->VAR8 = VAR8;
VAR10->VAR9 = VAR9;
VAR10->VAR3 = VAR3;
VAR10->VAR19 = VAR5;
}
return VAR10;
}