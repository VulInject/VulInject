int FUN1(VAR1 *VAR2, const VAR3 **VAR4,
const char *VAR5, void *VAR6,
unsigned int VAR7, unsigned int VAR8)
{
AVProbeData VAR9 = { VAR5 ? VAR5 : "" };
VAR10 *VAR11 = NULL;
int VAR12 = 0, VAR13, VAR14 = 0;
int VAR15 = 0;
int VAR16;

if (!VAR8)
VAR8 = VAR17;
else if (VAR8 < VAR18) {
FUN2(VAR6, VAR19,
"", VAR8, VAR18);
return FUN3(VAR20);
}

if (VAR7 >= VAR8)
return FUN3(VAR20);

if (VAR2->VAR21) {
VAR10 *VAR22 = NULL;
char *VAR23;
FUN4(VAR2, "", VAR24, &VAR22);
VAR9.VAR25 = (const char *)VAR22;
VAR23 = VAR9.VAR25 ? strchr(VAR9.VAR25, '') : NULL;
if (VAR23) {
*VAR23 = '';
}
}

for (VAR13 = VAR18; VAR13 <= VAR8 && !*VAR4;
VAR13 = FUN5(VAR13 << 1,
FUN6(VAR8, VAR13 + 1))) {
VAR15 = VAR13 < VAR8 ? VAR26 : 0;


if ((VAR12 = FUN7(&VAR11, VAR13 + VAR27)) < 0)
goto VAR28;
if ((VAR12 = FUN8(VAR2, VAR11 + VAR14,
VAR13 - VAR14)) < 0) {

if (VAR12 != VAR29)
goto VAR28;

VAR15 = 0;
VAR12   = 0;          
}
VAR14 += VAR12;
if (VAR14 < VAR7)
continue;
VAR9.VAR30 = VAR14 - VAR7;
VAR9.VAR11 = &VAR11[VAR7];

memset(VAR9.VAR11 + VAR9.VAR30, 0, VAR27);


*VAR4 = FUN9(&VAR9, 1, &VAR15);
if (*VAR4) {

if (VAR15 <= VAR26) {
FUN2(VAR6, VAR31,
""
"", (*VAR4)->VAR32, VAR15);
} else
FUN2(VAR6, VAR33,
"",
(*VAR4)->VAR32, VAR13, VAR15);
VAR34 *VAR35 = fopen("", "");
fprintf(VAR35, "", VAR13, (*VAR4)->VAR32, VAR15, VAR5);
fclose(VAR35);
}
}

if (!*VAR4)
VAR12 = VAR36;

VAR28:

VAR16 = FUN10(VAR2, &VAR11, VAR14);
if (VAR12 >= 0)
VAR12 = VAR16;

FUN11(&VAR9.VAR25);
return VAR12 < 0 ? VAR12 : VAR15;
}