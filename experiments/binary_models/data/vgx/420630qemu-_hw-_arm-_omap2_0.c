struct VAR1 *FUN1(VAR2 *VAR3,
const char *VAR4)
{
struct VAR1 *VAR5 = FUN2(struct VAR1, 1);
qemu_irq VAR6[4];
VAR7 *VAR8;
int VAR9;
VAR10 *VAR11;
struct VAR12 *VAR13;
VAR2 *VAR14 = FUN3();


VAR5->VAR15 = VAR16;
VAR5->VAR17 = FUN4(FUN5(VAR4));
VAR5->VAR18 = VAR19;

VAR5->VAR20 = FUN6(VAR21, VAR5, 0);


FUN7(VAR5);


FUN8(&VAR5->VAR22, NULL, "", VAR5->VAR18,
&VAR23);
FUN9(VAR14, VAR24, &VAR5->VAR22);

VAR5->VAR25 = FUN10(VAR14, VAR26, 54);


VAR5->VAR27[0] = FUN11("");
FUN12(VAR5->VAR27[0], "", 0x21);
FUN13(FUN14(VAR5->VAR27[0]), FUN15(VAR5, ""));
FUN16(FUN14(VAR5->VAR27[0]), FUN15(VAR5, ""));
VAR11 = FUN17(VAR5->VAR27[0]);
FUN18(VAR11, &VAR23);
FUN19(VAR11, 0,
FUN20(FUN21(VAR5->VAR17), VAR28));
FUN19(VAR11, 1,
FUN20(FUN21(VAR5->VAR17), VAR29));
FUN22(VAR11, 0, 0x480fe000);
VAR5->VAR30 = FUN23(FUN24(VAR5->VAR25, 3),
FUN20(VAR5->VAR27[0],
VAR31),
NULL, NULL, VAR5);

VAR5->VAR32 = FUN25(FUN24(VAR5->VAR25, 1),
FUN15(VAR5, ""), VAR5);

for (VAR9 = 0; VAR9 < 4; VAR9++) {
VAR6[VAR9] = FUN20(VAR5->VAR27[VAR33[VAR9].VAR27],
VAR33[VAR9].VAR34);
}
VAR5->VAR35 = FUN26(0x48056000, VAR6, VAR14, VAR5, 256, 32,
FUN15(VAR5, ""),
FUN15(VAR5, ""));
VAR5->VAR36->VAR37 = VAR38;


FUN27(VAR5->VAR35, FUN28(VAR3),
VAR39, FUN29(VAR3));
FUN27(VAR5->VAR35, FUN28(&VAR5->VAR22),
VAR24, VAR5->VAR18);

VAR5->VAR40[0] = FUN30(VAR14, FUN31(VAR5->VAR25, 19),
FUN20(VAR5->VAR27[0],
VAR41),
FUN15(VAR5, ""),
FUN15(VAR5, ""),
VAR5->VAR42[VAR43],
VAR5->VAR42[VAR44],
"",
FUN32(0));
VAR5->VAR40[1] = FUN30(VAR14, FUN31(VAR5->VAR25, 20),
FUN20(VAR5->VAR27[0],
VAR45),
FUN15(VAR5, ""),
FUN15(VAR5, ""),
VAR5->VAR42[VAR46],
VAR5->VAR42[VAR47],
"",
FUN32(0) ? FUN32(1) : NULL);
VAR5->VAR40[2] = FUN30(VAR14, FUN31(VAR5->VAR25, 21),
FUN20(VAR5->VAR27[0],
VAR48),
FUN15(VAR5, ""),
FUN15(VAR5, ""),
VAR5->VAR42[VAR49],
VAR5->VAR42[VAR50],
"",
FUN32(0) && FUN32(1) ? FUN32(2) : NULL);

VAR5->VAR51[0] = FUN33(FUN31(VAR5->VAR25, 7),
FUN20(VAR5->VAR27[0], VAR52),
FUN15(VAR5, ""),
FUN15(VAR5, ""));
VAR5->VAR51[1] = FUN33(FUN31(VAR5->VAR25, 8),
FUN20(VAR5->VAR27[0], VAR53),
FUN15(VAR5, ""),
FUN15(VAR5, ""));
VAR5->VAR51[2] = FUN33(FUN31(VAR5->VAR25, 22),
FUN20(VAR5->VAR27[0], VAR54),
FUN15(VAR5, ""),
FUN15(VAR5, ""));
VAR5->VAR51[3] = FUN33(FUN31(VAR5->VAR25, 23),
FUN20(VAR5->VAR27[0], VAR55),
FUN15(VAR5, ""),
FUN15(VAR5, ""));
VAR5->VAR51[4] = FUN33(FUN31(VAR5->VAR25, 24),
FUN20(VAR5->VAR27[0], VAR56),
FUN15(VAR5, ""),
FUN15(VAR5, ""));
VAR5->VAR51[5] = FUN33(FUN31(VAR5->VAR25, 25),
FUN20(VAR5->VAR27[0], VAR57),
FUN15(VAR5, ""),
FUN15(VAR5, ""));
VAR5->VAR51[6] = FUN33(FUN31(VAR5->VAR25, 26),
FUN20(VAR5->VAR27[0], VAR58),
FUN15(VAR5, ""),
FUN15(VAR5, ""));
VAR5->VAR51[7] = FUN33(FUN31(VAR5->VAR25, 27),
FUN20(VAR5->VAR27[0], VAR59),
FUN15(VAR5, ""),
FUN15(VAR5, ""));
VAR5->VAR51[8] = FUN33(FUN31(VAR5->VAR25, 28),
FUN20(VAR5->VAR27[0], VAR60),
FUN15(VAR5, ""),
FUN15(VAR5, ""));
VAR5->VAR51[9] = FUN33(FUN31(VAR5->VAR25, 29),
FUN20(VAR5->VAR27[0], VAR61),
FUN15(VAR5, ""),
FUN15(VAR5, ""));
VAR5->VAR51[10] = FUN33(FUN31(VAR5->VAR25, 30),
FUN20(VAR5->VAR27[0], VAR62),
FUN15(VAR5, ""),
FUN15(VAR5, ""));
VAR5->VAR51[11] = FUN33(FUN31(VAR5->VAR25, 31),
FUN20(VAR5->VAR27[0], VAR63),
FUN15(VAR5, ""),
FUN15(VAR5, ""));

FUN34(FUN31(VAR5->VAR25, 2), VAR5);

VAR5->VAR64 = FUN35(FUN24(VAR5->VAR25, 2), VAR5,
FUN15(VAR5, ""),
FUN15(VAR5, ""));

VAR5->VAR65[0] = FUN11("");
FUN12(VAR5->VAR65[0], "", 0x34);
FUN36(FUN37(VAR5->VAR65[0]), FUN15(VAR5, ""));
FUN38(FUN37(VAR5->VAR65[0]), FUN15(VAR5, ""));
VAR11 = FUN17(VAR5->VAR65[0]);
FUN18(VAR11, &VAR23);
FUN19(VAR11, 0,
FUN20(VAR5->VAR27[0], VAR66));
FUN19(VAR11, 1, VAR5->VAR42[VAR67]);
FUN19(VAR11, 2, VAR5->VAR42[VAR68]);
FUN22(VAR11, 0, FUN39(FUN24(VAR5->VAR25, 5), 0));

VAR5->VAR65[1] = FUN11("");
FUN12(VAR5->VAR65[1], "", 0x34);
FUN36(FUN37(VAR5->VAR65[1]), FUN15(VAR5, ""));
FUN38(FUN37(VAR5->VAR65[1]), FUN15(VAR5, ""));
VAR11 = FUN17(VAR5->VAR65[1]);
FUN18(VAR11, &VAR23);
FUN19(VAR11, 0,
FUN20(VAR5->VAR27[0], VAR69));
FUN19(VAR11, 1, VAR5->VAR42[VAR70]);
FUN19(VAR11, 2, VAR5->VAR42[VAR71]);
FUN22(VAR11, 0, FUN39(FUN24(VAR5->VAR25, 6), 0));

VAR5->VAR72 = FUN11("");
FUN40(VAR5->VAR72, "", VAR5->VAR15);
FUN41(FUN42(VAR5->VAR72), FUN15(VAR5, ""));
FUN43(FUN42(VAR5->VAR72), 0, FUN15(VAR5, ""));
FUN43(FUN42(VAR5->VAR72), 1, FUN15(VAR5, ""));
FUN43(FUN42(VAR5->VAR72), 2, FUN15(VAR5, ""));
FUN43(FUN42(VAR5->VAR72), 3, FUN15(VAR5, ""));
if (VAR5->VAR15 == VAR73) {
FUN43(FUN42(VAR5->VAR72), 4,
FUN15(VAR5, ""));
}
VAR11 = FUN17(VAR5->VAR72);
FUN18(VAR11, &VAR23);
FUN19(VAR11, 0,
FUN20(VAR5->VAR27[0], VAR74));
FUN19(VAR11, 3,
FUN20(VAR5->VAR27[0], VAR75));
FUN19(VAR11, 6,
FUN20(VAR5->VAR27[0], VAR76));
FUN19(VAR11, 9,
FUN20(VAR5->VAR27[0], VAR77));
if (VAR5->VAR15 == VAR73) {
FUN19(VAR11, 12,
FUN20(VAR5->VAR27[0],
VAR78));
}
VAR13 = FUN31(VAR5->VAR25, 3);
FUN22(VAR11, 0, FUN39(VAR13, 1));
FUN22(VAR11, 1, FUN39(VAR13, 0));
FUN22(VAR11, 2, FUN39(VAR13, 2));
FUN22(VAR11, 3, FUN39(VAR13, 4));
FUN22(VAR11, 4, FUN39(VAR13, 5));

VAR5->VAR79 = FUN44(VAR14, 0x68009000);
VAR5->VAR80 = FUN45(VAR5, 0x6800a000,
FUN20(VAR5->VAR27[0], VAR81),
VAR5->VAR42[VAR82]);

VAR8 = FUN46(VAR83, 0, 0);
if (!VAR8 && !FUN47()) {
FUN48("");
}
VAR5->VAR84 = FUN49(FUN24(VAR5->VAR25, 9),
VAR8 ? FUN50(VAR8) : NULL,
FUN20(VAR5->VAR27[0], VAR85),
&VAR5->VAR42[VAR86],
FUN15(VAR5, ""), FUN15(VAR5, ""));

VAR5->VAR87[0] = FUN51(FUN31(VAR5->VAR25, 35), 4,
FUN20(VAR5->VAR27[0], VAR88),
&VAR5->VAR42[VAR89],
FUN15(VAR5, ""),
FUN15(VAR5, ""));
VAR5->VAR87[1] = FUN51(FUN31(VAR5->VAR25, 36), 2,
FUN20(VAR5->VAR27[0], VAR90),
&VAR5->VAR42[VAR91],
FUN15(VAR5, ""),
FUN15(VAR5, ""));

VAR5->VAR92 = FUN52(FUN31(VAR5->VAR25, 10), VAR14, 0x68000800,

FUN20(VAR5->VAR27[0], VAR93),
VAR5->VAR42[VAR94],
FUN15(VAR5, ""), FUN15(VAR5, ""),
FUN15(VAR5, ""),
FUN15(VAR5, ""),
FUN15(VAR5, ""));

FUN53(FUN31(VAR5->VAR25, 18), VAR14, 0x54000000,
FUN20(VAR5->VAR27[0], VAR95),
FUN15(VAR5, ""),
FUN32(0) && FUN32(1) && FUN32(2) ?
FUN32(3) : NULL);

VAR5->VAR96 = FUN54(FUN31(VAR5->VAR25, 32),
FUN20(VAR5->VAR27[0], VAR97),

&VAR5->VAR42[VAR98],
FUN15(VAR5, ""),
FUN15(VAR5, ""));



FUN55(VAR99, VAR5);

return VAR5;
}