static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
unsigned int VAR5 = FUN2(VAR2);
unsigned int VAR6;
int VAR7;
bool VAR8;
unsigned char VAR9, *VAR10;
u8 VAR11 = FUN3(VAR4, VAR5);

if (!FUN4(VAR4, VAR5)) {
FUN5(VAR4, VAR5, VAR12);
FUN6(VAR2, FUN7(VAR2));
return VAR13;
}

VAR8 = false;
VAR6 = 8;
if ((VAR4->VAR14[VAR5] & VAR15)) {
if (!VAR11 || VAR11 == VAR15) {
VAR6 = 108;
if (VAR4->VAR16)
VAR8 = true;
}
}
if (VAR11 == VAR15) {
if (VAR4->VAR16) {
VAR8 = true;
VAR6 = 108;
}
}

VAR10 = FUN8(VAR6, VAR17);
if (!VAR10)
return VAR18;

VAR9 = VAR2->VAR19[2] & 0x3f;

if (VAR9 == 0x3F || VAR9 == 0x1C ||
VAR9 == 0x00 ||
(VAR8 && VAR9 == 0x20)) {
if (VAR2->VAR19[0] == VAR20) {
if (VAR9 == 0x3F || VAR9 == 0x20) {
FUN9(VAR4, VAR2->VAR19[0],
VAR5, VAR10, VAR6);
} else {
VAR6 = 4;
VAR10[0] = 0x03;
VAR10[1] = 0x00;
if (FUN10(VAR4, VAR5))
VAR10[2] = 0x80;
else
VAR10[2] = 0x00;

VAR10[3] = 0x00;
}
} else {
if (VAR9 == 0x3F || VAR9 == 0x20) {
FUN9(VAR4, VAR2->VAR19[0],
VAR5, VAR10, VAR6);
} else {
VAR6 = 8;
VAR10[0] = 0x00;
VAR10[1] = 0x06;
VAR10[2] = 0x00;
if (FUN10(VAR4, VAR5))
VAR10[3] = 0x80;
else
VAR10[3] = 0x00;
VAR10[4] = 0x00;
VAR10[5] = 0x00;
VAR10[6] = 0x00;
VAR10[7] = 0x00;
}
}
VAR7 = VAR21;
} else {
FUN5(VAR4, VAR5, VAR22);
FUN6(VAR2, FUN7(VAR2));
VAR7 = VAR13;
}

if (VAR7 == VAR21) {
unsigned int VAR23 = FUN11(unsigned int, FUN7(VAR2),
VAR6);
FUN12(VAR10, VAR23, VAR2);
FUN6(VAR2, FUN7(VAR2) - VAR23);
}
FUN13(VAR10);

return VAR7;
}