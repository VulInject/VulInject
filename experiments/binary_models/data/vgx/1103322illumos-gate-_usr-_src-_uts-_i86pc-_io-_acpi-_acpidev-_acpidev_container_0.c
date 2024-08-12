static VAR1
FUN1(VAR2 *VAR3)
{
static char *VAR4[] = {
VAR5,
VAR6,
VAR7,
};

FUN2(VAR3 != NULL);
FUN2(VAR3->VAR8 != NULL);
FUN2(VAR3->VAR9 != NULL);

if (FUN3(FUN4(VAR3,
FUN5(VAR4)))) {
return (VAR10);
}
if (FUN3(FUN6(VAR3,
FUN5(VAR11), NULL))) {
return (VAR10);
}

return (VAR12);
}