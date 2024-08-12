VAR1 *FUN1(char *VAR2, int VAR3, int VAR4) {
VAR1 **VAR5, *VAR6;
stringlist_t VAR7;
struct stat VAR8;
int VAR9;


FUN2(&VAR7, 32);
if (VAR3) {
VAR10 *VAR11 = FUN3(VAR2);
struct VAR12 *VAR13;
if (!VAR11) {
FUN4("", VAR2, strerror(VAR14));
return NULL;
}
while ((VAR13 = FUN5(VAR11)) != NULL) {
char VAR15[VAR16];
snprintf(VAR15, VAR16 - 1, "", VAR2, VAR13->VAR17);
VAR15[VAR16 - 1] = '';

if (FUN6(VAR15, &VAR8)) {
FUN4("", VAR15, strerror(VAR14));
continue;
}
if (!FUN7(VAR8.VAR18)) continue;


if (VAR13->VAR17[0] == '') continue;

FUN8(&VAR7, VAR15);
}
FUN9(VAR11);
} else {
FUN8(&VAR7, VAR2);
}

VAR6 = NULL;
VAR5 = &VAR6;
for (VAR9 = 0; VAR9 < VAR7.VAR19; VAR9++) {
int VAR20;

*VAR5 = (VAR1 *)malloc(sizeof(VAR1));
if (!*VAR5) {
FUN4("", VAR21, VAR22, strerror(VAR14));
return NULL;
}
memset((void *)*VAR5, 0, sizeof(VAR1));
(*VAR5)->VAR23 = NULL;
(*VAR5)->VAR2 = VAR7.VAR24[VAR9];
(*VAR5)->VAR4 = VAR4;

VAR20 = FUN10((*VAR5)->VAR2, &(*VAR5)->VAR25, VAR26);
switch (VAR20) {
case VAR27:
FUN11("", (*VAR5)->VAR2);
(*VAR5)->VAR4 = 1;  
break;
case VAR28:
break;
case VAR29:  
if (VAR4 == 0) {
FUN11("", (*VAR5)->VAR2);
(*VAR5)->VAR4 = 1;
}  
break;
default:
FUN12(250);
}

(*VAR5)->VAR30 = FUN13(&((*VAR5)->VAR31), (*VAR5)->VAR2);
if ((*VAR5)->VAR30 == VAR32) {
FUN4("");
FUN12(250);
}

VAR5 = &(*VAR5)->VAR23;
}

return VAR6;

}