int FUN1(const struct VAR1 *VAR2, struct VAR3 *VAR4)
{
const struct VAR5 *VAR6 = FUN2(VAR2);
char VAR7[32];

FUN3(VAR6, VAR7, sizeof(VAR7));

if (FUN4(VAR4, "", VAR7))
return -VAR8;

return 0;
}