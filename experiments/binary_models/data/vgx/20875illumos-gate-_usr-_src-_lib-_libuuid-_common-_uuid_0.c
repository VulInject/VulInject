static void
FUN1(uuid_t VAR1, char *VAR2, boolean_t VAR3)
{
struct uuid 	VAR4;
uint16_t	VAR5;
char		VAR6[13];
int		VAR7 = 0, VAR8;


if (VAR1 == NULL) {
return;
}

FUN2(&VAR4, VAR1);
VAR5 = VAR4.VAR9;
VAR5 = (VAR5  << 8) | VAR4.VAR10;
for (VAR8 = 0; VAR8 < 6; VAR8++) {
(void) sprintf(&VAR6[VAR7++], VAR3 ? "" : "",
VAR4.VAR11[VAR8]);
VAR7++;
}
VAR6[VAR7] = '';

(void) snprintf(VAR2, 25,
VAR3 ? "" : "",
VAR4.VAR12, VAR4.VAR13, VAR4.VAR14, VAR5);
(void) FUN3(VAR2, VAR6, VAR15);
}