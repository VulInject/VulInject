static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
struct VAR4 *VAR5;

VAR5 = FUN2(VAR1, VAR3, false);
if (!VAR5)
return -VAR6;

FUN3(FUN4(VAR5), true);
return 0;
}