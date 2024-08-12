int main(int argc, char *argv[])
{
int VAR1 = VAR2;
unsigned VAR3, VAR4;
struct mbedtls_timing_hr_time VAR5;
unsigned long VAR6;

if (argc <= 1) {
FUN1(VAR7);
goto VAR8;
}

VAR9.VAR10 = NULL;
VAR9.VAR11 = VAR12;
VAR9.VAR13 = VAR14;

for (VAR3 = 1; VAR3 < (unsigned) argc; VAR3++) {
char *VAR15 = argv[VAR3];
char *VAR16 = NULL;

if (strcmp(VAR15, "") == 0) {
break;
}
if ((VAR16 = strchr(VAR15, '')) == NULL) {
break;
}
*VAR16++ = '';

for (VAR4 = 0; VAR15 + VAR4 < VAR16; VAR4++) {
if (argv[VAR3][VAR4] >= '' && argv[VAR3][VAR4] <= '') {
argv[VAR3][VAR4] |= 0x20;
}
}

if (strcmp(VAR15, "") == 0) {
VAR9.VAR11 = FUN2(VAR16);
} else if (strcmp(VAR15, "") == 0) {
VAR9.VAR11 = FUN2(VAR16) != 0;
} else {
FUN1("", VAR15);
FUN1(VAR7);
goto VAR8;
}
}

VAR9.VAR10 = (const char **) argv + VAR3;
if (*VAR9.VAR10 == 0) {
FUN1("");
goto VAR8;
}

FUN1("", argc - VAR3);
if (VAR9.VAR13) {
if (!FUN3(VAR9.VAR10)) {
goto VAR8;
}
FUN1("");
}

(void) FUN4(&VAR5, 1);
for (VAR3 = 1; VAR3 <= VAR9.VAR11; VAR3++) {
if (!FUN3(VAR9.VAR10)) {
goto VAR8;
}
FUN1("");
}
VAR6 = FUN4(&VAR5, 0);
FUN1("", VAR9.VAR11, VAR6);
VAR1 = VAR17;

VAR8:
FUN5(VAR1);
}