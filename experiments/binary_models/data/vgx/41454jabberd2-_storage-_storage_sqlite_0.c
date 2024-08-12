static st_ret_t FUN1 (st_driver_t VAR1, const char *VAR2,
const char *VAR3, const char *VAR4,
VAR5 *VAR6) {

drvdata_t VAR7 = (VAR8) VAR1->private;
char *VAR9, *VAR10 = NULL;
unsigned int VAR11 = 0;
unsigned int VAR12 = 0;
int VAR13;
unsigned int VAR14 = 0;
os_object_t VAR15;
const char *VAR16;
os_type_t VAR17;
int VAR18;
char VAR19[128];

VAR20 *VAR21;
int VAR22;

if (VAR7->VAR23 != NULL) {
snprintf (VAR19, sizeof (VAR19), "", VAR7->VAR23, VAR2);
VAR2 = VAR19;
}

VAR9 = FUN2 (VAR1, VAR3, VAR4);

FUN3 (VAR10, VAR11, VAR12,
""""\"");
strcpy (&VAR10[VAR11], VAR9);
strcpy (&VAR10[strlen(VAR10)], ""VAR24-VAR25\"");
free (VAR9);

FUN4 (VAR26, "", VAR10);

VAR22 = FUN5 (VAR7->VAR27, VAR10, strlen (VAR10), &VAR21, NULL);
free (VAR10);
if (VAR22 != VAR28) {
return VAR29;
}

FUN6 (VAR1, VAR3, VAR4, VAR21, 1);

*VAR6 = FUN7 ();

do {

unsigned int VAR30;

VAR22 = FUN8 (VAR21);

if (VAR22 != VAR31) {
continue;
}

VAR15 = FUN9 (*VAR6);
VAR30 = FUN10 (VAR21);

for (VAR13 = 0; VAR13 < VAR30; VAR13++) {

const char *VAR32;
int VAR33;

VAR32 = FUN11 (VAR21, VAR13);

if (strcmp (VAR32, "") == 0) {
continue;
}

VAR33 = FUN12 (VAR21, VAR13);

if (VAR33 == VAR34) {
FUN4 (VAR26, "");
continue;
}

if (VAR33 == VAR35) {
if (!strcmp (FUN13 (VAR21, VAR13), "")) {
VAR17 = VAR36;
} else {
VAR17 = VAR37;
}

VAR18 = FUN14 (VAR21, VAR13);
FUN15 (VAR15, VAR32, &VAR18, VAR17);

} else if (VAR33 == VAR38) {
VAR17 = VAR39;

VAR16 = (const char*)FUN16 (VAR21, VAR13);
FUN15 (VAR15, VAR32, VAR16, VAR17);

} else {
FUN17 (VAR1->VAR40->VAR41,
VAR42,
"",
VAR32, VAR33);
}
}

VAR14++;

} while (VAR22 == VAR31);

FUN18 (VAR21);

if (VAR14 == 0) {
FUN19(*VAR6);
*VAR6 = NULL;
return VAR43;
}

return VAR44;
}