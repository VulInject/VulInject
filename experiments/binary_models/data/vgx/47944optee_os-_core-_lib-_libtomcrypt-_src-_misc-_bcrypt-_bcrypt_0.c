int FUN1(const          void *VAR1, unsigned long VAR2,
const unsigned char *VAR3,   unsigned long VAR4,
unsigned int  VAR5,            int VAR6,
unsigned char *VAR7,    unsigned long *VAR8)
{
int VAR9;
ulong32 VAR10;
unsigned long VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
unsigned char *VAR20[3], VAR21[4];
unsigned char *VAR22;

FUN2(VAR1 != NULL);
FUN2(VAR3   != NULL);
FUN2(VAR7    != NULL);
FUN2(VAR8 != NULL);

if ((VAR2 == 0) || (VAR4 == 0) || (*VAR8 == 0)) {
return VAR23;
}

if ((VAR9 = FUN3(VAR6)) != VAR24) {
return VAR9;
}

if (VAR5 == 0) {
VAR19 = VAR25;
} else {
VAR19 = VAR5;
}

VAR20[0]      = FUN4(VAR26 * 3);
VAR22 = FUN4(VAR26);
if (VAR20[0] == NULL || VAR22 == NULL) {
if (VAR22 != NULL) {
FUN5(VAR22);
}
if (VAR20[0] != NULL) {
FUN5(VAR20[0]);
}
return VAR27;
}

VAR20[1] = VAR20[0] + VAR26;
VAR20[2] = VAR20[1] + VAR26;

VAR16 = (*VAR8 + VAR28 - 1) / VAR28;
VAR17 = (*VAR8 + VAR16 - 1) / VAR16;

VAR15 = VAR26;
if ((VAR9 = FUN6(VAR6, (unsigned char*)VAR1, VAR2, VAR22, &VAR15)) != VAR24) {
goto VAR29;
}

VAR11   = *VAR8;
VAR10  = 0;
while (VAR11 != 0) {

++VAR10;
FUN7(VAR10, VAR21);


FUN8(VAR20[0], VAR26*2);

VAR13 = VAR26;
if ((VAR9 = FUN9(VAR6, VAR20[0], &VAR13,
VAR3, VAR4,
VAR21, 4uL,
VAR30)) != VAR24) {
goto VAR29;
}
VAR14 = VAR26;
if ((VAR9 = FUN10(VAR22, VAR15, VAR20[0], VAR13, VAR20[1], &VAR14)) != VAR24) {
goto VAR29;
}
FUN11(VAR20[2], VAR20[1], VAR14);


for (VAR12 = 1; VAR12 < VAR19; ++VAR12) {
VAR13 = VAR26;
if ((VAR9 = FUN6(VAR6, VAR20[1], VAR14, VAR20[0], &VAR13)) != VAR24) {
goto VAR29;
}
VAR14 = VAR26;
if ((VAR9 = FUN10(VAR22, VAR15, VAR20[0], VAR13, VAR20[1], &VAR14)) != VAR24) {
goto VAR29;
}
for (VAR13 = 0; VAR13 < VAR14; VAR13++) {
VAR20[2][VAR13] ^= VAR20[1][VAR13];
}
}


VAR17 = FUN12(VAR17, VAR11);
for (VAR14 = 0; VAR14 < VAR17; ++VAR14) {
VAR18 = VAR14 * VAR16 + (VAR10 - 1);
if (VAR18 >= *VAR8)
break;
VAR7[VAR18] = VAR20[2][VAR14];
}
VAR11 -= VAR14;
}

VAR9 = VAR24;
VAR29:
FUN8(VAR20[0], VAR26*3);
FUN8(VAR22, VAR26);

FUN5(VAR22);
FUN5(VAR20[0]);

return VAR9;
}