static void FUN1(VAR1 *VAR2, const char *VAR3)
{
VAR4 *VAR5;
VAR6 *VAR7;
char *VAR8;

if (VAR2->VAR9)
return;

VAR5 = NULL;
VAR7 = NULL;

if (VAR2->VAR10 != NULL) {
if (VAR2->VAR11 != NULL) {
VAR7 = FUN2(VAR2->VAR11);
if (VAR7 == NULL) {

return;
}
VAR5 = NULL;
} else {
VAR5 = FUN3(NULL, VAR2->VAR10);
VAR7 = VAR5 != NULL ? VAR5->VAR7 :
VAR12->VAR13;
}

VAR8 = FUN4(VAR2->VAR14 ? "" :
VAR2->VAR15 ? "" : "",
VAR2->VAR10, "", *VAR3 == '' ? "" : VAR3, NULL);
FUN5(VAR2->VAR16 ? "" : "",
3, VAR8, VAR7, VAR5);
FUN6(VAR8);
} else if (VAR2->VAR17 != NULL) {
FUN7(NULL, VAR2->VAR17->VAR18,
VAR2->VAR19, "", VAR3);
} else {
FUN8(VAR2->VAR20, VAR2->VAR19, "", VAR3);
}
}