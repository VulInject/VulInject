static void FUN1(struct VAR1 *VAR1)
{
static struct VAR2	*VAR3;
struct VAR4		*VAR4, *VAR5;
struct VAR6		*VAR7;
struct VAR8	*VAR9;
static struct VAR10	*VAR10, *VAR11;
struct VAR12		*VAR13, *VAR14;
struct VAR15		*VAR16, *VAR17;
struct imsg		 VAR18;
struct VAR19		*VAR19;
struct VAR20		*VAR21;
int			 VAR22;
struct VAR23		*VAR24 = FUN2(VAR1);
struct VAR25		*VAR26 = &VAR24->VAR26;
ssize_t			 VAR27;
int			 VAR28 = 0;
struct fec		 VAR29;
struct VAR30	*VAR31;
struct VAR32	 *VAR33, *VAR34;
struct VAR35	 *VAR36;
struct VAR37 *VAR38;
struct VAR39	 *VAR40;

VAR24->VAR41 = NULL;

if ((VAR27 = FUN3(VAR26)) == -1 && VAR42 != VAR43)
FUN4("");
if (VAR27 == 0)	
VAR28 = 1;

for (;;) {
if ((VAR27 = FUN5(VAR26, &VAR18)) == -1)
FUN4("");
if (VAR27 == 0)
break;

switch (VAR18.VAR44.VAR45) {
case VAR46:
if (VAR18.VAR44.VAR47 != VAR48 + sizeof(struct VAR19))
FUN6("");
VAR19 = VAR18.VAR49;

VAR4 = FUN7(VAR50, VAR19->VAR51);
if (VAR4) {
FUN8(VAR4, VAR19);


if (VAR19->VAR52)
FUN9(VAR4, VAR53);
break;
}

FUN10(VAR10, VAR54, &VAR50->VAR55) {
VAR13 = FUN11(VAR10, VAR19->VAR51);
if (VAR13) {
FUN12(VAR13, VAR19);
break;
}
VAR16 = FUN13(VAR10, VAR19->VAR51);
if (VAR16) {
FUN14(VAR16, VAR19);
break;
}
}
break;
case VAR56:
if (VAR18.VAR44.VAR47 != VAR48 + sizeof(struct VAR57))
FUN6("");

if (FUN15(VAR18.VAR49) != 0)
FUN16("", VAR58);
break;
case VAR59:
case VAR60:
if (VAR18.VAR44.VAR47 != VAR48 + sizeof(struct VAR20)) {
FUN16("", VAR58);
break;
}
VAR21 = VAR18.VAR49;

switch (VAR21->VAR61) {
case VAR62:
VAR29.VAR45 = VAR63;
VAR29.VAR64.VAR65.VAR66 = VAR21->VAR66.VAR67;
VAR29.VAR64.VAR65.VAR68 = VAR21->VAR68;
break;
case VAR69:
VAR29.VAR45 = VAR70;
VAR29.VAR64.VAR71.VAR66 = VAR21->VAR66.VAR72;
VAR29.VAR64.VAR71.VAR68 = VAR21->VAR68;
break;
default:
FUN6("");
}

switch (VAR18.VAR44.VAR45) {
case VAR59:
FUN17(&VAR29, VAR21->VAR61, &VAR21->VAR73,
VAR21->VAR74, VAR21->VAR75, VAR21->VAR76,
FUN18(VAR21->VAR77, VAR78), NULL);
break;
case VAR60:
FUN19(&VAR29);
break;
}
break;
case VAR79:
if (VAR80) {
FUN16("", VAR58);
break;
}
if ((VAR22 = VAR18.VAR22) == -1) {
FUN16("", VAR58);
break;
}

if ((VAR80 = malloc(sizeof(struct VAR23))) == NULL)
FUN4(NULL);
FUN20(&VAR80->VAR26, VAR22);
VAR80->VAR81 = VAR82;
FUN21(VAR83, VAR80->VAR81, VAR80, VAR80->VAR26.VAR22,
&VAR80->VAR41);
VAR80->VAR84 = VAR85;
VAR80->VAR86 = NULL;
break;
case VAR87:
if (VAR18.VAR44.VAR47 != VAR48 +
sizeof(struct VAR88))
FUN6("");

memcpy(&VAR89, VAR18.VAR49, sizeof(VAR89));
FUN22(&VAR89);
break;
case VAR90:
FUN23();
break;
case VAR91:
if ((VAR3 = malloc(sizeof(struct VAR2))) == NULL)
FUN4(NULL);
memcpy(VAR3, VAR18.VAR49, sizeof(struct VAR2));

FUN24(VAR92, &VAR3->VAR93);
FUN24(VAR94, &VAR3->VAR95);
FUN24(VAR96, &VAR3->VAR97);
FUN24(VAR54, &VAR3->VAR55);
break;
case VAR98:
if ((VAR5 = malloc(sizeof(struct VAR4))) == NULL)
FUN4(NULL);
memcpy(VAR5, VAR18.VAR49, sizeof(struct VAR4));

FUN25(VAR92, &VAR3->VAR93, VAR5);
break;
case VAR99:
if ((VAR7 = malloc(sizeof(struct VAR6))) == NULL)
FUN4(NULL);
memcpy(VAR7, VAR18.VAR49, sizeof(struct VAR6));

FUN25(VAR94, &VAR3->VAR95, VAR7);
break;
case VAR100:
if ((VAR9 = malloc(sizeof(struct VAR8))) == NULL)
FUN4(NULL);
memcpy(VAR9, VAR18.VAR49, sizeof(struct VAR8));

FUN25(VAR96, &VAR3->VAR97, VAR9);
break;
case VAR101:
if ((VAR11 = malloc(sizeof(struct VAR10))) == NULL)
FUN4(NULL);
memcpy(VAR11, VAR18.VAR49, sizeof(struct VAR10));

FUN24(VAR102, &VAR11->VAR103);
FUN24(VAR104, &VAR11->VAR105);
FUN24(VAR104, &VAR11->VAR106);

FUN25(VAR54, &VAR3->VAR55, VAR11);
break;
case VAR107:
if ((VAR14 = malloc(sizeof(struct VAR12))) == NULL)
FUN4(NULL);
memcpy(VAR14, VAR18.VAR49, sizeof(struct VAR12));

FUN25(VAR102, &VAR11->VAR103, VAR14);
break;
case VAR108:
if ((VAR17 = malloc(sizeof(struct VAR15))) == NULL)
FUN4(NULL);
memcpy(VAR17, VAR18.VAR49, sizeof(struct VAR15));

FUN25(VAR104, &VAR11->VAR105, VAR17);
break;
case VAR109:
if ((VAR17 = malloc(sizeof(struct VAR15))) == NULL)
FUN4(NULL);
memcpy(VAR17, VAR18.VAR49, sizeof(struct VAR15));

FUN25(VAR104, &VAR11->VAR106, VAR17);
break;
case VAR110:
FUN26(VAR50, VAR3);
FUN27(VAR3);
VAR3 = NULL;
break;
case VAR111:
if (VAR18.VAR44.VAR47 != VAR48 +
sizeof(VAR112)) {
FUN16("", VAR58);
break;
}
memcpy(&VAR112, VAR18.VAR49, sizeof(VAR112));
break;
case VAR113:
if (VAR18.VAR44.VAR47 != VAR48 +
sizeof(struct VAR30)) {
FUN16("", VAR58);
break;
}
VAR31 = VAR18.VAR49;
FUN28(VAR62, &VAR50->VAR65,
VAR31->VAR114);
FUN28(VAR69, &VAR50->VAR71,
VAR31->VAR114);
break;
case VAR115:
if (VAR18.VAR44.VAR47 != VAR48 +
sizeof(struct VAR37)) {
FUN16("", VAR58);
break;
}
VAR38 = VAR18.VAR49;
VAR33 = FUN29(&VAR38->VAR116,
VAR38->VAR117);
if (!VAR33)
VAR33 = FUN30(&VAR38->VAR116,
VAR38->VAR117);
VAR36 = FUN31(VAR33, &VAR38->VAR118);
if (VAR36)

break;
VAR36 = FUN32(VAR33, &VAR38->VAR118);
FUN33(VAR36);
break;
case VAR119:
if (VAR18.VAR44.VAR47 != VAR48 +
sizeof(struct VAR39)) {
FUN16("", VAR58);
break;
}
VAR40 = VAR18.VAR49;

FUN34 (VAR33, VAR120,
&VAR121, VAR34) {
VAR36 = FUN31(VAR33, VAR40);
if (!VAR36)
continue;

FUN35(VAR36);
}
break;
default:
FUN36("", VAR58, VAR18.VAR44.VAR45);
break;
}
FUN37(&VAR18);
}
if (!VAR28)
FUN38(VAR24);
else {

FUN39(VAR24->VAR41);
FUN39(VAR24->VAR86);
FUN40();
}
}