int FUN1(VAR1 * VAR2, int VAR3, int VAR4, int VAR5,
int VAR6, int VAR7, int VAR8, char *VAR9,
int VAR10, int VAR11, char *VAR12)
{
int VAR13, VAR14, VAR15, VAR16;
int VAR17[7] = { 0x3bc, 0x378, 0x278, 0x268, 0x27c, 0x26c, 0 };

VAR15 = VAR7;
VAR16 = VAR15 + 1;

if (!VAR18[0])
FUN2("");

if (VAR3) {
VAR15 = 0;
VAR16 = VAR19;
} else if ((VAR15 < 0) || (VAR15 >= VAR19) || (VAR4 <= 0) ||
(!VAR18[VAR15]) || (VAR6 < 0) ||
(VAR6 >= VAR18[VAR15]->VAR20)) {
FUN3("", VAR12);
return 0;
}

for (VAR13 = VAR15; VAR13 < VAR16; VAR13++) {
struct VAR21 *VAR22 = VAR18[VAR13];
if (!VAR22)
continue;

if (!FUN4(VAR22->VAR23))
continue;
VAR2->VAR22 = VAR22;
VAR2->private = 0;
if (VAR22->VAR24 && VAR22->FUN5(VAR2) < 0) {
VAR2->VAR22 = NULL;
FUN6(VAR22->VAR23);
continue;
}
if (VAR8 == -1)
VAR2->VAR8 = VAR2->VAR22->VAR25;
else
VAR2->VAR8 = VAR8;
VAR2->VAR10 = VAR10;
VAR2->VAR12 = VAR12;

VAR2->VAR26 = NULL;
VAR2->VAR27 = NULL;
FUN7(&VAR2->VAR28);
VAR2->VAR29 = 0;
VAR2->VAR30 = NULL;

VAR2->VAR5 = VAR5;
if (VAR4 != -1) {
VAR2->VAR4 = VAR4;
if (FUN8(VAR2, VAR6, VAR9, VAR11))
break;
VAR2->VAR4 = 0;
} else {
VAR14 = 0;
while ((VAR2->VAR4 = VAR17[VAR14++]))
if (VAR31
(VAR2, VAR6, VAR9, VAR11))
break;
if (VAR2->VAR4)
break;
}
if (VAR2->VAR22->VAR32)
VAR2->VAR22->FUN9(VAR2);
FUN6(VAR22->VAR23);
}

if (!VAR2->VAR4) {
if (VAR3)
FUN3("", VAR12);
else
FUN3("", VAR12);
return 0;
}

if (VAR2->VAR26)
FUN3("", VAR2->VAR12,
VAR2->VAR26, VAR2->VAR4);

VAR2->VAR22->FUN10(VAR2, VAR9, VAR11);

return 1;
}