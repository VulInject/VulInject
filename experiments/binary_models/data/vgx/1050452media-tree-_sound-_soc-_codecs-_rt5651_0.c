static int FUN1(struct VAR1 *VAR2,
enum snd_soc_bias_level VAR3)
{
switch (VAR3) {
case VAR4:
if (VAR5 == FUN2(VAR2)) {
FUN3(VAR2, VAR6,
VAR7 | VAR8 |
VAR9 | VAR10,
VAR7 | VAR8 |
VAR9 | VAR10);
FUN4(10000, 15000);
FUN3(VAR2, VAR6,
VAR11 | VAR12,
VAR11 | VAR12);
FUN3(VAR2, VAR6,
VAR13,
VAR14);
FUN3(VAR2, VAR15, 0x1, 0x1);
if (FUN5(VAR2, VAR16) & 0x9200)
FUN3(VAR2, VAR15,
0xc00, 0xc00);
}
break;

case VAR5:
FUN6(VAR2, VAR15, 0x0010);
FUN6(VAR2, VAR17, 0x0000);
FUN6(VAR2, VAR18, 0x0000);
FUN6(VAR2, VAR19, 0x0000);
FUN6(VAR2, VAR20, 0x0000);
FUN6(VAR2, VAR6, 0x0000);
FUN6(VAR2, VAR21, 0x0000);
break;

default:
break;
}

return 0;
}