int
FUN1(
struct VAR1	*VAR2,
xfs_dqid_t		VAR3,
xfs_dqid_t		VAR4,
prid_t			VAR5,
uint			VAR6,
struct VAR7	**VAR8,
struct VAR7	**VAR9,
struct VAR7	**VAR10)
{
struct VAR11	*VAR12 = VAR2->VAR13;
struct VAR7	*VAR14 = NULL;
struct VAR7	*VAR15 = NULL;
struct VAR7	*VAR16 = NULL;
int			VAR17;
uint			VAR18;

if (!FUN2(VAR12) || !FUN3(VAR12))
return 0;

VAR18 = VAR19;
FUN4(VAR2, VAR18);

if ((VAR6 & VAR20) && FUN5(VAR2))
VAR4 = VAR2->VAR21.VAR22;


if (FUN6(VAR12, VAR2)) {
VAR17 = FUN7(VAR2, VAR23);
if (VAR17) {
FUN8(VAR2, VAR18);
return VAR17;
}
}

if ((VAR6 & VAR24) && FUN9(VAR12)) {
if (VAR2->VAR21.VAR25 != VAR3) {

FUN8(VAR2, VAR18);
VAR17 = FUN10(VAR12, NULL, VAR3,
VAR26,
VAR23 |
VAR27,
&VAR14);
if (VAR17) {
FUN11(VAR17 != -VAR28);
return VAR17;
}

FUN12(VAR14);
VAR18 = VAR29;
FUN4(VAR2, VAR18);
} else {

FUN11(VAR2->VAR30);
VAR14 = FUN13(VAR2->VAR30);
}
}
if ((VAR6 & VAR31) && FUN14(VAR12)) {
if (VAR2->VAR21.VAR22 != VAR4) {
FUN8(VAR2, VAR18);
VAR17 = FUN10(VAR12, NULL, VAR4,
VAR32,
VAR23 |
VAR27,
&VAR15);
if (VAR17) {
FUN11(VAR17 != -VAR28);
goto VAR33;
}
FUN12(VAR15);
VAR18 = VAR29;
FUN4(VAR2, VAR18);
} else {
FUN11(VAR2->VAR34);
VAR15 = FUN13(VAR2->VAR34);
}
}
if ((VAR6 & VAR35) && FUN15(VAR12)) {
if (FUN16(VAR2) != VAR5) {
FUN8(VAR2, VAR18);
VAR17 = FUN10(VAR12, NULL, (VAR36)VAR5,
VAR37,
VAR23 |
VAR27,
&VAR16);
if (VAR17) {
FUN11(VAR17 != -VAR28);
goto VAR33;
}
FUN12(VAR16);
VAR18 = VAR29;
FUN4(VAR2, VAR18);
} else {
FUN11(VAR2->VAR38);
VAR16 = FUN13(VAR2->VAR38);
}
}
if (VAR14)
FUN17(VAR2);

FUN8(VAR2, VAR18);
if (VAR8)
*VAR8 = VAR14;
else
FUN18(VAR14);
if (VAR9)
*VAR9 = VAR15;
else
FUN18(VAR15);
if (VAR10)
*VAR10 = VAR16;
else
FUN18(VAR16);
return 0;

VAR33:
FUN18(VAR15);
FUN18(VAR14);
return VAR17;
}