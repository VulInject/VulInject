static int
FUN1(VAR1 *VAR2, processorid_t VAR3, VAR4 *VAR5,
int *VAR6)
{
VAR7	*VAR8;
VAR7	*VAR9;
int		VAR10 = 0;
int		VAR11;

FUN2(FUN3(&VAR12));


if (VAR2->VAR13 & VAR14) {
*VAR5 = VAR15;
*VAR6 = VAR16;
return (0);
}

FUN4(&VAR2->VAR17);
VAR8 = VAR2->VAR18;
if (VAR8 != NULL) {
VAR9 = VAR8;
do {
VAR11 = FUN5(VAR8, VAR3, VAR5, VAR6);
if (VAR10 == 0)
VAR10 = VAR11;
} while ((VAR8 = VAR8->VAR19) != VAR9);
}

FUN6(&VAR2->VAR17);
return (VAR10);
}