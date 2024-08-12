int
FUN1(struct VAR1 *VAR2, int VAR3, void *VAR4)
{
if (VAR2 == NULL)
return (0);

switch (VAR3) {
case VAR5:
return (FUN2(VAR2, VAR4));
case VAR6:
return (FUN3(VAR2, VAR4));
default:
return (0);
}
}