static void FUN1(struct VAR1 *VAR2,
unsigned int VAR3,
struct VAR4 *VAR5,
unsigned short VAR6,
struct VAR7 *VAR8)
{
struct VAR9 *VAR10 = FUN2(VAR5);
struct VAR11 *VAR12 = FUN3(FUN4(VAR10));
unsigned int VAR13 = VAR14;
unsigned int VAR15 = VAR16;
unsigned int VAR17 = VAR18;
unsigned int VAR19 = VAR8->VAR20->VAR21;
unsigned int VAR22;
unsigned char VAR23 = 0, VAR24 = 0;
unsigned int VAR25;

if (FUN5(VAR10) == VAR26)
VAR25 = VAR5->VAR25 - 8;
else
VAR25 = VAR5->VAR25;
VAR22 = VAR27 +
((VAR25) ? VAR28 : 0);

VAR24 = VAR5->VAR29 ?
(VAR25 + VAR13 + 1 + VAR22) : 0;
if (VAR6 == VAR30) {
if (FUN6(VAR10) != VAR5->VAR29)
VAR23 = FUN6(VAR10);
else
VAR24 = 0;
}


VAR2->VAR31 = FUN7(VAR19,
2, (VAR13 ?  (VAR25 + 1) :  0) +
VAR22);
VAR2->VAR32 =
FUN8(VAR25 + VAR13 + VAR5->VAR29 + VAR22);

VAR2->VAR33 = FUN9(
1, VAR25 + VAR22, VAR25
+ VAR13 + 1 + VAR22, 0);

VAR2->VAR34 = FUN10(0,
VAR24, VAR23,
(VAR6 == VAR35) ? 0 :
FUN6(VAR10));
VAR2->VAR36 =  FUN11(VAR6,
(VAR6 == VAR35) ? 0 : 1,
VAR15, VAR17,
VAR12->VAR37, VAR13 >> 1);

VAR2->VAR38 = FUN12(0, 0, 1, 0,
1, VAR3);
}