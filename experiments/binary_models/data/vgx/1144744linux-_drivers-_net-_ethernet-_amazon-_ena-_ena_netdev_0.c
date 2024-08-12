static int FUN1(struct VAR1 *VAR2, u16 VAR3)
{
struct VAR4 *VAR5;

VAR5 = &VAR2->VAR6[VAR3];
if (FUN2(VAR5->VAR7))
return 0;

return FUN3(VAR2, VAR3, VAR5, true);
}