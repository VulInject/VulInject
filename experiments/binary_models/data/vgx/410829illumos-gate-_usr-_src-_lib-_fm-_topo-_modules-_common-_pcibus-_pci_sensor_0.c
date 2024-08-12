static int
FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5)
{
int VAR6;
VAR7 *VAR8;
struct VAR9 *VAR10;

VAR8 = FUN2(VAR5);
if (VAR8 == NULL) {
if (VAR11 == VAR12) {
return (0);
}

FUN3(VAR2, "", VAR5,
strerror(VAR11));
return (FUN4(VAR2, VAR13));
}

while ((VAR10 = FUN5(VAR8)) != NULL) {
char VAR14[VAR15];

if (strcmp(VAR10->VAR16, "") == 0 ||
strcmp(VAR10->VAR16, "") == 0) {
continue;
}

if (snprintf(VAR14, sizeof (VAR14), "", VAR5,
VAR10->VAR16) >= sizeof (VAR14)) {
FUN3(VAR2, ""
"", VAR5, VAR10->VAR16);
VAR6 = FUN4(VAR2, VAR13);
goto VAR17;
}

FUN3(VAR2, "",
VAR14);
if ((VAR6 = FUN6(VAR2, VAR4, VAR14,
VAR10->VAR16)) < 0) {
goto VAR17;
}
}

VAR6 = 0;

VAR17:
(void) FUN7(VAR8);
return (VAR6);
}