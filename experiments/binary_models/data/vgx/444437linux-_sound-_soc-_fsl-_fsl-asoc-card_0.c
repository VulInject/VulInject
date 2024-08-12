static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = &VAR4->VAR7->VAR6;
u32 VAR8 = 0, VAR9 = 0;
int VAR10, VAR11;
int VAR12;

VAR12 = FUN2(VAR2, "", &VAR10);
if (VAR12) {
FUN3(VAR6, "");
return VAR12;
}
VAR12 = FUN2(VAR2, "", &VAR11);
if (VAR12) {
FUN3(VAR6, "");
return VAR12;
}


VAR10--;
VAR11--;


switch (VAR4->VAR13 & VAR14) {
case VAR15:
VAR8 = FUN4(8 | VAR11) |
FUN5(8 | VAR11) |
FUN6(VAR11) |
FUN7(VAR11) |
VAR16 |
VAR17 |
VAR18 |
VAR19;
break;
case VAR20:
VAR8 = FUN5(8 | VAR11) |
FUN7(VAR11) |
VAR17 |
VAR19;
VAR9 = FUN4(8 | VAR10) |
FUN6(VAR10) |
VAR16 |
VAR18;
break;
case VAR21:
VAR8 = FUN4(8 | VAR11) |
FUN6(VAR11) |
VAR16 |
VAR18;
VAR9 = FUN5(8 | VAR10) |
FUN7(VAR10) |
VAR17 |
VAR19;
break;
case VAR22:
VAR9 = FUN4(8 | VAR10) |
FUN5(8 | VAR10) |
FUN6(VAR10) |
FUN7(VAR10) |
VAR16 |
VAR17 |
VAR18 |
VAR19;
break;
default:
if (!FUN8(VAR4))
return -VAR23;
}

if (FUN8(VAR4)) {
VAR8 = VAR24 |
FUN7(VAR11) |
VAR19;
VAR9 = VAR24 |
FUN6(VAR10) |
VAR18;
}


if (!FUN8(VAR4)) {
unsigned int VAR25 =
FUN9(VAR11);

VAR12 = FUN10(VAR10, 0,
VAR25);
if (VAR12) {
FUN3(VAR6, "");
return VAR12;
}
}

VAR12 = FUN10(VAR10, VAR8,
FUN9(VAR11));
if (VAR12) {
FUN3(VAR6, "");
return VAR12;
}

if (!FUN8(VAR4)) {
unsigned int VAR25 =
FUN9(VAR10);

VAR12 = FUN10(VAR11, 0,
VAR25);
if (VAR12) {
FUN3(VAR6, "");
return VAR12;
}
}

VAR12 = FUN10(VAR11, VAR9,
FUN9(VAR10));
if (VAR12) {
FUN3(VAR6, "");
return VAR12;
}

return 0;
}