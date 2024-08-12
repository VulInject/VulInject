static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
const char *VAR6, size_t VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR5);
struct VAR10 *VAR11 = FUN3(VAR3);
int VAR12 = VAR9->VAR13;
long VAR14;
int VAR15;
long VAR16;
u8 VAR17 = FUN4(VAR11->VAR18[VAR12]);

VAR15 = FUN5(VAR6, 10, &VAR14);
if (VAR15)
return VAR15;

if (VAR14 == VAR17) 
return VAR7;

FUN6(&VAR11->VAR19);
switch (VAR14) {
case 1:
VAR11->VAR18[VAR12] = 0;
break;
case 2:
VAR11->VAR18[VAR12] = 1;
break;
case 4:
VAR11->VAR18[VAR12] = 2;
break;
case 8:
VAR11->VAR18[VAR12] = 3;
break;
default:
FUN7(&VAR11->VAR19);
return -VAR20;
}

switch (VAR12) {
case 0:
case 1:
VAR16 = FUN8(VAR11, VAR21)
& ~(0x03 << (4 + 2 * VAR12));
VAR16 |= VAR11->VAR18[VAR12] << (4 + 2 * VAR12);
FUN9(VAR11, VAR21, VAR16);
break;
case 2:
VAR16 = FUN8(VAR11, VAR22) & 0xCF;
VAR16 |= VAR11->VAR18[2] << 4;
FUN9(VAR11, VAR22, VAR16);
break;
default:
FUN10();
}


VAR16 = 192 - (VAR17 * (192 - VAR11->VAR23[VAR12])
+ VAR14 / 2) / VAR14;
VAR11->VAR23[VAR12] = FUN11(VAR16, 0, 191);
FUN9(VAR11, VAR24[VAR12],
VAR11->VAR23[VAR12]);
FUN7(&VAR11->VAR19);

return VAR7;
}