static VAR1 *FUN1(VAR2 *VAR3) {
VAR4 *VAR5 = FUN2(VAR6, VAR7, sizeof(VAR8), 256);
VAR4 *VAR9 = FUN2(VAR6, VAR7, sizeof(char *), 256);
VAR1 *VAR10 = NULL;
char VAR11[VAR12];
int VAR13, VAR14 = VAR6, VAR15 = VAR6;

while (fgets(VAR11, sizeof(VAR11), VAR3)) {
char *VAR16 = strchr(VAR11, ''), *VAR17, *VAR18 = NULL;
if (VAR16 == NULL) {

FUN3(FUN4(""), VAR5->VAR19, FUN5(VAR11));



continue;
}
*VAR16++ = '';

FUN5(VAR11);

FUN5(VAR16);


VAR17 = strchr(VAR16, '');
if (VAR17 != NULL) {
*VAR17++ = '';
FUN5(VAR17);
}


VAR13 = FUN6((VAR17 != NULL) ? VAR17 : VAR11, VAR20, &VAR21);
if (VAR16[0] != '') {



VAR18 = copy(VAR16);
VAR14 = VAR7;
}

if (VAR13 != -1 && VAR5->VAR19 < 256) {

VAR15 = VAR7;
}


FUN7(VAR5, VAR13);
FUN7(VAR9, VAR18);
}

if (VAR5->VAR19 > 0) {

char *VAR22 = FUN8(FUN4(""), "", FUN4(""));
if (VAR22 != NULL) {
if (VAR22[0] == '') {

free(VAR22);
VAR22 = NULL;
} else {
VAR10 = calloc(1, sizeof(VAR1));
VAR10->VAR18 = VAR22;


VAR10->VAR23 = (VAR5->VAR19 < 256) ? 256 : VAR5->VAR19;
VAR10->VAR24 = malloc(VAR10->VAR23 * sizeof(VAR8));
memcpy(VAR10->VAR24, VAR5->VAR25, VAR5->VAR19 * sizeof(VAR8));
if (VAR10->VAR23 > VAR5->VAR19) {

memset(VAR10->VAR24 + VAR5->VAR19, -1, sizeof(VAR8) * (VAR5->VAR19 - VAR10->VAR23));
}
if (VAR14) {
VAR10->VAR26 = calloc(VAR10->VAR23, sizeof(char *));
memcpy(VAR10->VAR26, VAR9->VAR25, VAR9->VAR19 * sizeof(char *));
}

VAR10->VAR27 = VAR7;
VAR10->VAR15 = VAR15;
if (VAR5->VAR19 < 256) {
VAR10->VAR28 = VAR7;
} else {
VAR10->VAR29 = VAR7;
}
}
}
}

FUN9(VAR5, VAR7);
FUN9(VAR9, VAR7);
return VAR10;
}