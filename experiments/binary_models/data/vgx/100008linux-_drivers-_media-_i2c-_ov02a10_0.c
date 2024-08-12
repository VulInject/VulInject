static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR7 = FUN2(VAR2);
struct VAR8 *VAR9 = &VAR6->VAR10;
struct VAR8 *VAR11;
int VAR12 = 0;

FUN3(&VAR7->mutex);

if (VAR7->VAR13 && VAR6->VAR14 == VAR15) {
VAR12 = -VAR16;
goto VAR17;
}


VAR9->VAR18 = VAR7->VAR6.VAR18;
FUN4(VAR7->VAR19, VAR9);

if (VAR6->VAR14 == VAR20)
VAR11 = FUN5(VAR2, VAR4, 0);
else
VAR11 = &VAR7->VAR6;

*VAR11 = *VAR9;

VAR17:
FUN6(&VAR7->mutex);
return VAR12;
}