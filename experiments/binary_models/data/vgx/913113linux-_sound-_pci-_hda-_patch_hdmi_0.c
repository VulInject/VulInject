static int FUN1(struct VAR1 *VAR2, int VAR3, void *VAR4)
{
struct VAR5 *VAR6 = VAR4;
struct VAR7 *VAR8, *VAR9;

if (!FUN2(VAR2) || !FUN2(VAR6->VAR2))
return 0;
VAR9 = FUN3(VAR6->VAR2);
VAR8 = FUN3(VAR2);
return VAR9->VAR6 == VAR8->VAR6;
}