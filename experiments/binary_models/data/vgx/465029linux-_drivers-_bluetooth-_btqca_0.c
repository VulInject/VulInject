static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
int VAR5;

FUN2(VAR2, "");

VAR4 = FUN3(VAR2, VAR6, 0, NULL, VAR7);
if (FUN4(VAR4)) {
VAR5 = FUN5(VAR4);
FUN6(VAR2, "", VAR5);
return VAR5;
}

FUN7(VAR4);

return 0;
}