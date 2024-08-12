static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
u64 VAR5, char *VAR6)
{
struct VAR3 *VAR7 = VAR2->VAR8;
int VAR9;

VAR9 = FUN2(VAR7, VAR2, VAR5, VAR4);
if (VAR9) {
FUN3("", VAR6);
return -VAR10;
}

return 0;
}