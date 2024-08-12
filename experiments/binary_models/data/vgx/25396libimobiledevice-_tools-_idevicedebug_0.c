int main(int argc, char *argv[])
{
int VAR1 = -1;
idevice_t VAR2 = NULL;
idevice_error_t VAR3 = VAR4;
instproxy_client_t VAR5 = NULL;
debugserver_client_t VAR6 = NULL;
int VAR7;
int VAR8 = VAR9;
const char* VAR10 = NULL;
int VAR11 = 0;
int VAR12 = 0;
const char* VAR13 = NULL;
char* VAR14 = NULL;
char* VAR15 = NULL;
char **VAR16 = NULL;
char** VAR17 = NULL;
int VAR18 = 0;
int VAR19 = 0;
char* VAR20 = NULL;
debugserver_command_t VAR21 = NULL;
debugserver_error_t VAR22 = VAR23;

int VAR24 = 0;
const struct option VAR25[] = {
{ "", VAR26, NULL, '' },
{ "", VAR26, NULL, '' },
{ "", VAR27, NULL, '' },
{ "", VAR26, NULL, '' },
{ "", VAR26, NULL, 1 },
{ "", VAR27, NULL, '' },
{ "", VAR26, NULL, '' },
{ NULL, 0, NULL, 0 }
};


signal(VAR28, VAR29);
signal(VAR30, VAR29);
signal(VAR31, VAR29);
signal(VAR32, VAR33);

while ((VAR24 = getopt_long(argc, argv, "", VAR25, NULL)) != -1) {
switch (VAR24) {
case '':
VAR34++;
if (VAR34 > 1) {
FUN1(VAR34-1);
}
break;
case '':
if (!*VAR35) {
fprintf(VAR36, "");
FUN2(argc, argv, 1);
return 2;
}
VAR10 = VAR35;
break;
case '':
VAR11 = 1;
break;
case 1:
VAR12 = 1;
break;
case '':
if (!*VAR35 || strchr(VAR35, '') == NULL) {
fprintf(VAR36, "");
FUN2(argc, argv, 1);
VAR1 = 2;
goto VAR37;
}

if (!VAR16)
VAR16 = malloc((VAR19 + 1) * sizeof(char*));
else
VAR16 = realloc(VAR17, (VAR19 + 1) * sizeof(char*));
VAR16[VAR19++] = strdup(VAR35);
VAR17 = VAR16;
break;
case '':
FUN2(argc, argv, 0);
VAR1 = 0;
goto VAR37;
break;
case '':
FUN3("", VAR38, VAR39);
VAR1 = 0;
goto VAR37;
break;
}
}
argc -= VAR40;
argv += VAR40;

if (argc < 1) {
fprintf(VAR36, "");
FUN2(argc+VAR40, argv-VAR40, 1);
return 2;
}

if (!strcmp(argv[0], "")) {
VAR8 = VAR41;
if (argc < 2) {

fprintf(VAR36, "");
FUN2(argc+VAR40, argv-VAR40, 1);
VAR1 = 2;
goto VAR37;
}

VAR13 = argv[1];
VAR7 = 1;
} else if (!strcmp(argv[0], "")) {
VAR8 = VAR42;
if (argc < 2) {

fprintf(VAR36, "");
FUN2(argc+VAR40, argv-VAR40, 1);
VAR1 = 2;
goto VAR37;
}

VAR13 = argv[1];
VAR7 = 1;
}


if (VAR8 == VAR9) {
fprintf(VAR36, "");
FUN2(argc+VAR40, argv-VAR40, 1);
VAR1 = 2;
goto VAR37;
}

if (VAR17) {
VAR16 = realloc(VAR17, (VAR19 + 1) * sizeof(char*));
VAR16[VAR19] = NULL;
VAR17 = VAR16;
}


VAR3 = FUN4(&VAR2, VAR10, (VAR11) ? VAR43 : VAR44);
if (VAR3 != VAR45) {
if (VAR10) {
FUN3("", VAR10);
} else {
FUN3("");
}
goto VAR37;
}


if (FUN5(VAR2, &VAR5, VAR38) != VAR46) {
fprintf(VAR36, "");
goto VAR37;
}

FUN6(VAR5, VAR13, &VAR14);
if (!VAR14) {
fprintf(VAR36, "", VAR13);
goto VAR37;
}

plist_t VAR47 = NULL;
FUN7(VAR5, VAR13, "", &VAR47);
FUN8(VAR5);
VAR5 = NULL;

if (VAR47 && (FUN9(VAR47) == VAR48)) {
FUN10(VAR47, &VAR15);
FUN11("", VAR15);
FUN12(VAR47);
} else {
FUN12(VAR47);
fprintf(VAR36, "", VAR13);
goto VAR37;
}


if (FUN13(VAR2, &VAR6, VAR38) != VAR49) {
fprintf(VAR36,
""
""
""
""
"");
goto VAR37;
}


if (FUN14(VAR6, VAR50, 250) != VAR49) {
fprintf(VAR36, "");
goto VAR37;
}


if (VAR34) {
FUN11("");
FUN15("", 0, NULL, &VAR21);
VAR22 = FUN16(VAR6, VAR21, &VAR20, NULL);
FUN17(VAR21);
VAR21 = NULL;
if (VAR20) {
if (FUN18(VAR20, "", 2) != 0) {
FUN19(VAR6, &VAR20, NULL);
goto VAR37;
}
free(VAR20);
VAR20 = NULL;
}
}


FUN11("");
char* VAR51[2] = { (char*)"", NULL};
FUN15("", 1, VAR51, &VAR21);
VAR22 = FUN16(VAR6, VAR21, &VAR20, NULL);
FUN17(VAR21);
VAR21 = NULL;
if (VAR20) {
if (FUN18(VAR20, "", 2) != 0) {
FUN19(VAR6, &VAR20, NULL);
goto VAR37;
}
free(VAR20);
VAR20 = NULL;
}


FUN11("");
char* VAR52[2] = {VAR15, NULL};
FUN15("", 1, VAR52, &VAR21);
VAR22 = FUN16(VAR6, VAR21, &VAR20, NULL);
FUN17(VAR21);
VAR21 = NULL;
if (VAR20) {
if (FUN18(VAR20, "", 2) != 0) {
FUN19(VAR6, &VAR20, NULL);
goto VAR37;
}
free(VAR20);
VAR20 = NULL;
}


if (VAR17) {
FUN11("");
for (VAR18 = 0; VAR18 < VAR19; VAR18++) {
FUN11("", VAR17[VAR18]);
FUN20(VAR6, VAR17[VAR18], NULL);
}
}


FUN11("");
VAR7++; 
int VAR53 = (argc - VAR7 + 2);
char **VAR54 = (char**)malloc(sizeof(char*) * VAR53);
VAR54[0] = VAR14;
FUN11("", 0, VAR54[0]);
VAR53 = 1;
while (VAR7 < argc && argv && argv[VAR7]) {
FUN11("", VAR53, argv[VAR7]);
VAR54[VAR53++] = argv[VAR7];
VAR7++;
}
VAR54[VAR53] = NULL;
FUN21(VAR6, VAR53, VAR54, NULL);
free(VAR54);


FUN11("");
FUN15("", 0, NULL, &VAR21);
VAR22 = FUN16(VAR6, VAR21, &VAR20, NULL);
FUN17(VAR21);
VAR21 = NULL;
if (VAR20) {
if (FUN18(VAR20, "", 2) != 0) {
FUN19(VAR6, &VAR20, NULL);
goto VAR37;
}
free(VAR20);
VAR20 = NULL;
}

if (VAR8 == VAR42) {
FUN15("", 0, NULL, &VAR21);
VAR22 = FUN16(VAR6, VAR21, &VAR20, NULL);
FUN17(VAR21);
VAR21 = NULL;
goto VAR37;
} else
if (VAR8 == VAR41) {
if (VAR12) {
FUN11("");
FUN15("", 0, NULL, &VAR21);
VAR22 = FUN16(VAR6, VAR21, &VAR20, NULL);
FUN17(VAR21);
VAR21 = NULL;

VAR1 = (VAR22 == VAR49) ? 0: -1;
goto VAR37;
}


FUN11("");
FUN15("", 0, NULL, &VAR21);
VAR22 = FUN16(VAR6, VAR21, &VAR20, NULL);
FUN17(VAR21);
VAR21 = NULL;
if (VAR20) {
if (FUN18(VAR20, "", 2) != 0) {
FUN19(VAR6, &VAR20, NULL);
goto VAR37;
}
free(VAR20);
VAR20 = NULL;
}


FUN11("");
FUN15("", 0, NULL, &VAR21);
VAR22 = FUN16(VAR6, VAR21, &VAR20, NULL);
FUN17(VAR21);
VAR21 = NULL;
FUN11("", VAR20);


FUN11("");
while (!VAR55) {
if (VAR22 != VAR49) {
FUN11("", VAR22);
break;
}

if (VAR20) {
FUN11("", VAR20);
if (FUN18(VAR20, "", 2) != 0) {
VAR22 = FUN19(VAR6, &VAR20, &VAR1);
if (VAR22 != VAR49) {
FUN11("", VAR22, VAR20);
break;
}
}
}
if (VAR1 >= 0) {
goto VAR37;
}

VAR22 = FUN22(VAR6, &VAR20, NULL);
}


if (FUN14(VAR6, NULL, 5000) != VAR49) {
fprintf(VAR36, "");
goto VAR37;
}


FUN15("", 0, NULL, &VAR21);
VAR22 = FUN16(VAR6, VAR21, &VAR20, NULL);
FUN17(VAR21);
VAR21 = NULL;
if (VAR20) {
if (FUN18(VAR20, "", 2) != 0) {
FUN19(VAR6, &VAR20, NULL);
}
free(VAR20);
VAR20 = NULL;
}


FUN11("");
FUN15("", 0, NULL, &VAR21);
VAR22 = FUN16(VAR6, VAR21, &VAR20, NULL);
FUN17(VAR21);
VAR21 = NULL;
if (VAR20) {
if (FUN18(VAR20, "", 2) != 0) {
FUN19(VAR6, &VAR20, NULL);
}
free(VAR20);
VAR20 = NULL;
}

if (VAR1 < 0) {
VAR1 = (VAR22 == VAR49) ? 0: -1;
}
}

VAR37:

if (VAR17) {
for (VAR18 = 0; VAR18 < VAR19; VAR18++) {
free(VAR17[VAR18]);
}
free(VAR17);
}

if (VAR15)
free(VAR15);

if (VAR14)
free(VAR14);

if (VAR20)
free(VAR20);

if (VAR6)
FUN23(VAR6);

if (VAR2)
FUN24(VAR2);

return VAR1;
}