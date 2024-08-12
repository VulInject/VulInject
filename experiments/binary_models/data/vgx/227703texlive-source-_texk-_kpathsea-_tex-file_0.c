FUN1 (kpathsea VAR1, const_string VAR2,
kpse_file_format_type VAR3,
boolean VAR4, boolean VAR5)
{
char VAR6[512], VAR7[512];
VAR8 *VAR9, VAR10;
VAR11 *VAR12;
unsigned VAR13;
unsigned VAR14 = 0;
boolean VAR15 = false;
string VAR16 = NULL;
string VAR17 = NULL;
boolean VAR18 = (VAR3 == VAR19
|| VAR3 == VAR20
|| VAR3 == VAR21
|| VAR3 == VAR22);
VAR8 *VAR23 = NULL;


assert (VAR2);

if (VAR24.VAR25 == NULL)
FUN2 (VAR1, VAR3);

if (FUN3 (VAR26))
FUN4 ("",
VAR2, VAR24.VAR27, VAR24.VAR28);


VAR10 = FUN5 (VAR1, VAR2);

VAR16 = strrchr (VAR10, '');
if (VAR16) {
string VAR29 = strchr (VAR16, VAR30);
if (VAR29) {
VAR16 = NULL;
}
}


VAR14 = strlen (VAR10);
if (VAR24.VAR31) {
for (VAR12 = VAR24.VAR31; !VAR15 && *VAR12; VAR12++) {
unsigned VAR32 = strlen (*VAR12);
VAR15 = (VAR14 >= VAR32
&& FUN6 (*VAR12, VAR10 + VAR14 - VAR32));
}
}
if (!VAR15 && VAR24.VAR33) {
for (VAR12 = VAR24.VAR33; !VAR15 && *VAR12; VAR12++) {
unsigned VAR32 = strlen (*VAR12);
VAR15 = (VAR14 >= VAR32
&& FUN6 (*VAR12, VAR10 + VAR14 - VAR32));
}
}


VAR13 = 0;
VAR9 = FUN7 (VAR8);
VAR17
= FUN8 (VAR1, "");

if (VAR16 && !FUN9 (VAR17)) {
FUN10 (VAR1, &VAR9, &VAR13, VAR3, VAR10, VAR18,
VAR15, VAR16);
FUN11 (VAR1, &VAR9, &VAR13, VAR3, VAR10, VAR18,
VAR15);
} else {
FUN11 (VAR1, &VAR9, &VAR13, VAR3, VAR10, VAR18,
VAR15);
FUN10 (VAR1, &VAR9, &VAR13, VAR3, VAR10, VAR18,
VAR15, VAR16);
}


VAR9[VAR13] = NULL;

if (VAR17) {
free (VAR17);
}


VAR23 = FUN12 (VAR1, VAR24.VAR25,
VAR9, false, VAR5);


if (! *VAR23 && VAR4) {
for (VAR13 = 0; VAR9[VAR13]; VAR13++)
free (VAR9[VAR13]);
VAR13 = 0;

if (!VAR15 && VAR24.VAR34) {
for (VAR12 = VAR24.VAR31; *VAR12; VAR12++)
VAR9[VAR13++] = FUN13 (VAR10, *VAR12);
}
if (VAR15 || !VAR24.VAR34) {
VAR9[VAR13++] = xstrdup (VAR10);
}
VAR9[VAR13] = NULL;
VAR23 = FUN12 (VAR1, VAR24.VAR25,
VAR9, true, VAR5);
}


for (VAR13 = 0; VAR9[VAR13]; VAR13++)
free (VAR9[VAR13]);
free (VAR9);


if (! *VAR23 && VAR4) {
VAR23 = FUN14 (2, VAR8);
VAR23[0] = FUN15 (VAR1, VAR3, VAR10);
if (VAR23[0]) {
VAR23[1] = NULL;
}
}

free (VAR10);
if (VAR23 && *VAR23) {
if (VAR5) {
for (VAR13 = 0; VAR23[VAR13] != NULL; VAR13++) {
strcpy (VAR7, VAR23[VAR13]);
if (FUN16 (VAR1, VAR6, VAR7, 500)) {
if (strlen (VAR6) > strlen (VAR23[VAR13]))
VAR23[VAR13] = realloc (VAR23[VAR13], strlen (VAR6) + 1);
strcpy (VAR23[VAR13], VAR6);
}
}
} else {
strcpy (VAR7, *VAR23);
if (FUN16 (VAR1, VAR6, VAR7, 500)) {
if (strlen (VAR6) > strlen (*VAR23))
*VAR23 = realloc (*VAR23, strlen (VAR6) + 1);
strcpy (*VAR23, VAR6);
}
} 
}
return VAR23;
}