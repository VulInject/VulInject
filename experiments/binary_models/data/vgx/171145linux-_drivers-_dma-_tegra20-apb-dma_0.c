static int FUN1(struct VAR1 *VAR2)
{
const struct VAR3 *VAR4;
struct VAR5 *VAR6;
unsigned int VAR7;
size_t VAR8;
int VAR9;

VAR4 = FUN2(&VAR2->VAR10);
VAR8 = FUN3(VAR6, VAR11, VAR4->VAR12);

VAR6 = FUN4(&VAR2->VAR10, VAR8, VAR13);
if (!VAR6)
return -VAR14;

VAR6->VAR10 = &VAR2->VAR10;
VAR6->VAR15 = VAR4;
FUN5(VAR2, VAR6);

VAR6->VAR16 = FUN6(VAR2, 0);
if (FUN7(VAR6->VAR16))
return FUN8(VAR6->VAR16);

VAR6->VAR17 = FUN9(&VAR2->VAR10, NULL);
if (FUN7(VAR6->VAR17)) {
FUN10(&VAR2->VAR10, "");
return FUN8(VAR6->VAR17);
}

VAR6->VAR18 = FUN11(&VAR2->VAR10, "");
if (FUN7(VAR6->VAR18)) {
FUN10(&VAR2->VAR10, "");
return FUN8(VAR6->VAR18);
}

FUN12(&VAR6->VAR19);

VAR9 = FUN13(VAR6->VAR17);
if (VAR9)
return VAR9;

VAR9 = FUN14(VAR6);
if (VAR9)
goto VAR20;

FUN15(&VAR2->VAR10);
FUN16(&VAR2->VAR10);

FUN17(&VAR6->VAR21.VAR11);
for (VAR7 = 0; VAR7 < VAR4->VAR12; VAR7++) {
struct VAR22 *VAR23 = &VAR6->VAR11[VAR7];
int VAR24;

VAR23->VAR25 = VAR6->VAR16 +
VAR26 +
(VAR7 * VAR4->VAR27);

VAR24 = FUN18(VAR2, VAR7);
if (VAR24 < 0) {
VAR9 = VAR24;
goto VAR28;
}

snprintf(VAR23->VAR29, sizeof(VAR23->VAR29), "", VAR7);
VAR9 = FUN19(&VAR2->VAR10, VAR24, VAR30, 0,
VAR23->VAR29, VAR23);
if (VAR9) {
FUN10(&VAR2->VAR10,
"",
VAR9, VAR7);
goto VAR28;
}

VAR23->VAR31.VAR32 = &VAR6->VAR21;
FUN20(&VAR23->VAR31);
FUN21(&VAR23->VAR31.VAR33,
&VAR6->VAR21.VAR11);
VAR23->VAR6 = VAR6;
VAR23->VAR34 = VAR7;
VAR23->VAR35 = VAR36;

FUN22(&VAR23->VAR37, VAR38);
FUN12(&VAR23->VAR39);
FUN23(&VAR23->VAR40);

FUN17(&VAR23->VAR41);
FUN17(&VAR23->VAR42);
FUN17(&VAR23->VAR43);
FUN17(&VAR23->VAR44);
}

FUN24(VAR45, VAR6->VAR21.VAR46);
FUN24(VAR47, VAR6->VAR21.VAR46);
FUN24(VAR48, VAR6->VAR21.VAR46);

VAR6->VAR49 = 0;
VAR6->VAR21.VAR10 = &VAR2->VAR10;
VAR6->VAR21.VAR50 =
VAR51;
VAR6->VAR21.VAR52 =
VAR53;
VAR6->VAR21.VAR54 = VAR55;
VAR6->VAR21.VAR56 = VAR57;
VAR6->VAR21.VAR58 = FUN25(VAR59) |
FUN25(VAR60) |
FUN25(VAR61) |
FUN25(VAR62);
VAR6->VAR21.VAR63 = FUN25(VAR59) |
FUN25(VAR60) |
FUN25(VAR61) |
FUN25(VAR62);
VAR6->VAR21.VAR64 = FUN25(VAR65) | FUN25(VAR66);
VAR6->VAR21.VAR67 = VAR68;
VAR6->VAR21.VAR69 = VAR70;
VAR6->VAR21.VAR71 = VAR72;
VAR6->VAR21.VAR73 = VAR74;
VAR6->VAR21.VAR75 = VAR76;
VAR6->VAR21.VAR77 = VAR78;

VAR9 = FUN26(&VAR6->VAR21);
if (VAR9 < 0) {
FUN10(&VAR2->VAR10,
"", VAR9);
goto VAR28;
}

VAR9 = FUN27(VAR2->VAR10.VAR79,
VAR80, VAR6);
if (VAR9 < 0) {
FUN10(&VAR2->VAR10,
"", VAR9);
goto VAR81;
}

FUN28(&VAR2->VAR10, "",
VAR4->VAR12);

return 0;

VAR81:
FUN29(&VAR6->VAR21);

VAR28:
FUN30(&VAR2->VAR10);

VAR20:
FUN31(VAR6->VAR17);

return VAR9;
}