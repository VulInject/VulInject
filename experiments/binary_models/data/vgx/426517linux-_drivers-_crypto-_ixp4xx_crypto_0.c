static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5;
u32 VAR6[2] = { 0, 0 };
int VAR7 = -VAR8;
u32 VAR9;

FUN2(VAR2, "");


if (FUN3(VAR10) && VAR4) {
struct of_phandle_args VAR11;
struct of_phandle_args VAR12;

VAR7 = FUN4(VAR4, "",
1, 0, &VAR12);
if (VAR7) {
FUN5(VAR2, "");
return -VAR8;
}
VAR9 = VAR12.VAR13[0];

VAR7 = FUN4(VAR4, "", 1, 0,
&VAR11);
if (VAR7) {
FUN5(VAR2, "");
return -VAR8;
}
VAR14 = VAR11.VAR13[0];

VAR7 = FUN4(VAR4, "", 1, 0,
&VAR11);
if (VAR7) {
FUN5(VAR2, "");
return -VAR8;
}
VAR15 = VAR11.VAR13[0];
} else {

VAR9 = 2;
VAR15 = 29;
VAR14 = 30;
}

VAR16 = FUN6(VAR9);
if (!VAR16)
return VAR7;

if (!FUN7(VAR16)) {
VAR7 = FUN8(VAR16, FUN9(VAR16), VAR2);
if (VAR7)
goto VAR17;
if (FUN10(VAR16, VAR6, ""))
goto VAR18;
} else {
if (FUN11(VAR16, VAR6, ""))
goto VAR18;

if (FUN10(VAR16, VAR6, ""))
goto VAR18;
}

switch ((VAR6[1] >> 16) & 0xff) {
case 3:
FUN12(VAR2, "", FUN9(VAR16));
VAR19 = 0;
break;
case 4:
case 5:
VAR19 = 1;
break;
default:
FUN5(VAR2, "", FUN9(VAR16));
VAR7 = -VAR8;
goto VAR17;
}

FUN13(VAR20 > sizeof(struct VAR21));
VAR22 = FUN14("", VAR2, sizeof(struct VAR21),
32, 0);
VAR7 = -VAR23;
if (!VAR22)
goto VAR24;

VAR25 = FUN14("", VAR2, VAR26, 16, 0);
if (!VAR25)
goto VAR24;

VAR7 = FUN15(VAR15, VAR27, 0, 0,
"", NULL);
if (VAR7)
goto VAR24;
VAR7 = FUN15(VAR14, VAR28, 0, 0,
"", NULL);
if (VAR7) {
FUN16(VAR15);
goto VAR24;
}
FUN17(VAR14, VAR29, VAR30, NULL);
FUN18(&VAR31, VAR32, 0);

FUN19(VAR14);
return 0;

VAR18:
FUN5(VAR2, "", FUN9(VAR16));
VAR7 = -VAR33;
VAR24:
FUN20(VAR25);
FUN20(VAR22);
VAR17:
FUN21(VAR16);
return VAR7;
}