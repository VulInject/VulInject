static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);

VAR4->VAR5 = FUN3(VAR2);
if (!VAR4->VAR5)
return -VAR6;

VAR4->VAR7 = (const struct VAR8 *)FUN4(VAR2);
if (!VAR4->VAR7)
return -VAR9;

return 0;
}