int
FUN1(const char *VAR1,
unsigned int VAR2)
{
int VAR3 = 0;
FUN2(VAR4) VAR5 = NULL;
FUN2(VAR4) VAR6 = NULL;
g_autofree char *VAR7 = NULL;
g_autofree char *VAR8 = NULL;

if (VAR2 <= 2) {
FUN3(VAR9, FUN4(""), VAR2);
return -1;
}

VAR7 = FUN5("", VAR2);
VAR8 = FUN5("", VAR2);

VAR5 = FUN6(VAR10);
FUN7(VAR5, "", "", "", VAR1,
"", VAR8, NULL);


if (FUN8(VAR5, &VAR3) < 0)
return -1;

if (FUN9(VAR1, NULL, VAR2,
NULL, true, false) < 0)
return -1;

VAR6 = FUN6(VAR10);
FUN7(VAR6, "", "", "", VAR1,
"", VAR7, NULL);

if (FUN8(VAR6, &VAR3) < 0)
return -1;

return 0;
}