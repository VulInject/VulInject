void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4, VAR5 *VAR6,
VAR5 *VAR7,
struct VAR8 *VAR9,
struct VAR10 *VAR11,
struct VAR12 *VAR13,
u8 VAR14, struct VAR15 *VAR16)
{
struct VAR17 *VAR18 = FUN2(VAR2);
struct VAR19 *VAR20 = FUN3(FUN2(VAR2));
struct VAR21 *VAR22 = FUN4(FUN5(VAR2));
struct VAR23 *VAR24 = FUN6(VAR18);
VAR5 *VAR25 = (VAR5 *)VAR6;
u16 VAR26;
__le16 VAR27 = VAR4->VAR28;
unsigned int VAR29 = 0;
u8 VAR30 = FUN7(VAR13, VAR14);
bool VAR31 = ((VAR4->VAR32 &
FUN8(VAR33)) == 0);
bool VAR34 = ((VAR4->VAR28 &
FUN8(VAR35)) == 0);
dma_addr_t VAR36;
u8 VAR37 = 0;
u8 VAR38 = 0;

if (VAR20->VAR39 == VAR40) {
VAR37 = VAR20->VAR37;
} else if (VAR20->VAR39 == VAR41 ||
VAR20->VAR39 == VAR42) {
if (VAR11)
VAR37 = VAR11->VAR43.VAR44 &
VAR45;
}
VAR26 = (FUN9(VAR4->VAR32) & VAR46) >> 4;
FUN10(VAR2, VAR9, VAR11, VAR13, VAR16);

if (VAR24->VAR47) {
FUN11(VAR13, VAR48);
memset(VAR13->VAR49, 0, VAR48);
}
VAR29 = VAR13->VAR50;
VAR36 = FUN12(VAR22->VAR51, VAR13->VAR49, VAR13->VAR50,
VAR52);
if (FUN13(VAR22->VAR51, VAR36)) {
FUN14(VAR18, VAR53, VAR54,
"");
return;
}

if (VAR7 != NULL)
FUN15(VAR2, VAR7, VAR25, VAR14,
VAR13, VAR36);

if (FUN16(VAR27) || FUN17(VAR27)) {
VAR31 = true;
VAR34 = true;
}
if (VAR31) {
if (VAR24->VAR47) {
FUN18(VAR25, 1);
FUN19(VAR25,
VAR55 + VAR48);
if (VAR16->VAR56) {
FUN14(VAR18, VAR53, VAR54,
"",
VAR16->VAR56);
FUN20(VAR16,
(VAR5 *)(VAR13->VAR49));
}
} else {
FUN19(VAR25, VAR55);
}

FUN21(VAR25, VAR16->VAR57);

if (FUN22(VAR27)) {
VAR16->VAR58 = true;
} else {
if (VAR18->VAR59.VAR60) {
VAR16->VAR58 = true;
FUN21(VAR25, VAR61);
} else {
VAR16->VAR58 = false;
}
}

if (VAR16->VAR57 > VAR62)
VAR38 = (VAR16->VAR63) ? 1 : 0;
else
VAR38 = (VAR16->VAR64) ? 1 : 0;

if (VAR9->VAR65 & VAR66) {
FUN23(VAR25, 1);
FUN24(VAR25, 0x14);
}
FUN25(VAR25, VAR26);
FUN26(VAR25,
((VAR16->VAR67 &&
!VAR16->VAR68) ? 1 : 0));
FUN27(VAR25, 0);
FUN28(VAR25,
((VAR16->VAR68) ? 1 : 0));

FUN29(VAR25, VAR16->VAR69);
FUN30(VAR25, VAR16->VAR70);
FUN31(VAR25,
((VAR16->VAR69 <= VAR71) ?
(VAR16->VAR72 ? 1 : 0) :
(VAR16->VAR73 ? 1 : 0)));

if (VAR16->VAR74)
FUN32(VAR25, 1);

if (VAR37) {
if (VAR16->VAR75 == VAR76) {
FUN33(VAR25, 1);
FUN34(VAR25, 3);
} else {
FUN33(VAR25, 0);
FUN34(VAR25,
VAR20->VAR77);
}
} else {
FUN33(VAR25, 0);
FUN34(VAR25, 0);
}

FUN35(VAR25, 0);
if (VAR11) {
u8 VAR78 = VAR11->VAR43.VAR78;

FUN36(VAR25, VAR78);
}
if (VAR9->VAR79.VAR80) {
struct VAR81 *VAR82 = VAR9->VAR79.VAR80;

switch (VAR82->VAR83) {
case VAR84:
case VAR85:
case VAR86:
FUN37(VAR25, 0x1);
break;
case VAR87:
FUN37(VAR25, 0x3);
break;
default:
FUN37(VAR25, 0x0);
break;
}
}

FUN38(VAR25, VAR30);
FUN39(VAR25, 0x1F);
FUN40(VAR25, 0xF);
FUN41(VAR25,
VAR16->VAR88 ? 1 : 0);
FUN42(VAR25, VAR16->VAR58 ? 1 : 0);





if (!VAR16->VAR58) {


}
if (FUN43(VAR27)) {
if (VAR20->VAR89) {
FUN14(VAR18, VAR53, VAR54,
"");
FUN44(VAR25, 1);
FUN45(VAR25, 1);
}
}
}

FUN46(VAR25, (VAR31 ? 1 : 0));
FUN47(VAR25, (VAR34 ? 1 : 0));
FUN48(VAR25, VAR36);
if (VAR18->VAR90.VAR91) {
FUN49(VAR25, VAR16->VAR92);
FUN50(VAR25, VAR16->VAR93);
} else {
FUN49(VAR25, 0xC + VAR16->VAR92);
FUN50(VAR25, VAR16->VAR92);
}

FUN51(VAR25, (VAR34 ? 0 : 1));
if (FUN52(FUN53(VAR4)) ||
FUN54(FUN53(VAR4))) {
FUN55(VAR25, 1);
}
FUN14(VAR18, VAR53, VAR54, "");
}