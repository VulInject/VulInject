static int
FUN1(const char *VAR1)
{
char *VAR2;
VAR3 *VAR4;
int VAR5;
int VAR6 = 0;

if ((VAR5 = open(VAR1, VAR7)) < 0) {
(void) fprintf(VAR8,
"",
VAR1, strerror(VAR9));
return (VAR6);
}

if (FUN2(VAR10) == VAR11) {
(void) fprintf(VAR8,
"");
(void) close(VAR5);
return (VAR6);
}

VAR4 = FUN3(VAR5, VAR12, (VAR3 *)0);
if (FUN4(VAR4) != VAR13) {
(void) FUN5(VAR4);
(void) close(VAR5);
return (VAR6);
}

VAR2 = FUN6(VAR4, 0);

if (VAR2[VAR14] == VAR15) {
VAR6 = 32;
} else if (VAR2[VAR14] == VAR16) {
VAR6 = 64;
}

(void) FUN5(VAR4);
(void) close(VAR5);
return (VAR6);
}