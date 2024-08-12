static char *
FUN1(const char *VAR1)
{
g_autofree char *VAR2 = NULL;


if (strlen(VAR1) != 2) {
FUN2("", VAR1);
return NULL;
} else if (!(FUN3(VAR1[0]) &&
FUN3(VAR1[1]))) {
FUN2("");
return NULL;
}

if (FUN4(VAR1) || FUN5(VAR1))
VAR2 = FUN6(VAR1, 1);
else
VAR2 = FUN6(VAR1, 2);

return FUN7(&VAR2);
}