int
FUN1(VAR1 *VAR2, const char *VAR3,
char *VAR4[], int VAR5)
{
char *VAR6 = "";		
int VAR7 = 0;
char VAR8[VAR9];
VAR10 *VAR11;



if (VAR2->VAR12 > 1)
(void) fprintf(VAR13,
""%VAR14\"",
(void *)VAR2, VAR3, VAR5);
else if (VAR2->VAR12)
VAR6 = "";


if ((VAR11 = FUN2(VAR2, VAR3)) == NULL) {

if (VAR2->VAR12) {
int VAR15 = VAR16;


if (VAR16 == VAR17)
(void) fprintf(VAR13,
"",
VAR6);
else if (VAR16 == VAR18)
(void) fprintf(VAR13,
"",
VAR6);
else
(void) fprintf(VAR13,
"",
VAR6, VAR15);
VAR16 = VAR15;
}
return (-1);
}

FUN3(VAR2->VAR19);

while (fgets(VAR8, VAR9, VAR2->VAR19) != NULL) {
char *VAR20;
VAR10 *VAR21;
char *VAR22;
char *VAR23;
int VAR24;

VAR7++;
if (*VAR8 == '' || *VAR8 == '')
continue;


if (FUN4(VAR8, VAR25, sizeof (VAR25) - 1) == 0)
continue;

if ((VAR20 = strchr(VAR8, '')) == NULL)
continue;	

*VAR20++ = '';


if ((VAR21 = FUN5(VAR20, VAR26)) == NULL) {

if (VAR16 == VAR17) {
FUN6(VAR11);
if (VAR2->VAR12)
(void) fprintf(VAR13,
"",
VAR6);
VAR16 = VAR17;
return (-1);
}

continue;
}

if (FUN7(VAR21, VAR11)) {
FUN6(VAR21);
continue;
}


FUN6(VAR21);
FUN6(VAR11);
VAR22 = VAR8;
VAR24 = 0;
for (;;) {
while (*VAR22 && FUN8(*VAR22))
VAR22++;
if (*VAR22 == '') {

VAR4[VAR24] = NULL;
return (0);
}
if (VAR24 >= VAR5 - 1) {
if (VAR2->VAR12)
(void) fprintf(VAR13,
"",
VAR6, VAR5);
VAR16 = VAR17;
return (-1);
}
for (VAR23 = VAR22; *VAR23 && !FUN8(*VAR23); VAR23++)
;
if (*VAR23)
*VAR23++ = '';
if ((VAR4[VAR24++] = strdup(VAR22)) == NULL) {
if (VAR2->VAR12)
(void) fprintf(VAR13,
"", VAR6);
VAR16 = VAR17;
return (-1);
}
VAR22 = VAR23;
}
}

FUN6(VAR11);
if (VAR2->VAR12)
(void) fprintf(VAR13, "", VAR6);
VAR16 = VAR27;
return (-1);
}