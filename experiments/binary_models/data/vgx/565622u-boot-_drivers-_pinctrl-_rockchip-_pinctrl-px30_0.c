static int FUN1(struct VAR1 *VAR2,
int VAR3, int VAR4)
{
struct VAR5 *VAR5;
int VAR6, VAR7;
u32 VAR8, VAR9, VAR10;
u8 VAR11;
int VAR12 = VAR2->VAR13[VAR3 / 8].VAR12;

FUN2(VAR2, VAR3, &VAR5, &VAR6, &VAR11);
VAR7 = FUN3(VAR12, VAR4);
if (VAR7 < 0) {
FUN4("", VAR4);
return VAR7;
}

switch (VAR12) {
case VAR14:
case VAR15:
VAR9 = VAR16;
switch (VAR11) {
case 0 ... 12:

break;
case 15:

VAR8 = (VAR7 & 0x1) << 15;
VAR10 = (VAR7 >> 0x1) & 0x3;

VAR8 |= FUN5(31);
VAR7 = FUN6(VAR5, VAR6, VAR8);
if (VAR7)
return VAR7;

VAR10 |= (0x3 << 16);
VAR6 += 0x4;
VAR7 = FUN6(VAR5, VAR6, VAR10);

return VAR7;
case 18 ... 21:

VAR6 += 4;
VAR11 -= 16;
break;
default:
FUN4("",
VAR11, VAR12);
return -VAR17;
}
break;
case VAR18:
case VAR19:
case VAR20:
VAR9 = VAR21;
break;
default:
FUN4("",
VAR12);
return -VAR17;
}


VAR8 = ((1 << VAR9) - 1) << (VAR11 + 16);
VAR8 |= (VAR7 << VAR11);
VAR7 = FUN6(VAR5, VAR6, VAR8);

return VAR7;
}