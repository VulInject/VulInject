static int FUN1(struct VAR1 *VAR2,
unsigned long VAR3, void *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
unsigned int VAR7;
int VAR8;
int VAR9;

VAR8 = FUN3(VAR6->VAR10) - VAR6->VAR11;



if ((VAR3 == VAR12 && VAR8 < 0) ||
(VAR3 == VAR13 && VAR8 > 0)) {
FUN4(&VAR6->VAR14);
VAR9 = FUN5(VAR6, &VAR7);
FUN6(&VAR6->VAR14);

if (VAR9 < 0)
FUN7(VAR6->VAR15, "", VAR9);
else
FUN8(VAR6->VAR15, "", VAR7);
}

return 0;
}