static bool FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5) {
VAR6 *VAR7;
VAR8 *VAR9;
PrintfCallback VAR10 = VAR4->VAR11.VAR10;
if (*VAR5 == '') {
char *VAR12 = VAR4->VAR13.FUN2 (VAR4->VAR13.VAR14, VAR5 + 1);
FUN3 ("", VAR12);
free (VAR12);
} else if (*VAR5 == '') {
FUN4 (VAR5 + 1, 1);
} else if (FUN5 (VAR5, "")) {
char *VAR12 = FUN6 (VAR5 + 4);
if (!FUN7 (VAR4, VAR12, NULL, VAR2->VAR15)) {
FUN8 ("", VAR12);
}
free (VAR12);
} else if (FUN5 (VAR5, "")) {
VAR16 *VAR17 = FUN9 (VAR4, VAR2->VAR15);
FUN10 (VAR17, VAR9, VAR7) {
if (VAR7->VAR18 == '') {
FUN11 ("", VAR7->VAR19);
char *VAR20 = FUN12 ("", VAR7->VAR19);
FUN1 (VAR2, VAR4, VAR20);
free (VAR20);
} else {
FUN11 ("", VAR7->VAR19);
}
}
FUN13 (VAR17);
} else if (FUN5 (VAR5, "")) {
char *VAR15 = NULL;
bool VAR21 = FUN5 (VAR5, "");
if (VAR21) {
VAR5 += 3;
}
if (VAR5[2] == '') {
if (VAR5[3] == '') {
VAR15 = strdup (VAR5 + 3);
} else {
VAR15 = FUN12 ("", VAR2->VAR15, VAR5 + 3);
}
} else {
VAR15 = strdup (VAR2->VAR15);
}
VAR16 *VAR17 = FUN9 (VAR4, VAR15);
if (VAR17) {
FUN10 (VAR17, VAR9, VAR7) {
if (VAR21) {
FUN8 ("", VAR7->VAR18, VAR7->VAR22, VAR7->VAR19);
} else {
FUN8 ("", VAR7->VAR18, VAR7->VAR19);
}
}
} else {
if (strlen (VAR15) > 1) {
FUN14 ("");
}
}
FUN13 (VAR17);

VAR23 *VAR24;
FUN10 (VAR4->VAR25, VAR9, VAR24) {
char *VAR26 = strdup (VAR24->VAR27);
char *VAR28 = (char *)FUN15 (VAR26, '');
if (VAR28) {
VAR28++;
*VAR28 = 0;
}
if (FUN5 (VAR26, VAR2->VAR15)) {
FUN8 ("", (VAR24->VAR27 && VAR24->VAR27[0]) ? VAR24->VAR27 + 1: "");
}
free (VAR26);
}
free (VAR15);
} else if (FUN5 (VAR5, "")) {
FUN8 ("", VAR2->VAR15);
} else if (FUN5 (VAR5, "")) {
const char *VAR29 = FUN16 (VAR5 + 3);
char *VAR30 = FUN17 (VAR2, VAR29);
free (VAR2->VAR15);
VAR2->VAR15 = VAR30;
VAR16 *VAR17 = FUN9 (VAR4, VAR27);
if (FUN18 (VAR17)) {
VAR23 *VAR24;
VAR8 *VAR9;
FUN10 (VAR4->VAR25, VAR9, VAR24) {
if (!strcmp (VAR27, VAR24->VAR27)) {
FUN19 (VAR17, VAR24->VAR27);
}
}
}
FUN13 (VAR17);
} else if (FUN5 (VAR5, "")) {
char *VAR31 = FUN6 (VAR5 + 6);
char *VAR27 = strchr (VAR31, '');
if (VAR27) {
*VAR27++ = 0;
VAR27 = (char *)FUN16 (VAR27);
char *VAR32 = strchr (VAR27, '');
ut64 VAR33 = 0;
if (VAR32) {
*VAR32++ = 0;
VAR32 = (char *)FUN16 (VAR32);
VAR33 = FUN20 (NULL, VAR32);
}
bool VAR34 = FUN21 (VAR4, VAR31, VAR27, VAR33);
if (!VAR34) {
FUN14 ("");
}
} else {
VAR35 *VAR36;
FUN22 ("");
FUN10 (VAR4->VAR37, VAR9, VAR36) {
FUN22 ("", VAR36->VAR19);
}
FUN22 ("");
}
free (VAR31);
} else if (FUN5 (VAR5, "")) {
VAR23* VAR24;
FUN10 (VAR4->VAR25, VAR9, VAR24) {
FUN8 ("", VAR24->VAR27, VAR24->VAR38->VAR19);
}
} else if (FUN5 (VAR5, "")) {
const char *VAR29 = FUN16 (VAR5 + 3);
char *VAR30 = FUN17 (VAR2, VAR29);
char *VAR38 = strchr (VAR30, '');
if (VAR38) {
*VAR38 = 0;
FUN23 (VAR30);
}
VAR7 = FUN24 (VAR4, VAR30, false);
if (VAR7) {
FUN25 (VAR4, VAR7, 0, VAR7->VAR22);
char *VAR39 = (char *)FUN15 (VAR30, '');
if (VAR39) {
VAR39++;
}
if (VAR7->VAR40 && !FUN7 (VAR4, VAR30, VAR7->VAR40, VAR39)) {
char *VAR41 = FUN26 ((const char *)VAR7->VAR40, VAR7->VAR22);
FUN8 ("", VAR41);
free (VAR41);
}
FUN27 (VAR4, VAR7);
} else {
FUN14 ("");
}
free (VAR30);
} else if (FUN5 (VAR5, "")) {
FUN22 ("");
} else if (FUN5 (VAR5, "")) {
const char *VAR29 = FUN16 (VAR5 + 3);
char *VAR30 = FUN17 (VAR2, VAR29);
const char *VAR39 = FUN15 (VAR30, '');
if (VAR39) {
VAR39++;
}
VAR7 = FUN24 (VAR4, VAR30, false);
if (VAR7) {
FUN25 (VAR4, VAR7, 0, VAR7->VAR22);
FUN28 (VAR39, VAR7->VAR40, VAR7->VAR22, 0);
FUN27 (VAR4, VAR7);
} else {
char *VAR42 = FUN12 ("", VAR39);
if (!FUN29 (VAR4, VAR30, VAR42)) {
FUN14 ("");
}
free (VAR42);
}
free (VAR30);
} else if (FUN5 (VAR5, "") || FUN5 (VAR5, "")) {
char *VAR40 = strdup (VAR5);
const char *VAR29 = FUN30 (VAR40, '');
VAR29 = (char *)FUN16 (VAR29);
VAR7 = FUN24 (VAR4, VAR29, false);
if (VAR7) {
FUN25 (VAR4, VAR7, 0, VAR7->VAR22);
char *VAR43 = FUN12 ("malloc:
VAR44 *VAR45 = VAR4->VAR46.FUN31 (VAR4->VAR46.VAR47, VAR43, VAR48, 0, 0);
free (VAR43);
if (VAR45) {
VAR4->VAR46.FUN32 (VAR4->VAR46.VAR47, VAR45->VAR45, VAR7->VAR40, VAR7->VAR22);
return true;
}
} else {
FUN14 ("");
}
free (VAR40);
} else if (FUN5 (VAR5, "") || FUN5 (VAR5, "")) {
FUN8 (
""
""
""
""
""
""
""
""
""
""
""
"");
} else {
if (*VAR5) {
FUN14 ("", VAR5);
}
}
return true;
}