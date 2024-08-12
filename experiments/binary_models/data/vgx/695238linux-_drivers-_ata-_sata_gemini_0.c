static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR4;
struct VAR5 *VAR6 = VAR4->VAR7;
struct VAR8 *VAR9;
struct VAR10 *VAR11;
enum gemini_muxmode VAR12;
u32 VAR13;
u32 VAR14;
int VAR15;

VAR9 = FUN2(VAR4, sizeof(*VAR9), VAR16);
if (!VAR9)
return -VAR17;
VAR9->VAR4 = VAR4;

VAR9->VAR18 = FUN3(VAR2, 0);
if (FUN4(VAR9->VAR18))
return FUN5(VAR9->VAR18);

VAR11 = FUN6(VAR6, "");
if (FUN4(VAR11)) {
FUN7(VAR4, "");
return FUN5(VAR11);
}


if (FUN8(VAR6, "")) {
VAR15 = FUN9(VAR9);
if (VAR15)
return VAR15;
}

if (FUN8(VAR6, ""))
VAR9->VAR19 = true;

if (!VAR9->VAR20 && !VAR9->VAR19) {
FUN7(VAR4, "");
VAR15 = -VAR21;
goto VAR22;
}

VAR15 = FUN10(VAR6, "", &VAR12);
if (VAR15) {
FUN7(VAR4, "");
goto VAR22;
}
if (VAR12 > VAR23) {
FUN7(VAR4, "", VAR12);
VAR15 = -VAR21;
goto VAR22;
}
VAR9->VAR12 = VAR12;
VAR14 = VAR24;
VAR13 = (VAR12 << VAR25);

VAR15 = FUN11(VAR11, VAR26, VAR14, VAR13);
if (VAR15) {
FUN7(VAR4, "");
VAR15 = -VAR27;
goto VAR22;
}


if (VAR9->VAR19) {
VAR15 = FUN12(VAR4);
if (VAR15)
return VAR15;
}

FUN13(VAR4, "");
FUN14(VAR2, VAR9);
VAR28 = VAR9;

return 0;

VAR22:
if (VAR9->VAR20) {
FUN15(VAR9->VAR29);
FUN15(VAR9->VAR30);
}
return VAR15;
}