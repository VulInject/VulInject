VAR1 FUN1(VAR2 *VAR3) {
struct VAR4 *VAR5 = NULL;
struct VAR6 *VAR7 = NULL;
VAR8 *VAR9 = NULL, *VAR10 = NULL;
char *VAR11 = VAR3->argv[0];
int VAR12 = VAR13;

if (VAR11 == NULL) {
return FUN2(VAR3);
}

if (FUN3(VAR3->VAR14) < 0) {
return FUN2(VAR3);
}

if (FUN4(VAR3->VAR14) < 0) {
return FUN2(VAR3);
}


if (VAR3->argv[1] != NULL) {
VAR9 = (VAR8 *) VAR3->argv[1];
}

if (VAR3->argv[2] != NULL) {
VAR10 = (VAR8 *) VAR3->argv[2];
}


VAR5 = FUN5(VAR3->VAR14, VAR11);
if (VAR5 == NULL) {
return FUN2(VAR3);
}


if (VAR9 != NULL) {
*((VAR15 *) FUN6(VAR9)) = VAR5->VAR16;
}

if (VAR10 != NULL) {
VAR7 = FUN7(VAR3->VAR14, VAR5->VAR16);

if (VAR7 != NULL) {
*((char **) FUN6(VAR10)) = FUN8(VAR17.VAR18, VAR7->VAR19);
}
}

(void) FUN4(VAR3->VAR14);


VAR7 = FUN9(VAR3->VAR14, VAR12, NULL);
while (VAR7 != NULL &&
VAR7->VAR20) {
char **VAR21 = NULL;

FUN10();


for (VAR21 = VAR7->VAR20; *VAR21; VAR21++) {


if (strcmp(*VAR21, VAR5->VAR22) == 0) {


if (VAR9 != NULL) {
*((VAR15 *) FUN6(VAR9)) = VAR7->VAR23;
}

if (VAR10 != NULL) {
*((char **) FUN6(VAR10)) = FUN8(VAR17.VAR18, VAR7->VAR19);
}
}
}

VAR7 = FUN9(VAR3->VAR14, VAR12, NULL);
}

if (VAR9 != NULL &&
VAR9->VAR24 > 0) {
return FUN11(VAR3, (void *) &VAR9->VAR24);
}

if (VAR10 != NULL &&
VAR10->VAR24 > 0) {
return FUN11(VAR3, (void *) &VAR10->VAR24);
}

return FUN2(VAR3);
}