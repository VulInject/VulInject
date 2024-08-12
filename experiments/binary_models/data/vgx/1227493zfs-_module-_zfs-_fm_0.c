static int
FUN1(VAR1 *VAR2, int VAR3, const VAR1 *VAR4)
{
if (VAR3 != VAR5) {
FUN2(&VAR6.VAR7.VAR8.VAR9);
return (0);
}

if (FUN3(VAR2, VAR10, VAR3) != 0 ||
FUN4(VAR2, VAR11, VAR12) != 0) {
FUN2(&VAR6.VAR7.VAR8.VAR9);
return (0);
}

if (VAR4 != NULL && FUN5(VAR2, VAR13,
(VAR1 *)VAR4) != 0) {
FUN2(&VAR6.VAR7.VAR8.VAR9);
return (0);
}

return (1);
}