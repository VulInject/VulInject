FUN1 (VAR1 *VAR2)
{
VAR3 *VAR4 = FUN2 (FUN3 (VAR2));
gboolean                VAR5;
gboolean                VAR6;
char                   *VAR7;
guint                   VAR8;


if (VAR4->VAR9 == NULL) {
return VAR10;
}

VAR7 = NULL;
VAR5 = FUN4 (VAR4->VAR9, &VAR8, &VAR7);
if (! VAR5) {
FUN5 (VAR7);
return VAR11;
}

if (VAR7 == NULL) {
return VAR11;
}

if (VAR8 == VAR12) {
char *VAR13;

VAR13 = FUN6 (VAR7);
VAR6 = !FUN7 (VAR13, VAR14);
FUN5 (VAR13);
} else if (VAR8 == VAR15) {
char *VAR13;

VAR13 = FUN6 (VAR7);
VAR6 = FUN7 (VAR13, VAR14);
FUN5 (VAR13);
} else if (VAR8 == VAR16 &&
VAR4->VAR17 != NULL) {
char **VAR18;
VAR18 = FUN8 (VAR7, "", 2);
VAR6 = !FUN9 (VAR4->VAR17, VAR18[1]);
FUN10 (VAR18);
} else if (VAR8 == VAR19) {
VAR20 *VAR21;
char *VAR22;


VAR21 = FUN11 ();

FUN12 (VAR21, "", &VAR22, NULL);
VAR6 = strcmp (VAR22, VAR7) != 0;
FUN5 (VAR22);
} else if (VAR8 == VAR23) {
VAR20 *VAR21;
char *VAR22;


VAR21 = FUN11 ();

FUN12 (VAR21, "", &VAR22, NULL);
VAR6 = strcmp (VAR22, VAR7) == 0;
FUN5 (VAR22);
} else {
VAR6 = VAR11;
}


VAR4->VAR24 = !VAR6;

FUN5 (VAR7);

return VAR6;
}