static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR4;
struct VAR5 *VAR6, *VAR7;
struct VAR8 *VAR9;
struct VAR10 *VAR11;
struct VAR3 *VAR12;
char VAR13[20];
int VAR14, VAR15;
u32 VAR16;
u32 VAR17;

VAR6 = VAR4->VAR18;

VAR9 = FUN2(VAR4, sizeof(*VAR9), VAR19);
if (!VAR9)
return -VAR20;

VAR11 = FUN3(VAR2, VAR21, "");
if (!VAR11) {
FUN4(VAR4, "");
return -VAR22;
}

VAR9->VAR23 = FUN5(VAR4, VAR11);
FUN6(VAR4, "", VAR11);
if (FUN7(VAR9->VAR23))
return FUN8(VAR9->VAR23);

VAR9->VAR24 = FUN9(VAR4, "");
if (FUN7(VAR9->VAR24)) {
FUN4(VAR4, "");
return FUN8(VAR9->VAR24);
}

VAR11 = FUN3(VAR2, VAR21, "");
if (!VAR11) {
FUN4(VAR4, "");
return -VAR22;
}

VAR9->VAR25 = FUN5(VAR4, VAR11);
FUN6(VAR4, "", VAR11);
if (FUN7(VAR9->VAR25))
return FUN8(VAR9->VAR25);

VAR9->VAR26 = FUN9(VAR4, "");
if (FUN7(VAR9->VAR26)) {
FUN4(VAR4, "");
return FUN8(VAR9->VAR26);
}

VAR16 = FUN10(VAR9);
FUN11(VAR9);

for (VAR15 = 0; VAR15 < VAR27  ; VAR15++)
FUN12(&VAR9->VAR28[VAR15]);

for (VAR17 = 0; VAR17 < VAR29; VAR17++) {
FUN13(&VAR9->VAR30[VAR17]);

VAR9->VAR31[VAR17] = FUN14(VAR2, VAR17);
if (VAR9->VAR31[VAR17] < 0)
return VAR9->VAR31[VAR17];

sprintf(VAR13, "", VAR17);
VAR14 = FUN15(VAR4, VAR9->VAR31[VAR17], VAR32,
0, VAR13, (void *)VAR9);
if (VAR14) {
FUN4(VAR4, "", VAR17);
return VAR14;
}
}

FUN16(VAR6, VAR7) {
VAR14 = FUN17(VAR4, VAR7, VAR9);
if (VAR14) {
FUN4(VAR4, "");
FUN18(VAR7);
return VAR14;
}
}

VAR12 = FUN19(VAR4, "",
VAR9, &VAR33,
NULL);
if (FUN7(VAR12)) {
FUN4(VAR4, "");
return FUN8(VAR12);
}

for (VAR17 = 0; VAR17 < VAR34; VAR17++) {
if (VAR9->VAR35[VAR17]) {

VAR9->VAR36.VAR37 = VAR38 +
FUN20(VAR39);
FUN21(&VAR9->VAR36,
VAR40, 0);
FUN22(&VAR9->VAR36);
break;
}
}

FUN23("",
VAR16, VAR9->VAR41);

return 0;
}