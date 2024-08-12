static int FUN1(struct VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR6;
struct VAR7 *VAR8 = VAR5->VAR8;
int VAR9 = (VAR3 / 8);
struct VAR10 *VAR10;
unsigned int VAR11;
int VAR12, VAR13, VAR14, VAR15;
u8 VAR16;

if (VAR9 > 3)
return -VAR17;

if (VAR2->VAR18[VAR9].VAR19 & VAR20) {
FUN2(VAR5->VAR21, "", VAR3);
return -VAR17;
}

if (VAR2->VAR18[VAR9].VAR19 & VAR22)
return VAR23;

if (VAR2->VAR18[VAR9].VAR19 & VAR24)
VAR10 = VAR5->VAR25;
else if (VAR2->VAR18[VAR9].VAR19 & VAR26)
VAR10 = (VAR3 % 8 < 4) ? VAR5->VAR25 : VAR5->VAR27;
else
VAR10 = VAR5->VAR27;


VAR15 = VAR2->VAR18[VAR9].VAR19;
VAR12 = VAR2->VAR18[VAR9].VAR28;
if (VAR15 & VAR29) {
if ((VAR3 % 8) >= 4)
VAR12 += 0x4;
VAR16 = (VAR3 % 4) * 4;
VAR14 = 0xf;
} else if (VAR15 & VAR30) {
if ((VAR3 % 8) >= 5)
VAR12 += 0x4;
VAR16 = (VAR3 % 8 % 5) * 3;
VAR14 = 0x7;
} else {
VAR16 = (VAR3 % 8) * 2;
VAR14 = 0x3;
}

if (VAR2->VAR31 & FUN3(VAR3))
FUN4(VAR2, VAR3, &VAR12, &VAR16, &VAR14);

if (VAR8->VAR19 == VAR32) {
if (VAR2->VAR33 == 0) {
if ((VAR3 >= VAR34) && (VAR3 <= VAR35)) {
u32 VAR36 = 0;

VAR36 = VAR12 + 0x4000 - 0xC; 
VAR13 = FUN5(VAR10, VAR36, &VAR11);
if (VAR13)
return VAR13;

if (!(VAR11 & FUN3(8)))
return ((VAR11 >> VAR16) & VAR14);

VAR12 = VAR12 + 0x8000; 
VAR10 = VAR5->VAR27;
}
} else if (VAR2->VAR33 > 0) {
VAR12 += 0x8000; 
}
}

VAR13 = FUN5(VAR10, VAR12, &VAR11);
if (VAR13)
return VAR13;

return ((VAR11 >> VAR16) & VAR14);
}