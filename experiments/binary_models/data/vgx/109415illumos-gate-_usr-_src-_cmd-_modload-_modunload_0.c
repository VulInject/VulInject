void
FUN1(char *VAR1, int VAR2, char **VAR3)
{
struct modinfo VAR4;

char VAR5[8];
char VAR6[8];

VAR4.VAR7 = VAR4.VAR8 = VAR2;
VAR4.VAR9 = VAR10;
if (FUN2(VAR11, VAR2, &VAR4) < 0)
FUN3("");

(void) sprintf(VAR5, "", VAR2);
(void) sprintf(VAR6, "", VAR4.VAR12[0].VAR13);

(void) execle(VAR1, VAR1, VAR5, VAR6, NULL, VAR3);

FUN3("", VAR1);
}