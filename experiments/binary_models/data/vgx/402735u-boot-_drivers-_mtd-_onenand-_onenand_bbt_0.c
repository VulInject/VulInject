static int FUN1(struct VAR1 *VAR2, VAR3 * VAR4,
struct VAR5 *VAR6, int VAR7)
{
struct VAR8 *this = VAR2->VAR9;
struct VAR10 *VAR11 = this->VAR11;
int VAR12, VAR13, VAR14, VAR15, VAR16;
int VAR17;
loff_t VAR18;
size_t VAR19, VAR20;
struct mtd_oob_ops VAR21;
int VAR22;

FUN2(VAR23 "");

VAR15 = 1;


VAR16 = VAR20 = 0;
VAR19 = VAR6->VAR15;



VAR14 = this->VAR24 >> (VAR11->VAR25 - 1);
VAR17 = 0;
VAR18 = 0;

VAR21.VAR26 = VAR27;
VAR21.VAR20 = VAR19;
VAR21.VAR28 = VAR4;
VAR21.VAR15 = VAR21.VAR29 = VAR21.VAR30 = VAR21.VAR31 = 0;

for (VAR12 = VAR17; VAR12 < VAR14;) {
int VAR32;

for (VAR13 = 0; VAR13 < VAR15; VAR13++) {

VAR32 = FUN3(VAR2,
VAR18 + VAR13 * VAR2->VAR33 +
VAR6->VAR34, &VAR21);


if (VAR32 == VAR35)
return -VAR36;

if (VAR32 || VAR37
(&VAR4[VAR13 * VAR16], VAR16, VAR2->VAR33, VAR6)) {
VAR11->VAR38[VAR12 >> 3] |= 0x03 << (VAR12 & 0x6);
FUN2(VAR39
"", VAR12 >> 1,
(unsigned int)VAR18);
break;
}
}
VAR12 += 2;

if (FUN4(this)) {
VAR22 = FUN5(VAR2, VAR18);
VAR18 += VAR2->VAR40[VAR22].VAR41;
} else
VAR18 += (1 << VAR11->VAR25);
}

return 0;
}