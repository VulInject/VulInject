int
FUN1(unsigned short VAR1,
char * VAR2, int VAR3,
unsigned short * VAR4,
char * VAR5, int VAR6,
unsigned short * VAR7,
int * VAR8, char * VAR9, int VAR10,
unsigned int * VAR11,
VAR12 * VAR13, VAR12 * VAR14)
{
VAR15 *VAR16;
unsigned int VAR17;
char VAR18[VAR19];
char VAR20[VAR19];

snprintf(VAR18, sizeof(VAR18),
"", VAR1);

FUN2((""));
FUN3();

FUN4(VAR16, &VAR21, VAR22) {

if (VAR16->VAR23 != VAR24)
continue;

if (VAR16->VAR25 == 0)
continue;

strncpy(VAR20, VAR16->VAR9, VAR16->VAR25);
strtok(VAR20, "");
if (0 == strcmp(VAR20, VAR18)) {

if (VAR2 && (VAR2[0] != '')) {
if(FUN5(VAR26, &VAR16->VAR27, VAR2, VAR3) == NULL)
return -1;
}


if (VAR4)
*VAR4 = VAR16->VAR28;


if (VAR5) {
if(FUN5(VAR26, &VAR16->VAR29, VAR5, VAR6) == NULL)
return -1;
}


if (VAR7)
*VAR7 = VAR16->VAR30;

if (VAR8)
*VAR8 = VAR16->VAR8;

if (VAR11) {
int VAR31;
if (sscanf(VAR16->VAR9, VAR32, &VAR31, &VAR17) != 2) {
syslog(VAR33, "", VAR16->VAR9);
continue;
}

*VAR11 = VAR17;
}

if (VAR9)
strncpy(VAR9, VAR16->VAR9, VAR10);

if (VAR13 || VAR14) {
if (VAR13)
*VAR13 = VAR16->VAR13;
if (VAR14)
*VAR14 = VAR16->VAR14;
}

break;
}
}

FUN2((""));

return 0;
}