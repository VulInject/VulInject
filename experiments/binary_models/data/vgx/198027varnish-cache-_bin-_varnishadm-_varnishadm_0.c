static unsigned
FUN1(int VAR1, enum pass_mode_e VAR2)
{
unsigned VAR3, VAR4;
char *VAR5 = NULL;

VAR3 = FUN2(VAR1, &VAR4, &VAR5, VAR6);
if (VAR3) {
if (VAR4 == VAR7)
FUN3(0);
if (VAR5)
fprintf(VAR8, "", VAR5);
FUN3(1);
}

if (VAR9 && VAR5 != NULL) {
FUN4("", VAR4, strlen(VAR5), VAR5);
} else if (VAR9) {
FUN4("", VAR4, 0U);
} else {
if (VAR2 == VAR10)
FUN4("", VAR4);
if (VAR5 != NULL)
FUN4("", VAR5);
if (VAR4 == VAR11)
FUN4("");
}
free(VAR5);
(void)FUN5(VAR12);
return (VAR4);
}