static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)

{
struct VAR5 *VAR6 = FUN2(VAR2);
int VAR7;

VAR7 = FUN3(VAR6->VAR8, VAR2);
if (VAR7) {
FUN4(VAR2, "", VAR7);

VAR6->VAR8 = NULL;
return VAR7;
}

return 0;
}