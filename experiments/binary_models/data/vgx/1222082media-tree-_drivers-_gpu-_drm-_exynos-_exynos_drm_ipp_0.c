int FUN1(struct VAR1 *VAR2, void *VAR3,
struct VAR4 *VAR5)
{
struct VAR6 *VAR7 = VAR5->VAR8;
struct VAR9 *VAR10 = VAR7->VAR11;
struct VAR12 *VAR13 = FUN2(VAR10);
struct VAR14 *VAR15 = VAR3;
struct VAR16 *VAR17;
struct VAR18 *VAR19;
int VAR20;

if (!VAR15) {
FUN3("");
return -VAR21;
}

if (VAR15->VAR22 >= VAR23) {
FUN3("");
return -VAR21;
}

FUN4("",
VAR15->VAR24, VAR15->VAR22 ? "" : "",
VAR15->VAR25, VAR15->VAR26);


VAR17 = FUN5(&VAR13->VAR27, &VAR13->VAR28,
VAR15->VAR24);
if (!VAR17 || VAR17->VAR29 != VAR5) {
FUN3("");
return -VAR30;
}


switch (VAR15->VAR26) {
case VAR31:

VAR19 = FUN6(VAR2, VAR17, VAR15);
if (FUN7(VAR19)) {
FUN3("");
return FUN8(VAR19);
}


if (VAR15->VAR22 == VAR32) {

VAR20 = FUN9(VAR2, VAR17, VAR15);
if (VAR20) {
FUN3("");
goto VAR33;
}


VAR20 = FUN10(VAR10, VAR17, VAR19, VAR15);
if (VAR20) {
FUN3("");
goto VAR33;
}
}
break;
case VAR34:
FUN11(&VAR17->VAR35);


if (VAR15->VAR22 == VAR32)
FUN12(VAR17, VAR15);

FUN13(VAR2, VAR17, VAR15);

FUN14(&VAR17->VAR35);
break;
default:
FUN3("");
return -VAR21;
}

return 0;

VAR33:
FUN3("");

FUN13(VAR2, VAR17, VAR15);
return VAR20;
}