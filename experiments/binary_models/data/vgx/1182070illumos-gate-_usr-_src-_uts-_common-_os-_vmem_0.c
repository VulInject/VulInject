static void
FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
VAR3 **VAR5;

VAR4->VAR6 = VAR7;
VAR5 = FUN2(VAR2, VAR4->VAR8);
VAR4->VAR9 = *VAR5;
*VAR5 = VAR4;

if (VAR10 == sizeof (VAR3)) {
VAR4->VAR11 = (VAR12)FUN3(VAR4->VAR13,
VAR14);
VAR4->VAR15 = VAR16;
VAR4->VAR17 = FUN4();
} else {
VAR4->VAR11 = 0;
}

VAR2->VAR18.VAR19.VAR20.VAR21++;
VAR2->VAR18.VAR22.VAR20.VAR21 += FUN5(VAR4);
}