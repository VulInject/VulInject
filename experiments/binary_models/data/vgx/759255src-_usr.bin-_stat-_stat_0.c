void
FUN1(const struct VAR1 *VAR2, const char *VAR3,
const char *VAR4, int VAR5, int VAR6)
{
int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
char VAR13[VAR14 + 4 + 1];
const char *VAR15;
int VAR16, VAR17, VAR18;

VAR16 = 1;
while (*VAR4 != '') {


if (*VAR4 != VAR19) {
FUN2(VAR20, *VAR4, &VAR16);
VAR4++;
continue;
}


VAR15 = VAR4;
VAR4++;


switch (*VAR4) {
case VAR21:
FUN2(VAR20, '', &VAR16);
VAR4++;
continue;
case VAR22:
FUN2(VAR20, '', &VAR16);
VAR4++;
continue;
case VAR23:
FUN2(VAR20, '', &VAR16);
VAR4++;
continue;
case VAR24: {
char VAR25[12], *VAR26;

snprintf(VAR25, sizeof(VAR25), "", VAR5);
for (VAR26 = &VAR25[0]; *VAR26; VAR26++)
FUN2(VAR20, *VAR26, &VAR16);
VAR4++;
continue;
}
}


VAR7 = 0;
do {
if (*VAR4 == VAR27)
VAR7 |= VAR28;
else if (*VAR4 == VAR29)
VAR7 |= VAR30;
else if (*VAR4 == VAR31)
VAR7 |= VAR32;
else if (*VAR4 == VAR33)
VAR7 |= VAR34;
else if (*VAR4 == VAR35)
VAR7 |= VAR36;
else
break;
VAR4++;
} while (1);

VAR8 = -1;
if (FUN3((unsigned char)*VAR4)) {
VAR8 = 0;
while (FUN3((unsigned char)*VAR4)) {
VAR8 = (VAR8 * 10) + (*VAR4 - '');
VAR4++;
if (VAR8 < 0)
goto VAR37;
}
}

VAR9 = -1;
if (*VAR4 == VAR38) {
VAR4++;

VAR9 = 0;
while (FUN3((unsigned char)*VAR4)) {
VAR9 = (VAR9 * 10) + (*VAR4 - '');
VAR4++;
if (VAR9 < 0)
goto VAR37;
}
}

switch (*VAR4) {
FUN4(VAR10, VAR39,	VAR40);
FUN4(VAR10, VAR41,	VAR42);
FUN4(VAR10, VAR43,	VAR44);
FUN4(VAR10, VAR45,		VAR46);
FUN4(VAR10, VAR47,	VAR48);
FUN4(VAR10, VAR49,	VAR50);
default:
VAR10 = 0;
break;
}

switch (*VAR4) {
FUN5(VAR11, VAR51);
FUN5(VAR11, VAR52);
FUN5(VAR11, VAR53);
default:
VAR11 = 0;
break;
}

switch (*VAR4) {
FUN5(VAR12, VAR54);
FUN5(VAR12, VAR55);
FUN5(VAR12, VAR56);
FUN5(VAR12, VAR57);
FUN5(VAR12, VAR58);
FUN5(VAR12, VAR59);
FUN5(VAR12, VAR60);
FUN5(VAR12, VAR61);
FUN5(VAR12, VAR62);
FUN5(VAR12, VAR63);
FUN5(VAR12, VAR64);
FUN5(VAR12, VAR65);
FUN5(VAR12, VAR66);
FUN5(VAR12, VAR67);
FUN5(VAR12, VAR68);
FUN5(VAR12, VAR69);
FUN5(VAR12, VAR70);
FUN5(VAR12, VAR71);
FUN5(VAR12, VAR72);
FUN5(VAR12, VAR73);
default:
goto VAR37;
}

VAR17 = FUN6(VAR2, VAR3, VAR15, VAR4 - VAR15, VAR13,
sizeof(VAR13), VAR7, VAR8, VAR9, VAR10, VAR11, VAR12);

for (VAR18 = 0; VAR18 < VAR17 && VAR18 < sizeof(VAR13) - 1; VAR18++)
FUN2(VAR20, VAR13[VAR18], &VAR16);

continue;

VAR37:
FUN7(1, "",
(int)(VAR4 - VAR15 + 1), VAR15);
}

if (!VAR16 && !VAR6)
(void)fputc('', VAR20);
(void)FUN8(VAR20);
}