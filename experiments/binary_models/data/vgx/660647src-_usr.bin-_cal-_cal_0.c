void
FUN1(int VAR1, int VAR2)
{
int VAR3, VAR4, VAR5, VAR6[VAR7], VAR8;
char *VAR9, VAR10[30];

FUN2(VAR1, VAR2, VAR6);
(void)snprintf(VAR10, sizeof(VAR10), "",
VAR11[VAR1 - 1], VAR2);
VAR5 = strlen(VAR10);
(void)FUN3("",
((VAR12 ? VAR13 : VAR14) - VAR5) / 2, "",
VAR10, VAR15);
for (VAR4 = 0; VAR4 < 6; VAR4++) {
VAR8 = VAR16;
for (VAR3 = 0, VAR9 = VAR10; VAR3 < 7; VAR3++,
VAR9 += VAR12 ? VAR17 : VAR18) {
if (VAR8 == VAR16 && VAR6[VAR4 * 7 + VAR3] != VAR16)
VAR8 = VAR6[VAR4 * 7 + VAR3];
FUN4(VAR9, VAR6[VAR4 * 7 + VAR3]);
}
*VAR9 = '';
FUN5(VAR10);
(void)FUN3("", VAR10);
if (VAR19 && VAR8 != VAR16)
FUN3("", FUN6(VAR8, VAR1, VAR2));
FUN3("");
}
}