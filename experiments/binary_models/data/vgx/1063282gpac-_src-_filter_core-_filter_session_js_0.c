static VAR1 FUN1(VAR2 *VAR3, const char *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
GF_Err VAR9;
JSValue VAR10;
VAR11 *VAR12;
u32 VAR13;
u32 VAR14 = VAR15;
JSValue VAR16;
VAR5 *VAR17;


if (!VAR3) return VAR18;
if (!VAR6) {
if (VAR3->VAR19) return VAR20;

VAR17 = FUN2();
if (!VAR17) {
FUN3(VAR21, VAR22, (""));
return VAR23;
}
FUN4(VAR17, VAR3);

VAR10 = FUN5(VAR17);
FUN6(VAR17, VAR3);
VAR3->VAR19 = VAR17;

FUN7(VAR3->VAR19, VAR10, "", FUN8(VAR3->VAR19, FUN9(VAR4) ) );
FUN7(VAR3->VAR19, VAR10, "", FUN8(VAR3->VAR19, VAR4 ) );
FUN10(VAR3->VAR19, VAR10);
} else {
VAR17 = VAR6;
}


if (!FUN11(VAR4, "", 8)) {
char VAR24[VAR25];
if (FUN12(VAR24)) {
strcat(VAR24, VAR4 + 7);
VAR9 = FUN13(VAR24, &VAR12, &VAR13);
} else {
VAR9 = VAR26;
}
} else {
VAR9 = FUN13(VAR4, &VAR12, &VAR13);
}
if (VAR9) {
FUN3(VAR21, VAR22, ("", VAR4, FUN14(VAR9) ));
return VAR9;
}

if (VAR6 || (!FUN15("", "") && FUN16((char *)VAR12, VAR13))) {
FUN17(VAR17, VAR27, VAR27);
VAR14 = VAR28;
}

JSValue VAR29 = FUN5(VAR17);
FUN7(VAR17, VAR29, "", VAR8 ? FUN18(VAR17, VAR8) : VAR30);
FUN10(VAR17, VAR29);

VAR16 = FUN19(VAR17, (char *)VAR12, VAR13, VAR4, VAR14);
FUN20(VAR12);

if (FUN21(VAR16)) {
FUN3(VAR21, VAR22, ("", VAR4));
FUN22(VAR17);
FUN10(VAR17, VAR16);
return VAR18;
}
FUN10(VAR17, VAR16);
FUN23(VAR17);
return VAR31;
return VAR20;

}