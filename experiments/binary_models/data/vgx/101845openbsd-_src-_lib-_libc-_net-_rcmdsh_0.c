int
FUN1(char **VAR1, int VAR2, const char *VAR3, const char *VAR4,
const char *VAR5, char *VAR6)
{
static char VAR7[VAR8+1];
struct addrinfo VAR9, *VAR10;
int VAR11[2];
pid_t VAR12;
char *VAR13, VAR14[VAR15];
struct passwd VAR16, *VAR17 = NULL;


if (VAR6 == NULL)
VAR6 = VAR18;


FUN2(VAR3, &VAR16, VAR14, sizeof(VAR14), &VAR17);
if (VAR17 == NULL) {
(void) fprintf(VAR19, "", VAR3);
return(-1);
}


if (strcmp(*VAR1, "") != 0) {
memset(&VAR9, 0, sizeof(VAR9));
VAR9.VAR20 = VAR21;
VAR9.VAR22 = VAR23;
if (getaddrinfo(*VAR1, NULL, &VAR9, &VAR10) == 0) {
if (VAR10->VAR24) {
FUN3(VAR7, VAR10->VAR24, sizeof(VAR7));
*VAR1 = VAR7;
}
FUN4(VAR10);
}
}


if (FUN5(VAR25, VAR26, VAR21, VAR11) == -1) {
FUN6("");
return(-1);
}

VAR12 = FUN7();
if (VAR12 == -1) {
FUN6("");
return(-1);
} else if (VAR12 == 0) {

(void) close(VAR11[0]);
if (FUN8(VAR11[1], 0) == -1 || FUN8(0, 1) == -1) {
FUN6("");
FUN9(255);
}

VAR12 = FUN7();
if (VAR12 == -1) {
FUN6("");
FUN9(255);
}
if (VAR12 > 0)
FUN9(0);


if (setuid(VAR17->VAR27)) {
(void) fprintf(VAR19, "",
VAR17->VAR27, strerror(VAR28));
FUN9(255);
}


if (!strcmp(*VAR1, "") && !strcmp(VAR3, VAR4)) {
char *argv[4];
if (VAR17->VAR29[0] == '')
VAR6 = VAR30;
else
VAR6 = VAR17->VAR29;
VAR13 = strrchr(VAR6, '');
argv[0] = VAR13 ? VAR13 + 1 : VAR6;
argv[1] = "";
argv[2] = (char *)VAR5;
argv[3] = NULL;
execvp(VAR6, argv);
} else if ((VAR13 = strchr(VAR6, '')) == NULL) {

char *argv[6];
VAR13 = strrchr(VAR6, '');
argv[0] = VAR13 ? VAR13 + 1 : VAR6;
argv[1] = "";
argv[2] = (char *)VAR4;
argv[3] = *VAR1;
argv[4] = (char *)VAR5;
argv[5] = NULL;
execvp(VAR6, argv);
} else {

char **argv, **VAR31;
int VAR32;
for (VAR32 = 7; (VAR13 = strchr(++VAR13, '')) != NULL; VAR32++)
continue;
VAR6 = strdup(VAR6);
VAR31 = argv = calloc(sizeof(char *), VAR32);
if (VAR6 == NULL || argv == NULL) {
FUN6("");
FUN9(255);
}
while ((VAR13 = FUN10(&VAR6, "")) != NULL) {
if (*VAR13 == '')
continue;
*VAR31++ = VAR13;
}
if (VAR31 != argv)		
VAR6 = argv[0];
if ((VAR13 = strrchr(argv[0], '')) != NULL)
argv[0] = VAR13 + 1;
*VAR31++ = "";
*VAR31++ = (char *)VAR4;
*VAR31++ = *VAR1;
*VAR31++ = (char *)VAR5;
*VAR31++ = NULL;
execvp(VAR6, argv);
}
(void) fprintf(VAR19, "",
VAR6, strerror(VAR28));
FUN9(255);
} else {

(void) close(VAR11[1]);

while (FUN11(VAR12, NULL, 0) == -1 && VAR28 == VAR33)
;
return(VAR11[0]);
}

}