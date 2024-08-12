int
FUN1(void)
{
int VAR1;

if ((VAR1 = FUN2(&VAR2)) != 0)
return (VAR1);

(void) FUN3(VAR3, VAR4);
FUN4(&VAR5);


if (VAR6 != NULL) {
FUN5(&VAR7);
VAR8 = VAR9;

FUN6(&VAR10);

FUN7(&VAR10, &VAR7);
FUN8(&VAR7);
VAR6 = NULL;
}
FUN4(&VAR7);
FUN9(&VAR10);


FUN10(&VAR11);

VAR12 = 0;
FUN11(&VAR13);

return (0);
}