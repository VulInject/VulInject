int FUN1(VAR1 *VAR2, int VAR3) {
int VAR4 = -1;
char *VAR5 = NULL;
size_t VAR6;

if (!VAR2 || !VAR2->VAR7) {
return -1;
}

if (!FUN2 (VAR2)) {
goto VAR8;
}
VAR2->VAR9.VAR10 = false;
VAR11.VAR12 = false;

if (VAR2->VAR13.VAR14 == -1) {
FUN3 (VAR2);
}

if (!VAR2->VAR13.VAR14) {

VAR4 = -2;
goto VAR8;
}

VAR6 = strlen (VAR15) + (sizeof (int) * 2) + 1;
VAR5 = calloc (VAR6, sizeof (char));
if (!VAR5) {
VAR4 = -1;
goto VAR8;
}

VAR4 = snprintf (VAR5, VAR6, "", VAR15, VAR3);
if (VAR4 < 0) {
goto VAR8;
}

VAR4 = FUN4 (VAR2, VAR5);
if (VAR4 < 0) {
goto VAR8;
}

if (FUN5 (VAR2, false) < 0) {
VAR4 = -1;
goto VAR8;
}

VAR4 = FUN6 (VAR2);
VAR8:
if (VAR5) {
free (VAR5);
}
FUN7 (VAR2);
return VAR4;
}