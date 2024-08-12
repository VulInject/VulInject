static void
FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5)
{
VAR6 *VAR7 = VAR5;
char *VAR8 = NULL;
uint_t VAR9, VAR10;
VAR3 **VAR11;


if (FUN2(VAR4, VAR12,
&VAR11, &VAR10) == 0) {
for (VAR9 = 0; VAR9 < VAR10; VAR9++)
FUN1(VAR2, VAR11[VAR9], VAR7);
return;
}

if ((VAR7->VAR13 == 0) &&
(FUN3(VAR4, VAR14, &VAR8) == 0) &&
(strcmp(VAR7->VAR15, VAR8) == 0)) {
(void) FUN4(VAR4, VAR16,
&VAR7->VAR13);
}
}