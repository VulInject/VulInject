** (two VAR1-character VAR2, five strings denoting VAR3,
** seven explicit VAR4, two explicit VAR5, a VAR6,
** and a trailing ASCII VAR7).
** The values above are for systems where an int is 32 bits and are VAR8
** as an VAR9; the define below calculates the maximum for the system VAR10
** VAR11.

static char	VAR12[VAR13];



char *
FUN1(register const struct VAR14 *VAR15, char *VAR16)
{
static const char	VAR17[][3] = {
"", "", "", "", "", "", ""
};
static const char	VAR18[][3] = {
"", "", "", "", "", "",
"", "", "", "", "", ""
};
register const char *	VAR19;
register const char *	VAR20;
char			VAR21[FUN2(int) + 2];
char			VAR22[VAR13];

if (VAR15 == NULL) {
VAR23 = VAR24;
return strcpy(VAR16, "");
}
if (VAR15->VAR25 < 0 || VAR15->VAR25 >= VAR26)
VAR19 = "";
else	VAR19 = VAR17[VAR15->VAR25];
if (VAR15->VAR27 < 0 || VAR15->VAR27 >= VAR28)
VAR20 = "";
else	VAR20 = VAR18[VAR15->VAR27];

(void) FUN3(VAR21, sizeof VAR21, "", VAR15);

(void) sprintf(VAR22,
((strlen(VAR21) <= 4) ? VAR29 : VAR30),
VAR19, VAR20,
VAR15->VAR31, VAR15->VAR32,
VAR15->VAR33, VAR15->VAR34,
VAR21);
if (strlen(VAR22) < VAR35 || VAR16 == VAR12)
return strcpy(VAR16, VAR22);
else {
VAR23 = VAR36;
VAR23 = VAR24;
return NULL;
}
}