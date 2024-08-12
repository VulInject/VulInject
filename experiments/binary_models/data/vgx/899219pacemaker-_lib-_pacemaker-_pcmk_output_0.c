static int
FUN1(VAR1 *VAR2, va_list VAR3)
{
const char *VAR4 = FUN2(VAR3, const char *);

if (VAR2->FUN3(VAR2)) {
return VAR5;
}

VAR2->FUN4(VAR2, NULL, "", VAR4);
return VAR6;
}