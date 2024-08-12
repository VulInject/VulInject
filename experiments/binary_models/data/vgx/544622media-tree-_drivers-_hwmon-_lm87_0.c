static VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5,
const char *VAR6, size_t VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR3);
struct VAR10 *VAR11 = FUN3(VAR9);
int VAR12 = FUN4(VAR5)->VAR13;
long VAR14;
int VAR15;
unsigned long VAR16;
u8 VAR17;

VAR15 = FUN5(VAR6, 10, &VAR14);
if (VAR15)
return VAR15;

FUN6(&VAR11->VAR18);
VAR16 = FUN7(VAR11->VAR19[VAR12],
FUN8(VAR11->VAR20[VAR12]));

switch (VAR14) {
case 1:
VAR11->VAR20[VAR12] = 0;
break;
case 2:
VAR11->VAR20[VAR12] = 1;
break;
case 4:
VAR11->VAR20[VAR12] = 2;
break;
case 8:
VAR11->VAR20[VAR12] = 3;
break;
default:
FUN9(&VAR11->VAR18);
return -VAR21;
}

VAR17 = FUN10(VAR9, VAR22);
switch (VAR12) {
case 0:
VAR17 = (VAR17 & 0xCF) | (VAR11->VAR20[0] << 4);
break;
case 1:
VAR17 = (VAR17 & 0x3F) | (VAR11->VAR20[1] << 6);
break;
}
FUN11(VAR9, VAR22, VAR17);

VAR11->VAR19[VAR12] = FUN12(VAR16, VAR14);
FUN11(VAR9, FUN13(VAR12),
VAR11->VAR19[VAR12]);
FUN9(&VAR11->VAR18);

return VAR7;
}