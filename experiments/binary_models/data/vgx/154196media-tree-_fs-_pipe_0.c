static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR5 = VAR4->VAR5;


if (FUN2(VAR5) == 1 && !VAR2->VAR6)
VAR2->VAR6 = VAR5;
else
FUN3(VAR5);
}