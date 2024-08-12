static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 =
FUN2(VAR2, struct VAR3, VAR5.VAR2);

FUN3(VAR4);
FUN4(VAR4);
VAR4->VAR6 = 0;


if (VAR4->VAR7 == VAR4->VAR8)
goto VAR9;


FUN5(VAR4);


if (VAR4->VAR7)
FUN6(VAR4);
else
FUN7(VAR4);
VAR9:
FUN4(VAR4);
}