static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
struct VAR7 *VAR8;
struct VAR9 *VAR10;
int VAR11 = -VAR12;
u32 VAR13, VAR14;


VAR6 = FUN2(VAR2);
FUN3(!VAR6);

VAR8 = FUN4(sizeof(*VAR8), VAR15);
if (VAR8 == NULL) {
FUN5(&VAR6->VAR8, "");
return -VAR12;
}


FUN6(&VAR8->VAR16); 
FUN7(&VAR8->VAR16); 

VAR8->VAR17 = VAR6;
VAR8->VAR18 = &VAR6->VAR8; 
FUN8(VAR2, VAR8);

FUN9(VAR8->VAR18, "",
VAR6->VAR19, VAR6->VAR20, VAR6->VAR21);
FUN9(VAR8->VAR18, "",
FUN10(VAR6->VAR22.VAR23),
FUN10(VAR6->VAR22.VAR24),
FUN10(VAR6->VAR22.VAR25), VAR8);
FUN9(VAR8->VAR18, "", VAR26);
FUN9(VAR8->VAR18, "", VAR27);

if (!FUN11(VAR8, VAR28, VAR29)) {
FUN5(VAR8->VAR18, "");
goto VAR30;
}




VAR10 = FUN12(0, &VAR6->VAR8);
if (!VAR10) {
FUN5(VAR8->VAR18, "");
goto VAR31;
}

VAR8->VAR10 = VAR10;
VAR10->VAR32 = VAR8;
VAR10->VAR33 = VAR8->VAR33;
VAR10->VAR34 = &VAR35;
FUN13(&VAR10->VAR36);

VAR11 = FUN14(&VAR10->VAR37, 256, 0);
if (VAR11 < 0) {
FUN5(VAR8->VAR18, "", VAR11);
goto VAR38;
}

VAR11 = FUN15(VAR8, 0x3000, &VAR13);
FUN16(VAR11, "", VAR11);
FUN9(VAR8->VAR18, "", VAR13);

VAR11 = FUN15(VAR8, 0x3004, &VAR14);
FUN16(VAR11, "", VAR11);
FUN9(VAR8->VAR18, "", VAR14);

FUN9(VAR8->VAR18, "");
VAR11 = FUN17(VAR8);
FUN16(VAR11, "", VAR11);

FUN9(VAR8->VAR18, "");
VAR11 = FUN18(VAR8);
FUN16(VAR11, "", VAR11);

FUN9(VAR8->VAR18, "");
VAR11 = FUN19(VAR8);
FUN16(VAR11, "", VAR11);

FUN9(VAR8->VAR18, "");
VAR11 = FUN20(VAR8);
FUN16(VAR11, "", VAR11);

FUN9(VAR8->VAR18, "");
VAR11 = FUN21(VAR8, VAR10, NULL, 0);
FUN16(VAR11, "");

VAR11 = FUN22(VAR8, 0x4000, 0x00000001);
if (VAR11 < 0) {
FUN5(VAR8->VAR18, "", VAR11);
goto VAR39;
}


FUN23(&VAR8->VAR40, 1);

FUN9(VAR8->VAR18, "");
VAR11 = FUN24(&VAR10->VAR41, VAR10);
if (VAR11 < 0) {
FUN5(VAR8->VAR18, "", VAR11);
goto VAR42;
}

FUN9(VAR8->VAR18, "");
VAR11 = FUN25(VAR10);
if (VAR11 < 0) {
FUN5(VAR8->VAR18, "", VAR11);
goto VAR42;
}

FUN9(VAR8->VAR18, "");
VAR11 = FUN26(VAR10);
if (VAR11 < 0) {
FUN5(VAR8->VAR18, "", VAR11);
goto VAR42;
}

FUN27(VAR8->VAR18, ""
"", VAR10->VAR43,
VAR10->VAR41.VAR44, VAR10->VAR41.VAR45, VAR10->VAR46.VAR47 >> 10);

return 0;

VAR42:
FUN23(&VAR8->VAR40, 0);
VAR39:
FUN28(VAR10->VAR48.VAR49);
FUN29(VAR10->VAR50);
FUN30(&VAR10->VAR36);
VAR51:
FUN31(&VAR10->VAR37);
VAR38:
FUN32(VAR10);
VAR31:
if (VAR8->VAR52.VAR53 > 0)
FUN33(VAR8);
VAR30:
FUN34(&VAR8->VAR16, VAR54); 
FUN34(&VAR8->VAR16, VAR54); 
return VAR11;
}