static bool FUN1(int VAR1,
struct VAR2 *VAR3,
struct VAR4 *VAR5)
{
int VAR6 = VAR3->VAR6;
uint32_t VAR7, VAR8, VAR9, VAR10;
uint32_t VAR11;

if (VAR6 >= 6200000 && VAR6 <= 6700000) {
VAR7 = 4;
VAR8 = 9;
VAR9 = 3;
VAR10 = 8;
} else if ((VAR6 > 5400000 && VAR6 < 6200000) ||
(VAR6 >= 4800000 && VAR6 < 5400000)) {
VAR7 = 5;
VAR8 = 11;
VAR9 = 3;
VAR10 = 9;
} else if (VAR6 == 5400000) {
VAR7 = 3;
VAR8 = 8;
VAR9 = 1;
VAR10 = 9;
} else {
FUN2("");
return false;
}

if (VAR1 > 270000)
VAR11 = 0x18;
else if (VAR1 > 135000)
VAR11 = 0x0d;
else if (VAR1 > 67000)
VAR11 = 0x07;
else if (VAR1 > 33000)
VAR11 = 0x04;
else
VAR11 = 0x02;

VAR5->VAR12 = FUN3(VAR3->VAR13) | FUN4(VAR3->VAR14);
VAR5->VAR15 = VAR3->VAR16;
VAR5->VAR17 = FUN5(VAR3->VAR18);
VAR5->VAR19 = VAR3->VAR20;

if (VAR3->VAR21)
VAR5->VAR22 = VAR23;

VAR5->VAR24 = VAR7 | FUN6(VAR8);
VAR5->VAR24 |= FUN7(VAR9);

VAR5->VAR25 = VAR10;

VAR5->VAR26 = 5 << VAR27;

VAR5->VAR28 =
FUN8(VAR29)
| VAR30;

VAR5->VAR31 = VAR32;

VAR5->VAR33 = VAR34 | VAR11;

return true;
}