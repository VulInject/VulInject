static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = &VAR4->VAR6;
struct VAR7 *VAR8 = &VAR4->VAR8;
int VAR9;
unsigned int VAR10 = FUN2(VAR2);
u8 VAR11 = FUN3(VAR4, VAR10);
u8 VAR12[32];
u8 VAR13 = 0, VAR14 = 0;

memset(VAR12, 0, 32);

VAR12[0] = (VAR15)(VAR4->VAR16);
VAR12[1] = VAR4->VAR17;

if (VAR4->VAR18)
VAR12[2] = 0x10;
else
VAR12[2] = 0x00;

VAR12[3] = 20;
VAR12[4] = 10;
VAR12[5] = 05;
VAR12[6] = 21;

if (VAR4->VAR19)
VAR12[7] = 0x20;
else
VAR12[7] = 0x00;

VAR12[8] = 0;
if (FUN4(VAR4, VAR20) &&
(VAR4->VAR21[VAR10] == VAR22)) {
VAR13 = VAR23;
VAR14 = VAR24;
} else {
VAR13 = VAR25;
VAR14 = VAR26;
}

if (VAR4->VAR27 & VAR13)
VAR12[8] |= 0x02;

if (VAR4->VAR27 & VAR14)
VAR12[8] |= 0x01;

if (VAR11 == VAR28) {
if (FUN5(VAR6)) {
if (FUN6(VAR6)) {
if (VAR6->VAR29 > 0x4000000)
VAR12[0x0E] = 0x02;
else
VAR12[0x0E] = 0x01;
} else {
VAR12[0x0E] = 0x00;
}

if (FUN7(VAR6))
VAR12[0x0F] = 0x03;
else if (FUN8(VAR6))
VAR12[0x0F] = 0x04;
else if (FUN9(VAR6))
VAR12[0x0F] = 0x02;
else if (FUN10(VAR6))
VAR12[0x0F] = 0x01;
else
VAR12[0x0F] = 0x00;
} else {
if (FUN11(VAR6))
VAR12[0x0E] = 0x01;
else
VAR12[0x0E] = 0x00;

if (FUN12(VAR6))
VAR12[0x0F] = 0x03;
else if (FUN13(VAR6))
VAR12[0x0F] = 0x02;
else if (FUN14(VAR6))
VAR12[0x0F] = 0x01;
else
VAR12[0x0F] = 0x00;
}
} else if (VAR11 == VAR22) {
if (FUN15(VAR8)) {
if (FUN16(VAR8))
VAR12[0x0E] = 0x01;
else
VAR12[0x0E] = 0x00;

if (FUN17(VAR8))
VAR12[0x0F] = 0x01;
else
VAR12[0x0F] = 0x00;
}
}

if (VAR11 == VAR28) {
VAR12[0x17] = 0x80;
if (VAR6->VAR30)
VAR12[0x17] |= 0x01;
if (VAR6->VAR31 & VAR32) {
VAR12[0x17] |= 0x02;
VAR12[0x07] |= 0x40;
}
if (VAR6->VAR31 & VAR33)
VAR12[0x17] |= 0x04;
} else {
VAR12[0x17] = 0x00;
}

FUN18(FUN19(VAR4), "", VAR12[0x17]);

VAR12[0x18] = 0x8A;
VAR12[0x1A] = 0x28;
VAR12[0x1F] = 0x01;

VAR9 = FUN20(unsigned int, FUN21(VAR2), sizeof(VAR12));
FUN22(VAR12, VAR9, VAR2);
FUN23(VAR2, FUN21(VAR2) - VAR9);

return VAR34;
}