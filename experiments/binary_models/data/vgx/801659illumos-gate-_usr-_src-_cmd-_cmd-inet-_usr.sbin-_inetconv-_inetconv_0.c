static char *
FUN1(struct VAR1 *VAR2)
{
static char *VAR3;
size_t VAR4;
char *VAR5, *VAR6;


free(VAR3);

VAR4 = strlen(VAR2->VAR7) + strlen(VAR2->VAR8) +
sizeof ("");
VAR3 = FUN2(VAR4);


(void) FUN3(VAR3, FUN4(VAR2->VAR7,
VAR2->VAR9 ? "": ""), VAR4);
(void) FUN5(VAR3, "", VAR4);

VAR6 = VAR2->VAR8;
if (VAR2->VAR9 && (strcmp(VAR2->VAR8, "VAR10
for (VAR5 = VAR3; *VAR5 != ''; VAR5++) {
if (*VAR5 == '')
*VAR5 = '';
}
(void) FUN5(VAR3, FUN4(VAR6, ""), VAR4);
return (VAR3);
}