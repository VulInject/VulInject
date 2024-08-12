static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6;
int VAR7;

VAR6 = FUN3(VAR4);

VAR7 = FUN4(VAR6->VAR8);
if (VAR7)
return VAR7;

VAR7 = FUN4(VAR6->VAR9);
if (VAR7) {
FUN5(VAR6->VAR8);
return VAR7;
}

return 0;
}