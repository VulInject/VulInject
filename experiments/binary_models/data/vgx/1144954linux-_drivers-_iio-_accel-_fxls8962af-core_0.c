static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(FUN3(VAR2));
int VAR5;

VAR5 = FUN4(VAR4);
if (VAR5) {
FUN5(VAR2, "");
return VAR5;
}

return 0;
}