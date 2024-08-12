static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5,
VAR3 *VAR6, VAR3 *VAR7, int VAR8, int VAR9)
{
int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;

switch (VAR5) {
case VAR16:
memcpy(VAR4, VAR6, VAR8);
break;
case VAR17:
for (VAR10 = 0; VAR10 < VAR9; VAR10++)
VAR4[VAR10] = VAR6[VAR10];
if (VAR9 == 4) {
VAR11 = *(int *)VAR4;
for (; VAR10 < VAR8; VAR10 += VAR9) {
int VAR18 = *(int *)(VAR6 + VAR10);
VAR11 = ((VAR18 & 0x7f7f7f7f) + (VAR11 & 0x7f7f7f7f)) ^ ((VAR18 ^ VAR11) & 0x80808080);
*(int *)(VAR4 + VAR10) = VAR11;
}
} else {
FUN2(VAR19);
}
break;
case VAR20:
VAR2->FUN3(VAR4, VAR6, VAR7, VAR8);
break;
case VAR21:
for (VAR10 = 0; VAR10 < VAR9; VAR10++) {
VAR11      = (VAR7[VAR10] >> 1);
VAR4[VAR10] = VAR11 + VAR6[VAR10];
}
FUN2(VAR22);
break;
case VAR23:
for (VAR10 = 0; VAR10 < VAR9; VAR10++) {
VAR11      = VAR7[VAR10];
VAR4[VAR10] = VAR11 + VAR6[VAR10];
}
if (VAR9 > 2 && VAR8 > 4) {

int VAR24 = VAR9 == 4 ? VAR8 : VAR8 - 3;
VAR2->FUN4(VAR4 + VAR10, VAR6 + VAR10, VAR7 + VAR10, VAR24 - VAR10, VAR9);
VAR10 = VAR24;
}
FUN5(VAR4 + VAR10, VAR6 + VAR10, VAR7 + VAR10, VAR8 - VAR10, VAR9);
break;
}
}