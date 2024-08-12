static VAR1* FUN1(VAR2 *VAR3, int VAR4, char **argv) {
char *VAR5 = NULL;
int VAR6;
VAR1 *VAR7 = FUN2 ("");
if (!VAR7) {
return NULL;
}
for (VAR6 = 0; argv[VAR6]; VAR6++) {
VAR7->VAR8[VAR6] = strdup (argv[VAR6]);
}
VAR7->VAR8[VAR6] = NULL;
if (!argv[0]) {
FUN3 (VAR7);
return NULL;
}
VAR7->VAR9 = strdup (argv[0]);

if (VAR3->VAR10 && *VAR3->VAR10) {
if (!FUN4 (VAR7, VAR3->VAR10)) {
FUN5 ("", VAR3->VAR10);
FUN3 (VAR7);
return NULL;
}
if (strstr (VAR3->VAR10, VAR11 "")) {
(void)FUN6 (VAR3->VAR10);
}
} else if (VAR3->VAR12) {
if (!FUN7 (VAR7, VAR3->VAR12)) {
FUN5 ("");
FUN3 (VAR7);
return NULL;
}
}
if (VAR4 == 64) {
FUN8 (VAR7, VAR5 = strdup (""));
} else if (VAR4 == 32) {
FUN8 (VAR7, VAR5 = strdup (""));
}
free (VAR5);
if (!FUN9 (VAR7)) {
FUN5 ("");
FUN3 (VAR7);
return NULL;
}
return VAR7;
}