int
FUN1(VAR1 **VAR2,
const char *VAR3,
const char *VAR4,
const char *VAR5,
const char *VAR6,
const char *VAR7,
const char *VAR8)
{
FUN2(VAR1) VAR9 = NULL;
const char *VAR10 = getenv("");
long long VAR11 = 0;
g_autofree char *VAR12 = NULL;


if (!VAR6)
VAR6 = getenv("");

if (!VAR3)
return 0;

if (VAR10) {
VAR12 = FUN3(VAR10);


FUN4(VAR12, NULL);

if (FUN5(VAR12, NULL, 10, &VAR11) < 0) {
FUN6(VAR13,
FUN7(""),
FUN8(VAR12));
return -1;
}
}


VAR9 = FUN9();

if (VAR7 && FUN10(VAR9, "", VAR7) < 0)
return -1;
if (VAR5 && FUN10(VAR9, "", VAR5) < 0)
return -1;
if (FUN10(VAR9, "", VAR3) < 0)
return -1;
if (VAR6 && FUN10(VAR9, "", VAR6) < 0)
return -1;
if (VAR4 && FUN10(VAR9, "", VAR4) < 0)
return -1;
if (VAR8 && FUN10(VAR9, "", VAR8) < 0)
return -1;
if (FUN11(VAR9, "", VAR11) < 0)
return -1;

*VAR2 = FUN12(&VAR9);
return 0;
}