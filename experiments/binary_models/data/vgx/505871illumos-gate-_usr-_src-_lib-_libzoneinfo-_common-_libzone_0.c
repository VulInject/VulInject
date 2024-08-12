int
FUN1(char *VAR1, char *VAR2)
{
VAR3 *VAR4, *VAR5;	
char *VAR6, *VAR7;	
char VAR8[1024];
int VAR9 = 0, VAR10, VAR11;
char *VAR12;
struct stat VAR13;
char VAR14[VAR15];
const char *VAR16;
int VAR17, VAR18;

if (VAR1 == NULL || VAR2 == NULL)
return (-1);

if (strchr(VAR1, '')) {
VAR16 = VAR19;
} else {
VAR16 = VAR20;
}

if ((VAR10 = snprintf(VAR14, sizeof (VAR14), "", VAR2, VAR21)) >=
sizeof (VAR14)) {
VAR22 = VAR23;
return (-1);
} else if (VAR10 < 0) {
return (-1);
}


VAR12 = VAR14;
if (FUN2(&VAR12) == -1)
return (-1);
if ((VAR6 = strdup(VAR12)) == NULL) {
VAR22 = VAR24;
return (-1);
}
FUN3(VAR6);
if ((VAR17 = strlen(VAR6)) == 0) {
(void) strcpy(VAR6, "");
VAR17 = 1;
}

if ((VAR7 = malloc(VAR17 + VAR25 + 1)) == NULL) {
free(VAR6);
VAR22 = VAR24;
return (-1);
}
(void) strcpy(VAR7, VAR6);
(void) strcpy(VAR7 + VAR17, VAR26);
free(VAR6);
if ((VAR18 = mkstemp(VAR7)) == -1) {
free(VAR7);
return (-1);
}
if ((VAR5 = FUN4(VAR18, "")) == NULL) {
VAR11 = VAR22;
(void) close(VAR18);
free(VAR7);
VAR22 = VAR11;
return (-1);
}


if (FUN5(VAR12, &VAR13) == 0) {
if (FUN6(FUN7(VAR5), VAR13.VAR27) == -1) {
VAR11 = VAR22;
(void) fclose(VAR5);
(void) unlink(VAR7);
free(VAR7);
VAR22 = VAR11;
return (-1);
}
if (FUN8(FUN7(VAR5), VAR13.VAR28, VAR13.VAR29) == -1) {
VAR11 = VAR22;
(void) fclose(VAR5);
(void) unlink(VAR7);
free(VAR7);
VAR22 = VAR11;
return (-1);
}
} else if (VAR22 != VAR30) {
VAR11 = VAR22;
(void) fclose(VAR5);
(void) unlink(VAR7);
free(VAR7);
VAR22 = VAR11;
return (-1);
}

if ((VAR4 = fopen(VAR14, "")) != NULL) {
while (fgets(VAR8, sizeof (VAR8), VAR4) != NULL) {
if (!VAR9 && (FUN9(VAR8, "", 3) == 0)) {
VAR10 = snprintf(VAR8, sizeof (VAR8), VAR16,
VAR1);
if ((VAR10 >= sizeof (VAR8)) || (VAR10 < 0)) {
if (VAR10 >= sizeof (VAR8))
VAR11 = VAR31;
(void) fclose(VAR5);
(void) fclose(VAR4);
(void) unlink(VAR7);
free(VAR7);
VAR22 = VAR11;
return (-1);
}
VAR9 = 1;
}
if (fputs(VAR8, VAR5) == VAR32) {
VAR11 = VAR22;
(void) fclose(VAR5);
(void) fclose(VAR4);
(void) unlink(VAR7);
free(VAR7);
VAR22 = VAR11;
return (-1);
}
}
(void) fclose(VAR4);

} else if (VAR22 != VAR30) {
VAR11 = VAR22;
(void) fclose(VAR5);
(void) unlink(VAR7);
free(VAR7);
VAR22 = VAR11;
return (-1);
}


if (!VAR9 &&
(fprintf(VAR5, VAR16, VAR1) == VAR32)) {
VAR11 = VAR22;
(void) fclose(VAR5);
(void) unlink(VAR7);
free(VAR7);
VAR22 = VAR11;
return (-1);
}

if (FUN10(FUN7(VAR5))) {
VAR11 = VAR22;
(void) unlink(VAR7);
free(VAR7);
VAR22 = VAR11;
return (-1);
}

(void) fclose(VAR5);
if (FUN11(VAR7, VAR12) != 0) {
VAR11 = VAR22;
(void) unlink(VAR7);
free(VAR7);
VAR22 = VAR11;
return (-1);
} else {
free(VAR7);
return (0);
}
}