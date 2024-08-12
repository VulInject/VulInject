static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3,
int VAR4, u64 VAR5)
{
struct VAR6 *VAR7;

if (VAR2 == NULL)
return 0;
VAR7 = FUN2(VAR2, false);
if (VAR7 == NULL)
return -VAR8;
return FUN3(VAR2, VAR3, VAR7, VAR4, VAR5);
}