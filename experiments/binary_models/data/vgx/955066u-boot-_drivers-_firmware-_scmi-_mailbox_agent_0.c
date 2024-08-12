static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
int VAR5;

VAR5 = FUN2(VAR2, 0, &VAR4->VAR6);
if (VAR5) {
FUN3(VAR2, "", VAR5);
return VAR5;
}

VAR5 = FUN4(VAR2, &VAR4->VAR7);
if (VAR5) {
FUN3(VAR2, "", VAR5);
return VAR5;
}

VAR4->VAR8 = VAR9;

return 0;
}