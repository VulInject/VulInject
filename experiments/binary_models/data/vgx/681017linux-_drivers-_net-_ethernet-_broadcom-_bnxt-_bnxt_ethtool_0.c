static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
VAR5 *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2);
u8 VAR9, VAR10;
u16 VAR11, VAR12, VAR13, VAR14;

if (!FUN3(VAR8)) {
FUN4(VAR2, "");
return -VAR15;
}

VAR11 = VAR4->VAR16 >> 16;

if (VAR11 == 0xffff) { 
VAR9 = VAR4->VAR16 & 0xff;
VAR10 = VAR4->VAR16 >> 8;
if (VAR9 == 0)
return -VAR15;
switch (VAR10) {
case 0x0e: 
if (VAR4->VAR17 != ~VAR4->VAR16)
return -VAR15;
return FUN5(VAR2, VAR9 - 1);
default:
return -VAR15;
}
}


if (FUN6(VAR11))
return -VAR18;
VAR12 = VAR4->VAR16 & 0xffff;
VAR13 = VAR4->VAR17 >> 16;
VAR14 = VAR4->VAR17 & 0xffff;

return FUN7(VAR2, VAR11, VAR13, VAR12, VAR14, 0, VAR6,
VAR4->VAR19);
}