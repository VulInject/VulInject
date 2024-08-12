static void FUN1(struct VAR1 *VAR2, int VAR3)
{
const char **VAR4;

if (VAR3) {
FUN2(VAR2,
FUN3(""));
return;
}

for (VAR4 = VAR5; *VAR4; VAR4++) {
const char *VAR6 = *VAR4;

if (FUN4(VAR6))
FUN5(VAR2, "", VAR6);
}
}