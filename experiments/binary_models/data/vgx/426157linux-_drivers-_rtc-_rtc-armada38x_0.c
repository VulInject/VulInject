static int FUN1(struct VAR1 *VAR2, long VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
unsigned long VAR6 = 0;
long VAR7, VAR8;


VAR3 = FUN3(VAR3, -484270L, 488558L);

VAR7 = FUN4(VAR3);


VAR8 = FUN5(VAR7, 954);
if (VAR8 > 127 || VAR8 < -128) {
VAR6 = VAR9;
VAR8 = FUN5(VAR7, 3815);
}


VAR6 |= (VAR8 & 0x3fff) ^ 0x2000;
FUN6(VAR6, VAR5, VAR10);

return 0;
}

static const struct rtc_class_ops VAR11 = {
.VAR12 = VAR13,
.VAR14 = VAR15,
.VAR16 = VAR17,
.VAR18 = VAR19,
.VAR20 = VAR21,
.VAR22 = VAR23,
.VAR24 = VAR25,
};