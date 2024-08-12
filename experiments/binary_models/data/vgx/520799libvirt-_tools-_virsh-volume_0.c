static bool
FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
FUN2(VAR5) VAR6 = NULL;
FUN2(VAR7) VAR8 = NULL;
const char *VAR9 = NULL;
unsigned int VAR10 = 0;
g_autofree char *VAR11 = NULL;

if (FUN3(VAR4, ""))
VAR10 |= VAR12;

if (FUN3(VAR4, ""))
VAR10 |= VAR13;

if (!(VAR6 = FUN4(VAR2, VAR4, "", NULL)))
return false;

if (FUN5(VAR2, VAR4, "", &VAR9) < 0)
return false;

if (FUN6(VAR9, VAR14, &VAR11) < 0) {
FUN7();
return false;
}

if (!(VAR8 = FUN8(VAR6, VAR11, VAR10))) {
FUN9(VAR2, FUN10(""), VAR9);
return false;
}

FUN11(VAR2, FUN10(""),
FUN12(VAR8), VAR9);
return true;
}