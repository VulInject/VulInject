int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
struct VAR7 *VAR8;
int VAR9;

VAR9 = FUN2(&VAR2->VAR10);
if (VAR9 < 0)
return -VAR11;


if (!(VAR4->VAR12 & VAR13)) {
VAR9 = FUN3(VAR2, VAR4->VAR12, 0, VAR4);
if (!VAR9)
goto VAR14;
}

VAR6 = FUN4(VAR2, VAR4->VAR12, &VAR8);
if (VAR6 == NULL) {
VAR9 = -VAR15;
goto VAR14;
}


if (VAR4->VAR12 & VAR13) {
VAR9 = FUN3(VAR2, VAR4->VAR12, VAR8->VAR12,
VAR4);
if (!VAR9)
goto VAR14;
}

VAR9 = FUN5(VAR2, VAR6, VAR8, VAR4);
VAR14:
FUN6(&VAR2->VAR10);
return VAR9;
}