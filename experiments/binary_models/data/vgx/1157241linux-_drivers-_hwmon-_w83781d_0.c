static int
FUN1(struct VAR1 *VAR2)
{
int VAR3, VAR4 = 0, VAR5;
int VAR6;
int VAR7 = VAR2->VAR8;
unsigned short VAR9[2];
struct VAR10 *VAR11 = VAR2->VAR11;
struct VAR12 *VAR13 = FUN2(VAR2);
enum chips VAR14 = VAR13->VAR15;
int VAR16 = 1;

VAR5 = FUN3(VAR11);

if (VAR17[0] == VAR5 && VAR17[1] == VAR7) {
for (VAR3 = 2; VAR3 <= 3; VAR3++) {
if (VAR17[VAR3] < 0x48 ||
VAR17[VAR3] > 0x4f) {
FUN4(&VAR2->VAR18,
"",
VAR17[VAR3]);
VAR6 = -VAR19;
goto VAR20;
}
}
FUN5(VAR13, VAR21,
(VAR17[2] & 0x07) |
((VAR17[3] & 0x07) << 4));
VAR9[0] = VAR17[2];
} else {
VAR4 = FUN6(VAR13, VAR21);
VAR9[0] = 0x48 + (VAR4 & 0x07);
}

if (VAR14 != VAR22) {
VAR16 = 2;
if (VAR17[0] == VAR5 &&
VAR17[1] == VAR7) {
VAR9[1] = VAR17[3];
} else {
VAR9[1] = 0x48 + ((VAR4 >> 4) & 0x07);
}
if (VAR9[0] == VAR9[1]) {
FUN4(&VAR2->VAR18,
"",
VAR9[0]);
VAR6 = -VAR23;
goto VAR24;
}
}

for (VAR3 = 0; VAR3 < VAR16; VAR3++) {
VAR13->VAR25[VAR3] = FUN7(VAR11, VAR9[VAR3]);
if (FUN8(VAR13->VAR25[VAR3])) {
FUN4(&VAR2->VAR18,
"",
VAR3, VAR9[VAR3]);
VAR6 = FUN9(VAR13->VAR25[VAR3]);
if (VAR3 == 1)
goto VAR26;
goto VAR24;
}
}

return 0;


VAR26:
FUN10(VAR13->VAR25[0]);
VAR24:
VAR20:
return VAR6;
}