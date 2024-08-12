static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, size_t VAR6)
{
if (VAR5 == NULL) {
FUN2(VAR4, NULL, "");
return;
}

if (VAR2->VAR7 == VAR8) {
FUN2(VAR4, NULL, VAR9);
return;
}

if (VAR4->VAR10 == VAR11) {

FUN2(VAR4, NULL, "");
return;
}

int VAR12 = FUN3(VAR2->VAR13, VAR14, VAR4, VAR5, VAR6);
if (VAR12 != VAR15) {
FUN2(VAR4, NULL, "");
}
}