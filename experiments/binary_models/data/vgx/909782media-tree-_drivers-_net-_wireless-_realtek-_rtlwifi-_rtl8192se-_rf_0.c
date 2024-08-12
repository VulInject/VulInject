static void FUN1(struct VAR1 *VAR2,
u8 VAR3, u32 VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
struct VAR7 *VAR8 = &(VAR6->VAR9);
struct VAR10 *VAR11 = FUN3(FUN2(VAR2));
u16 VAR12[6] = {0xe00, 0xe04, 0xe10, 0xe14, 0xe18, 0xe1c};
u8 VAR13, VAR14[4];
u8 VAR15 = 0, VAR16 = 0, VAR17 = 0;
u32 VAR18 = VAR4;


if (VAR8->VAR19 == VAR20) {
VAR17 = VAR11->VAR21[0];


if (VAR17 >= 8) {

VAR15 = 0x10 - VAR17;

} else {
VAR16 = VAR22 - VAR17;
}
}

for (VAR13 = 0; VAR13 < 4; VAR13++) {
VAR14[VAR13] = (VAR23)((VAR18 & (0x7f << (VAR13 * 8))) >> (VAR13 * 8));
if (VAR14[VAR13]  > VAR22)
VAR14[VAR13]  = VAR22;


if (VAR8->VAR19 == VAR20) {

if (VAR17 >= 8) {

if (VAR14[VAR13] < VAR15)
VAR14[VAR13] = VAR15;

} else if (VAR17 >= 1) {

if (VAR14[VAR13] > VAR16)
VAR14[VAR13] = VAR16;
}
}

}

VAR18 = (VAR14[3] << 24) | (VAR14[2] << 16) | (VAR14[1] << 8) |
VAR14[0];

FUN4(VAR2, VAR12[VAR3], 0x7f7f7f7f, VAR18);
}