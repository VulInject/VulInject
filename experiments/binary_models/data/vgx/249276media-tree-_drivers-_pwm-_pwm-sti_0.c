static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR4;
struct VAR5 *VAR6;
struct VAR7 *VAR8;
struct VAR9 *VAR10;
unsigned int VAR11;
int VAR12, VAR13;

VAR8 = FUN2(VAR4, sizeof(*VAR8), VAR14);
if (!VAR8)
return -VAR15;

VAR6 = FUN2(VAR4, sizeof(*VAR6), VAR14);
if (!VAR6)
return -VAR15;

VAR10 = FUN3(VAR2, VAR16, 0);

VAR8->VAR17 = FUN4(VAR4, VAR10);
if (FUN5(VAR8->VAR17))
return FUN6(VAR8->VAR17);

VAR8->VAR18 = FUN7(VAR4, VAR8->VAR17,
&VAR19);
if (FUN5(VAR8->VAR18))
return FUN6(VAR8->VAR18);

VAR12 = FUN8(VAR2, 0);
if (VAR12 < 0) {
FUN9(&VAR2->VAR4, "");
return VAR12;
}

VAR13 = FUN10(&VAR2->VAR4, VAR12, VAR20, 0,
VAR2->VAR21, VAR8);
if (VAR13 < 0) {
FUN9(&VAR2->VAR4, "");
return VAR13;
}


VAR6->VAR22 = VAR23;
VAR6->VAR24 = 0xff;
VAR6->VAR25 = 255;
VAR6->VAR26 = 0;
VAR6->VAR27 = 0;

VAR8->VAR6 = VAR6;
VAR8->VAR4 = VAR4;
VAR8->VAR28 = 0;
FUN11(&VAR8->VAR29);

VAR13 = FUN12(VAR8);
if (VAR13)
return VAR13;

if (!VAR6->VAR26)
goto VAR30;

VAR8->VAR31 = FUN13(VAR4->VAR32, "");
if (FUN5(VAR8->VAR31)) {
FUN9(VAR4, "");
return FUN6(VAR8->VAR31);
}

VAR13 = FUN14(VAR8->VAR31);
if (VAR13) {
FUN9(VAR4, "");
return VAR13;
}

VAR30:
if (!VAR6->VAR27)
goto VAR33;

VAR8->VAR34 = FUN13(VAR4->VAR32, "");
if (FUN5(VAR8->VAR34)) {
FUN9(VAR4, "");
return FUN6(VAR8->VAR34);
}

VAR13 = FUN14(VAR8->VAR34);
if (VAR13) {
FUN9(VAR4, "");
return VAR13;
}

VAR33:
VAR8->VAR35.VAR4 = VAR4;
VAR8->VAR35.VAR36 = &VAR37;
VAR8->VAR35.VAR38 = -1;
VAR8->VAR35.VAR39 = VAR8->VAR6->VAR26;

VAR13 = FUN15(&VAR8->VAR35);
if (VAR13 < 0) {
FUN16(VAR8->VAR31);
FUN16(VAR8->VAR34);
return VAR13;
}

for (VAR11 = 0; VAR11 < VAR6->VAR27; VAR11++) {
struct VAR40 *VAR41;

VAR41 = FUN2(VAR4, sizeof(*VAR41), VAR14);
if (!VAR41)
return -VAR15;

FUN17(&VAR41->VAR42);
FUN11(&VAR41->VAR43);

FUN18(&VAR8->VAR35.VAR44[VAR11], VAR41);
}

FUN19(VAR2, VAR8);

return 0;
}