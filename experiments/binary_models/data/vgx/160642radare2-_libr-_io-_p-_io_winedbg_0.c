static char *__system(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5) {
if (!strcmp (VAR5, "")) {
return NULL;
}
if (*VAR5 == '') {
FUN1 ("");
FUN1 ("");
FUN1 ("");
FUN1 ("");
FUN1 ("");
FUN1 ("");
FUN1 ("");
FUN1 ("");
FUN1 ("");
} else if (FUN2 (VAR5, "")) {
struct winedbg_x86_32 VAR6 = FUN3 ();
VAR7 *VAR8 = (VAR7*)calloc (3, sizeof (struct VAR9));
if (VAR8) {
FUN4 ((VAR7*)&VAR6, sizeof (VAR6), (char *)VAR8);
return (char *)VAR8;
}
} else if (FUN2 (VAR5, "")) {
const char *VAR10 =
""\
""\
""\
""\
""\
""\
""\
""\
""\
""\

""\
""\
""\
""\
""\
""\

""\
""\
""\
""\

""\
""\
""\
""\
""\
""\

""\
""\
""\
""\
""\
""\
""\
""\
""\
""\
""\
""\
"";
return strdup (VAR10);
} else if (FUN2 (VAR5, "")) {
struct winedbg_x86_32 VAR6 = FUN3 ();
VAR2->FUN5 ("", VAR6.VAR11);
VAR2->FUN5 ("", VAR6.VAR12);
VAR2->FUN5 ("", VAR6.VAR13);
VAR2->FUN5 ("", VAR6.VAR14);
VAR2->FUN5 ("", VAR6.VAR15);
VAR2->FUN5 ("", VAR6.VAR16);
VAR2->FUN5 ("", VAR6.VAR17);
VAR2->FUN5 ("", VAR6.VAR18);
VAR2->FUN5 ("", VAR6.VAR19);
VAR2->FUN5 ("", VAR6.VAR20);
VAR2->FUN5 ("", VAR6.VAR21);
VAR2->FUN5 ("", VAR6.VAR22);
VAR2->FUN5 ("", VAR6.VAR23);
VAR2->FUN5 ("", VAR6.VAR24);
VAR2->FUN5 ("", VAR6.VAR25);
VAR2->FUN5 ("", VAR6.VAR26);
} else if (FUN2 (VAR5, "")) {
FUN6 (VAR2, "");
} else if (FUN2 (VAR5, "")) {
int VAR27 = FUN7 (NULL, VAR5 + 3) || VAR2->VAR28;
FUN8 (VAR29, 32, "", VAR27);
free (FUN9 (VAR29));
} else if (FUN2 (VAR5, "")) {
free (FUN9 (""));
} else if (FUN2 (VAR5, "")) {
free (FUN9 (""));
} else if (FUN2 (VAR5, "")) {
FUN10 ("");
} else if (FUN2 (VAR5, "")) {
FUN6 (VAR2, "");
} else if (FUN2 (VAR5, "")) {
char *VAR30 = FUN9 ("");
char *VAR31 = NULL;
if (VAR30) {
const char *VAR32;
char *VAR33 = VAR30;
for (;;) {
char *VAR34 = strchr (VAR33, '');
if (!VAR34) {
break;
}
*VAR34++ = 0;
VAR32 = "";
ut64 VAR35 = 0, VAR36 = 0;
if (strstr (VAR33, "")) {
if (strstr (VAR33, "")) {
VAR32 = "";
}
sscanf (VAR33, ""VAR37""VAR37, &VAR35, &VAR36);
}
char *VAR38 = FUN11 (""VAR37"" VAR37"", VAR35, VAR36, VAR32, "");
VAR33 = VAR34;
if (VAR38) {
VAR31 = FUN12 (VAR31, VAR38);
free (VAR38);
}
}
free (VAR30);
return VAR31;
}
} else if (FUN2 (VAR5, "")) {
return FUN11 ("", VAR4->VAR4);
} else {
FUN6 (VAR2, VAR5);
}
return NULL;
}