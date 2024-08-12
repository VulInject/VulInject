static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
int VAR5;

VAR5 = FUN2(VAR2, &VAR4->VAR6, &VAR7,
VAR8, NULL);
if (VAR5) {
FUN3("");
return VAR5;
}
FUN4(&VAR4->VAR6, &VAR9);


VAR4->VAR6.VAR10 = 1;


VAR5 = FUN5(&VAR4->VAR6, VAR4->VAR11, NULL);
if (VAR5) {
FUN3("");


VAR5 = FUN6(VAR2, VAR4);
if (VAR5)
goto VAR12;
}

return 0;

VAR12:
FUN7(&VAR4->VAR6);
return VAR5;
}