int
FUN1(bool VAR1, char **VAR2)
{
if (VAR1) {
*VAR2 = FUN2(VAR3 "");
} else {
g_autofree char *VAR4 = NULL;

VAR4 = FUN3();

*VAR2 = FUN4("", VAR4);
}

return 0;
}