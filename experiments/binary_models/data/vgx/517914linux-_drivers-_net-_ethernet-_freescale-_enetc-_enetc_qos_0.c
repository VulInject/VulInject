static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = NULL, *VAR7 = NULL;
struct VAR8 *VAR9 = FUN2(VAR4);
struct VAR10 *VAR11 = VAR4->VAR12.VAR11;
struct VAR13 *VAR14, *VAR15;
struct VAR16 *VAR17 = NULL, *VAR18;
struct VAR19 *VAR20, *VAR21;
struct VAR22 *VAR23, *VAR24;
struct VAR5 *VAR25;
struct VAR26 *VAR27;
u8 VAR28 = 0;
int VAR29;
int VAR30, VAR31;

if (VAR4->VAR12.VAR32 >= VAR2->VAR33.VAR34) {
FUN3(VAR11, "");
return -VAR35;
}

FUN4(VAR30, VAR25, &VAR9->VAR36)
if (VAR25->VAR37 == VAR38)
VAR6 = VAR25;
else if (VAR25->VAR37 == VAR39)
VAR7 = VAR25;


if (!VAR6)
return -VAR40;

VAR14 = FUN5(sizeof(*VAR14), VAR41);
if (!VAR14)
return -VAR42;

VAR14->VAR43.VAR44 = VAR4->VAR12.VAR32;

if (FUN6(VAR9, VAR45)) {
struct flow_match_eth_addrs VAR46;

FUN7(VAR9, &VAR46);

if (!FUN8(VAR46.VAR47->VAR48) &&
!FUN8(VAR46.VAR47->VAR49)) {
FUN3(VAR11,
"");
VAR31 = -VAR40;
goto VAR50;
}

if (!FUN8(VAR46.VAR47->VAR48)) {
if (!FUN9(VAR46.VAR47->VAR48)) {
FUN3(VAR11,
"");
VAR31 = -VAR40;
goto VAR50;
}
FUN10(VAR14->VAR43.VAR51, VAR46.VAR52->VAR48);
VAR14->VAR43.VAR53 = VAR54;
}

if (!FUN8(VAR46.VAR47->VAR49)) {
if (!FUN9(VAR46.VAR47->VAR49)) {
FUN3(VAR11,
"");
VAR31 = -VAR40;
goto VAR50;
}
FUN10(VAR14->VAR43.VAR55, VAR46.VAR52->VAR49);
VAR14->VAR43.VAR53 = VAR56;
}
} else {
FUN3(VAR11, "");
VAR31 = -VAR40;
goto VAR50;
}

if (FUN6(VAR9, VAR57)) {
struct flow_match_vlan VAR46;

FUN11(VAR9, &VAR46);
if (VAR46.VAR47->VAR58) {
if (VAR46.VAR47->VAR58 !=
(VAR59 >> VAR60)) {
FUN3(VAR11, "");
VAR31 = -VAR40;
goto VAR50;
}
}

if (VAR46.VAR47->VAR61) {
if (VAR46.VAR47->VAR61 != VAR62) {
FUN3(VAR11, "");
VAR31 = -VAR40;
goto VAR50;
}

VAR14->VAR43.VAR63 = VAR46.VAR52->VAR61;
if (!VAR14->VAR43.VAR63)
VAR14->VAR43.VAR64 = VAR65;
else
VAR14->VAR43.VAR64 = VAR66;
}
} else {
VAR14->VAR43.VAR64 = VAR67;
}


if (VAR6->VAR68 >= VAR2->VAR33.VAR69) {
FUN3(VAR11, "");
VAR31 = -VAR35;
goto VAR50;
}

if (VAR6->VAR70.VAR71 >= VAR2->VAR33.VAR72) {
FUN3(VAR11, "");
VAR31 = -VAR35;
goto VAR50;
}

VAR29 = FUN12(VAR23, VAR73, VAR6->VAR70.VAR71);
VAR23 = FUN5(VAR29, VAR41);
if (!VAR23) {
VAR31 = -VAR42;
goto VAR50;
}

FUN13(&VAR23->VAR74, 1);
VAR23->VAR44 = VAR6->VAR68;
VAR23->VAR75 = VAR6->VAR70.VAR76;
VAR23->VAR77 = VAR6->VAR70.VAR77;
VAR23->VAR78 = VAR6->VAR70.VAR78;
VAR23->VAR71 = VAR6->VAR70.VAR71;

VAR27 = VAR23->VAR73;
for (VAR30 = 0; VAR30 < VAR6->VAR70.VAR71; VAR30++) {
VAR27[VAR30].VAR79 = VAR6->VAR70.VAR73[VAR30].VAR79;
VAR27[VAR30].VAR80 = VAR6->VAR70.VAR73[VAR30].VAR80;
VAR27[VAR30].VAR81 = VAR6->VAR70.VAR73[VAR30].VAR81;
VAR27[VAR30].VAR82 = VAR6->VAR70.VAR73[VAR30].VAR82;
}

VAR14->VAR83 = VAR23->VAR44;

VAR20 = FUN5(sizeof(*VAR20), VAR41);
if (!VAR20) {
VAR31 = -VAR42;
goto VAR84;
}

FUN13(&VAR20->VAR74, 1);
VAR20->VAR85 = VAR23->VAR44;
VAR20->VAR86 = VAR87;


if (VAR7) {
VAR31 = FUN14(&VAR9->VAR36, VAR7, VAR11);
if (VAR31)
goto VAR88;

if (VAR7->VAR89.VAR90) {
VAR17 = FUN5(sizeof(*VAR17), VAR41);
if (!VAR17) {
VAR31 = -VAR42;
goto VAR88;
}
FUN13(&VAR17->VAR74, 1);
VAR17->VAR91 = VAR7->VAR89.VAR92;
VAR17->VAR93 = VAR7->VAR89.VAR90;
VAR17->VAR44 = VAR7->VAR68;
VAR14->VAR94 |= VAR95;
VAR14->VAR96 = VAR17->VAR44;
VAR20->VAR86 = VAR17->VAR44;
}

if (VAR7->VAR89.VAR97)
VAR20->VAR98 = VAR7->VAR89.VAR97;
}


if (VAR4->VAR12.VAR76 && VAR4->VAR12.VAR76 <= FUN15(3))
VAR20->VAR76 = VAR4->VAR12.VAR76 - 1;
else
VAR20->VAR76 = VAR87;

VAR21 = FUN16(VAR20);
if (!VAR21) {
int VAR44;

VAR44 = FUN17(VAR2);
if (VAR20->VAR99 < 0) {
FUN3(VAR11, "");
VAR31 = -VAR35;
goto VAR100;
}

VAR20->VAR44 = VAR44;
VAR20->VAR99 = VAR44 + VAR101;

VAR14->VAR43.VAR99 = VAR20->VAR99;
VAR14->VAR102 = VAR20->VAR44;
VAR28 = 0;
} else {
VAR14->VAR102 = VAR21->VAR44;
VAR14->VAR43.VAR99 = VAR21->VAR99;
VAR28 = 1;
}

VAR31 = FUN18(VAR2, &VAR14->VAR43,
VAR28 ? NULL : VAR20, VAR23, VAR17);
if (VAR31)
goto VAR100;

FUN19(&VAR103.VAR104);
if (VAR14->VAR94 & VAR95) {
VAR18 = FUN20(VAR14->VAR96);
if (VAR18) {
VAR17->VAR74 = VAR18->VAR74;
FUN13(&VAR17->VAR74,
FUN21(&VAR18->VAR74) + 1);
FUN22(&VAR18->VAR105);
FUN23(VAR18);
}
FUN24(&VAR17->VAR105, &VAR103.VAR106);
}


VAR24 = FUN25(VAR14->VAR83);
if (VAR24) {
FUN13(&VAR23->VAR74,
FUN21(&VAR24->VAR74) + 1);
FUN22(&VAR24->VAR105);
FUN23(VAR24);
}

FUN24(&VAR23->VAR105, &VAR103.VAR107);

if (!VAR21) {
FUN24(&VAR20->VAR105, &VAR103.VAR108);
FUN26(VAR20->VAR44, VAR103.VAR109);
} else {
FUN23(VAR20);
FUN27(&VAR21->VAR74);
}

VAR15 = FUN28(VAR14->VAR43.VAR44);
if (VAR15)
FUN29(VAR2, VAR15);

VAR14->VAR110.VAR111 = VAR112;
FUN24(&VAR14->VAR105, &VAR103.VAR113);

FUN30(&VAR103.VAR104);

return 0;

VAR100:
FUN23(VAR17);
VAR88:
FUN23(VAR20);
VAR84:
FUN23(VAR23);
VAR50:
FUN23(VAR14);

return VAR31;
}