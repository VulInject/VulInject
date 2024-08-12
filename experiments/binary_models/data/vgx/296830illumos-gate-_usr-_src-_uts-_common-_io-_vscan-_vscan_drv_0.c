int
FUN1(void)
{
int VAR1;

VAR2 =
sizeof (VAR3) * (VAR4 + 1);

if (FUN2() != 0)
return (VAR5);

if (FUN3() != 0) {
FUN4();
return (VAR5);
}

FUN5(&VAR6, NULL, VAR7, NULL);
VAR8 = FUN6(VAR2, VAR9);

FUN7(&VAR10, NULL, VAR11, NULL);

if ((VAR1  = FUN8(&VAR12)) != 0) {
FUN4();
FUN9();
FUN10(VAR8, VAR2);
FUN11(&VAR10);
FUN12(&VAR6);
}

return (VAR1);
}