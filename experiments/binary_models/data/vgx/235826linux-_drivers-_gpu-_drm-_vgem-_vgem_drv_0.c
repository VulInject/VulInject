static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
int VAR7;

VAR6 = FUN2(sizeof(*VAR6), VAR8);
if (!VAR6)
return -VAR9;

VAR4->VAR10 = VAR6;

VAR7 = FUN3(VAR6);
if (VAR7) {
FUN4(VAR6);
return VAR7;
}

return 0;
}