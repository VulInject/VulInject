const char* FUN1(const struct VAR1* VAR2, int VAR3)
{
static char VAR4[VAR5 * 2 + VAR6 + 5];

if (!FUN2(VAR2) || !VAR3)
return FUN3(VAR2);
FUN4(0, VAR4, sizeof(VAR4), "", FUN3(VAR2),
FUN5(VAR2) ? FUN6(VAR2) : "",
FUN7(VAR2));
return VAR4;
}