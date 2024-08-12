int
FUN1(char *VAR1, VAR2 *VAR3,
char **VAR4, int *VAR5)
{
struct VAR6 *VAR6;
int VAR7;
attrlist VAR8[1] = { { VAR9, NULL, NULL } };


VAR7 = FUN2(VAR1, &VAR8[0], VAR3, (void **)&VAR6);
if (VAR7 != VAR10)
return (VAR7);

if (FUN3()) {
*VAR4 = NULL;
*VAR5 = 1;
VAR7 = VAR10;
} else {
*VAR5 = 0;
if (FUN4() == VAR6->VAR11->VAR12) {
if ((*VAR4 = strdup(VAR1)) == NULL) {
VAR7 = VAR13;
} else {
VAR7 = VAR10;
}
} else {
VAR7 = VAR14;
}
}

if (VAR6->VAR11) free(VAR6->VAR11);
if (VAR6->VAR15) free(VAR6->VAR15);
if (VAR6->VAR16) free(VAR6->VAR16);
if (VAR6->VAR17) free(VAR6->VAR17);
free(VAR6);

return (VAR7);
}