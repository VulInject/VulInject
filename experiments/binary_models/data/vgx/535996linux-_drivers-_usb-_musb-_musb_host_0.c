static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3, int VAR4)
{
struct VAR5		*VAR5 = FUN2(VAR2);
struct VAR6		*VAR7;
unsigned long		VAR8;
int			VAR9  = FUN3(VAR3->VAR10);
int			VAR11;

FUN4(VAR5, VAR3);

FUN5(&VAR5->VAR12, VAR8);
VAR11 = FUN6(VAR2, VAR3, VAR4);
if (VAR11)
goto VAR13;

VAR7 = VAR3->VAR14;
if (!VAR7)
goto VAR13;


if (!VAR7->VAR15
|| VAR3->VAR16.VAR17 != &VAR7->VAR18->VAR16
|| FUN7(VAR7->VAR19, VAR9) != VAR7) {
int	VAR20 = VAR7->VAR15;

VAR7->VAR15 = 0;
FUN8(VAR5, VAR3, 0);
VAR7->VAR15 = VAR20;


if (VAR20 && FUN9(&VAR7->VAR18->VAR16)) {
VAR7->VAR18->VAR14 = NULL;
FUN10(&VAR7->VAR21);
FUN11(VAR7);
}
} else
VAR11 = FUN12(VAR3, VAR7);
VAR13:
FUN13(&VAR5->VAR12, VAR8);
return VAR11;
}