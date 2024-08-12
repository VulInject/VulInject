static VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, int VAR5, int VAR6) {
if (FUN2 (false)) {
FUN3 ("" VAR7 "");
return NULL;
}
if (!FUN4 (VAR3, VAR4, 0)) {
return NULL;
}
VAR8 *VAR9 = FUN5 (VAR8);
if (VAR9) {
VAR9->VAR10 = FUN6 (NULL, VAR4 + strlen (VAR7));
VAR9->VAR10 = FUN7 (VAR9->VAR10, 0);
if (VAR9->VAR10 < 0) {
free (VAR9);
FUN3 ("");
return NULL;
}
}
return FUN8 (VAR3, &VAR11, VAR4, VAR12 | VAR5, VAR6, VAR9);
}

RIOPlugin VAR11 = {
.VAR13 = "",
.VAR14 = "",
.VAR13 = "",
.VAR14 = "",
.VAR15 = VAR7,
.VAR16 = "",
.open = VAR17,
.close = VAR18,
.read = VAR19,
.VAR20 = VAR21,
.VAR22 = VAR23,
.write = VAR24,
.VAR25 = VAR26,
};