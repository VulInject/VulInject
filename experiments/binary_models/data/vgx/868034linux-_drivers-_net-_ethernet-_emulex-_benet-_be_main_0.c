static int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
struct VAR7 *VAR8;
int VAR9 = 0;

VAR9 = FUN2(VAR2);
if (VAR9)
goto VAR10;

VAR9 = FUN3(VAR2, VAR11);
if (VAR9)
goto VAR12;
FUN4(VAR2);

VAR8 = FUN5(sizeof(*VAR6), VAR13, VAR14);
if (!VAR8) {
VAR9 = -VAR15;
goto VAR16;
}
VAR6 = FUN6(VAR8);
VAR6->VAR2 = VAR2;
FUN7(VAR2, VAR6);
VAR6->VAR8 = VAR8;
FUN8(VAR8, &VAR2->VAR17);

VAR9 = FUN9(&VAR2->VAR17, FUN10(64));
if (VAR9) {
FUN11(&VAR2->VAR17, "");
goto VAR18;
}

VAR9 = FUN12(VAR2);
if (!VAR9)
FUN13(&VAR2->VAR17, "");

VAR9 = FUN14(VAR6);
if (VAR9)
goto VAR18;

VAR9 = FUN15(VAR6);
if (VAR9)
goto VAR19;

VAR9 = FUN16(VAR6);
if (VAR9)
goto VAR20;

FUN17(VAR8);
VAR9 = FUN18(VAR8);
if (VAR9 != 0)
goto VAR21;

FUN19(VAR6);

FUN20(VAR6, VAR22);
VAR6->VAR23.VAR24 = VAR25;


if (FUN21(VAR6) && FUN22(VAR26)) {
VAR6->VAR27.VAR28 =
FUN23(&VAR2->VAR17,
VAR11,
VAR6,
VAR29);
VAR6->VAR27.VAR30 = VAR31;
}

FUN13(&VAR2->VAR17, "", FUN24(VAR2),
FUN25(VAR6), FUN26(VAR6), VAR6->VAR32);

return 0;

VAR21:
FUN27(VAR6);
VAR20:
FUN28(VAR6);
VAR19:
FUN29(VAR6);
VAR18:
FUN30(VAR2);
FUN31(VAR8);
VAR16:
FUN32(VAR2);
VAR12:
FUN33(VAR2);
VAR10:
FUN11(&VAR2->VAR17, "", FUN24(VAR2));
return VAR9;
}