}
FUN1(VAR1);

int FUN2(struct VAR2 *VAR3, struct VAR4 *VAR5,
void VAR6 *VAR7, unsigned VAR8,
void VAR6 *VAR9, unsigned VAR10, u32 VAR11,
VAR12 *VAR13, unsigned VAR14)
{
bool write = FUN3(VAR5);
struct VAR15 *VAR16 = VAR3->VAR17;
struct VAR18 *VAR19 = VAR16 ? VAR16->VAR19 : NULL;
struct VAR20 *VAR21;
struct VAR22 *VAR22 = NULL;
void *VAR23 = NULL;
int VAR24;

VAR21 = FUN4(VAR3, VAR5, 0, VAR25);
if (FUN5(VAR21))
return FUN6(VAR21);

VAR21->VAR14 = VAR14 ? VAR14 : VAR26;

if (VAR7 && VAR8) {
VAR24 = FUN7(VAR3, VAR21, NULL, VAR7, VAR8,
VAR27);
if (VAR24)
goto VAR28;
VAR22 = VAR21->VAR22;

if (!VAR19)
goto VAR29;
VAR22->VAR30 = FUN8(VAR19, 0);
if (!VAR22->VAR30) {
VAR24 = -VAR31;
goto VAR32;
}

if (VAR9 && VAR10) {
struct VAR33 *VAR34;

VAR23 = FUN9(VAR10, VAR27);
if (!VAR23) {
VAR24 = -VAR35;
goto VAR32;
}

if (write) {
if (FUN10(VAR23, VAR9,
VAR10)) {
VAR24 = -VAR36;
goto VAR37;
}
}

VAR34 = FUN11(VAR22, VAR27, 1);
if (FUN5(VAR34)) {
VAR24 = FUN6(VAR34);
goto VAR37;
}

VAR34->VAR38.VAR39 = VAR10;
VAR34->VAR38.VAR40 = VAR11;

VAR24 = FUN12(VAR22, FUN13(VAR23),
VAR10, FUN14(VAR23));
if (VAR24 != VAR10) {
VAR24 = -VAR35;
goto VAR37;
}
}
}
VAR29:
FUN15(VAR21->VAR3, VAR19, VAR21, 0);
if (FUN16(VAR21)->VAR41 & VAR42)
VAR24 = -VAR43;
else
VAR24 = FUN16(VAR21)->VAR44;
if (VAR13)
*VAR13 = FUN17(FUN16(VAR21)->VAR13.VAR12);
if (VAR23 && !VAR24 && !write) {
if (FUN18(VAR9, VAR23, VAR10))
VAR24 = -VAR36;
}
VAR37:
FUN19(VAR23);
VAR32:
if (VAR22) {
if (VAR19 && VAR22->VAR30)
FUN20(VAR22->VAR30);
FUN21(VAR22);
}
VAR28:
FUN22(VAR21);
return VAR24;
}