int FUN1(struct VAR1 *VAR2, u16 VAR3, struct VAR4 *VAR5, u64 VAR6)
{
struct VAR7 *VAR8;
struct mlx4_icm_iter VAR9;
VAR10 *VAR11;
int VAR12;
int VAR13 = 0;
int VAR14;
int VAR15 = 0;
int VAR16 = 0, VAR17 = 0;

VAR8 = FUN2(VAR2);
if (FUN3(VAR8))
return FUN4(VAR8);
VAR11 = VAR8->VAR18;

for (FUN5(VAR5, &VAR9);
!FUN6(&VAR9);
FUN7(&VAR9)) {

VAR12 = FUN8(FUN9(&VAR9) | FUN10(&VAR9)) - 1;
if (VAR12 < VAR19) {
FUN11(VAR2, "",
VAR20,
(unsigned long long) FUN9(&VAR9),
FUN10(&VAR9));
VAR15 = -VAR21;
goto VAR22;
}

for (VAR14 = 0; VAR14 < FUN10(&VAR9) >> VAR12; ++VAR14) {
if (VAR6 != -1) {
VAR11[VAR13 * 2] = FUN12(VAR6);
VAR6 += 1ULL << VAR12;
}

VAR11[VAR13 * 2 + 1] =
FUN12((FUN9(&VAR9) + (VAR14 << VAR12)) |
(VAR12 - VAR19));
VAR16 += 1 << (VAR12 - 10);
++VAR17;

if (++VAR13 == VAR23 / 16) {
VAR15 = FUN13(VAR2, VAR8->VAR24, VAR13, 0, VAR3,
VAR25,
VAR26);
if (VAR15)
goto VAR22;
VAR13 = 0;
}
}
}

if (VAR13)
VAR15 = FUN13(VAR2, VAR8->VAR24, VAR13, 0, VAR3,
VAR25, VAR26);
if (VAR15)
goto VAR22;

switch (VAR3) {
case VAR27:
FUN14(VAR2, "", VAR17, VAR16);
break;
case VAR28:
FUN14(VAR2, "", VAR17, VAR16);
break;
case VAR29:
FUN14(VAR2, "",
VAR17, VAR16, (unsigned long long) VAR6 - (VAR16 << 10));
break;
}

VAR22:
FUN15(VAR2, VAR8);
return VAR15;
}