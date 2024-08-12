static void
FUN1(char *VAR1, char *VAR2, int VAR3, char *VAR4)
{
char *VAR5;
VAR6 *VAR7;
int VAR8 = 0;
char *VAR9;

FUN2(VAR1, VAR2);
VAR9 = VAR3 ? FUN3(VAR1, VAR4) : VAR4;
FUN4(VAR1, VAR9);
FUN5();
if (VAR10)
FUN6(VAR11, "");
if (VAR1 && (VAR5 = FUN3(VAR1, ""))) {
FUN6(VAR11, ""%VAR12\"", VAR5);
free(VAR5);
} else
FUN6(VAR11, "");

FUN6(VAR11, "");
FUN6(VAR11, "");
FUN6(VAR11, "");
FUN6(VAR11, "");

while (VAR7 = FUN7())
VAR8 |= (VAR7->VAR13 == VAR14);
if (VAR3 && !VAR8) {
(void) unlink(VAR9);
return;
}
FUN8();
}