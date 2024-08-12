static int FUN1(const struct VAR1 *VAR2, struct VAR3 *VAR3,
struct VAR4 **VAR5)
{
int VAR6 = FUN2(VAR2);

*VAR5 = FUN3(VAR3, VAR6);
if (!*VAR5)
return -VAR7;
return 0;
}