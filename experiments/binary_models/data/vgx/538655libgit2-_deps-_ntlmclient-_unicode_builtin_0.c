static inline bool FUN1(
char **VAR1,
VAR2 *VAR3,
VAR4 *VAR5,
const char *VAR6,
size_t VAR7,
unicode_builtin_encoding_direction VAR8)
{
const char *VAR9, *VAR10;
char *VAR11, *VAR12, *VAR13, *VAR14;
size_t VAR15, VAR16;
bool VAR17 = false;
ConversionResult VAR18;

*VAR1 = NULL;
*VAR3 = 0;

VAR9 = VAR6;
VAR10 = VAR9 + VAR7;


if (VAR8 == VAR19)
VAR15 = (VAR7 * 2 + 2);
else
VAR15 = (VAR7 / 2 + 1);


VAR15 = (VAR15 + 7) & ~7;

if ((VAR11 = malloc(VAR15)) == NULL) {
FUN2(VAR5, "");
return false;
}

VAR12 = VAR11;
VAR13 = VAR12 + VAR15;


if (VAR8 == VAR20)
VAR13--;

while (true) {
if (VAR8 == VAR19)
VAR18 = FUN3(
(const VAR21 **)&VAR9, (VAR21 *)VAR10,
(VAR22 **)&VAR12, (VAR22 *)VAR13, VAR23);
else
VAR18 = FUN4(
(const VAR22 **)&VAR9, (VAR22 *)VAR10,
(VAR21 **)&VAR12, (VAR21 *)VAR13, VAR24);

switch (VAR18) {
case VAR25:
VAR17 = true;
goto VAR26;
case VAR27:
FUN2(VAR5,
"");
goto VAR26;
case VAR28:
break;
case VAR29:
FUN2(VAR5,
"");
goto VAR26;
default:
FUN2(VAR5,
"");
goto VAR26;
}


VAR15 = ((((VAR15 << 1) - (VAR15 >> 1)) + 7) & ~7);

if (VAR15 > VAR30) {
FUN2(VAR5, "");
goto VAR26;
}

if ((VAR14 = realloc(VAR11, VAR15)) == NULL) {
FUN2(VAR5, "");
goto VAR26;
}

VAR16 = VAR12 - VAR11;

VAR11 = VAR14;
VAR12 = VAR14 + VAR16;
VAR13 = VAR11 + VAR15;


VAR13 -= (VAR8 == VAR19) ? 2 : 1;
}

VAR26:
if (!VAR17) {
free(VAR11);
return false;
}

VAR16 = (VAR12 - VAR11);


VAR11[VAR16] = '';

if (VAR8 == VAR19)
VAR11[VAR16+1] = '';

*VAR1 = VAR11;
*VAR3 = VAR16;
return true;
}