static int FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3 = VAR1->VAR4;
struct VAR5 *VAR6 = VAR1->VAR6.VAR7;
int VAR8;

VAR8 = FUN2(VAR3->VAR9);
if (VAR8) {
FUN3(VAR6, "", VAR8);
return VAR8;
}

FUN4(VAR3->VAR10);

return 0;
}