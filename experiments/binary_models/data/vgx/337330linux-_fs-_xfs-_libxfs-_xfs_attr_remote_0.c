int
FUN1(
struct VAR1		*VAR2)
{
struct VAR3		*VAR4 = VAR2->VAR5;
int				VAR6, VAR7;


VAR6 = FUN2(VAR4->VAR8, VAR4->VAR9, VAR4->VAR10,
VAR4->VAR11, VAR12, 1, &VAR7);
if (VAR6)
return VAR6;


if (!VAR7) {
FUN3(VAR2->VAR13,
VAR4->VAR9);
return -VAR14;
}

VAR4->VAR10 = 0;
VAR4->VAR11 = 0;
return 0;
}