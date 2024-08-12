static bool FUN1(struct VAR1 *VAR2, VAR3 *VAR4,
int VAR5, bool VAR6, bool VAR7)
{
int VAR8;
int VAR9[VAR10];
struct VAR11 *VAR12 = VAR2->VAR13;
struct VAR14 *VAR15 = FUN2(VAR12);
int VAR16;

if (FUN3(VAR12->VAR17)) {
struct VAR18 *VAR19 = (struct VAR18 *) VAR4;
int VAR20 = VAR5 / sizeof(*VAR19);
if (VAR20 == 0)
return false;

FUN4(VAR15, VAR21, "",
VAR5, VAR20);
if (VAR20 < VAR10) {
FUN4(VAR15, VAR21, "");
return false;
}

if ((VAR5 % sizeof(*VAR19)) == 2) {
VAR19 = (struct VAR18 *) (VAR4 + 2);
FUN4(VAR15, VAR21, "");
}
if (FUN5(VAR12->VAR17))
FUN6(VAR6, VAR7);

for (VAR8 = 0; VAR8 < VAR10; VAR8++)
VAR9[VAR8] = FUN7(VAR19 + VAR8, VAR6,
VAR7);
} else {
struct VAR22 *VAR19 = (struct VAR22 *) VAR4;
int VAR20 = VAR5 / sizeof(*VAR19);
if (VAR20 == 0)
return false;
FUN4(VAR15, VAR21, "",
VAR5, VAR20);
if (VAR20 < VAR10) {
FUN4(VAR15, VAR21, "");
return false;
}

for (VAR8 = 0; VAR8 < VAR10; VAR8++)
VAR9[VAR8] = FUN8(VAR19[VAR8].VAR23) ^ 0x20;
}
FUN4(VAR15, VAR21, "",
VAR9[0], VAR9[1], VAR9[2], VAR9[3]);


VAR16 = 0;
for (VAR8 = 0; VAR8 < VAR24; VAR8++) {
int VAR25 = -1;
int VAR26 = VAR9[VAR8 + 1] - VAR9[VAR8];


if (FUN9(VAR26) < VAR27 || FUN9(VAR26) > VAR28) {
FUN4(VAR15, VAR21, ""
"", VAR26, VAR8);
return false;
}
if (VAR8 == 0)
goto VAR29;
VAR25 = VAR26 - VAR16;
if (FUN9(VAR25) > VAR30) {
FUN4(VAR15, VAR21, "",
VAR25);
return false;
}
VAR29:
FUN4(VAR15, VAR21, "",
VAR8, VAR26, VAR25);
VAR16 = VAR26;
}
return true;
}