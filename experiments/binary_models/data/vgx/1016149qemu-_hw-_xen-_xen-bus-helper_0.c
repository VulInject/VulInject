void FUN1(struct VAR1 *VAR2, const char *VAR3,
const char *VAR4, const char *VAR5, VAR6 **VAR7)
{
char *VAR8;

VAR8 = (strlen(VAR3) != 0) ? FUN2("", VAR3, VAR4) :
FUN3(VAR4);

FUN4(VAR8);

if (!FUN5(VAR2, VAR8, VAR5)) {
FUN6(VAR7, VAR9, "", VAR8);
}

FUN7(VAR8);
}