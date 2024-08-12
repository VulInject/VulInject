int
FUN1(int VAR1, unsigned int *VAR2)
{
int VAR3, VAR4, VAR5;
char VAR6[VAR7];
ssize_t VAR8;

VAR9 = VAR1;
if (FUN2("") != 0) {
fprintf(VAR10, VAR11);
return (-1);
}

if ((VAR4 = FUN3("", 0)) == -1) {
fprintf(VAR10, VAR12);
return (-1);
}

if (VAR13)
(void) FUN4("");
VAR5 = 0;
VAR14 = VAR2;
VAR15 = VAR16;
for (;;) {
VAR8 = FUN5(VAR4, VAR6, VAR7);
if (VAR8 != VAR7)
break;
VAR5++;
}
VAR15 = NULL;
(void) FUN6(VAR4);

if (VAR13) {
(void) FUN4("", VAR8);
for (VAR3 = 0; VAR14[VAR3] != 0; VAR3 += 2) {
(void) FUN4("",
VAR14[VAR3],
VAR14[VAR3] + VAR14[VAR3 + 1] - 1);
}
(void) FUN4("", VAR5);
}

(void) FUN7();
return (0);
}