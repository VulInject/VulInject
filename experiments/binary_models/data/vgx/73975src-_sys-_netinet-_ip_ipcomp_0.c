int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3, int VAR4, int VAR5)
{
const struct VAR6 *VAR7 = VAR3->VAR8;
int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
struct VAR15 *VAR16 = NULL;
struct VAR17 *VAR18 = NULL;
struct VAR1 *VAR19, *VAR20;
struct VAR21 *VAR21;
u_int16_t VAR22;
struct VAR23 *VAR24;
char VAR25[VAR26];
struct VAR27 *VAR28;
struct VAR29  *VAR29;

if ((VAR28 = FUN2(0, VAR3->VAR30)) != NULL) {
VAR28->VAR31++;
VAR28->VAR32 += VAR2->VAR33.VAR34;

if (VAR28->VAR35) {
struct enchdr VAR36;

memset(&VAR36, 0, sizeof(VAR36));

VAR36.VAR37 = VAR3->VAR38.VAR39.VAR40;
VAR36.VAR41 = VAR3->VAR42;

FUN3(VAR28->VAR35, (char *)&VAR36,
VAR43, VAR2, VAR44);
}
}
VAR10 = VAR45;

FUN4(VAR46);

switch (VAR3->VAR38.VAR39.VAR40) {
case VAR47:


if (VAR2->VAR33.VAR34 + VAR10 > VAR48) {
FUN5("",
FUN6(&VAR3->VAR38, VAR25, sizeof(VAR25)),
FUN7(VAR3->VAR42));
FUN4(VAR49);
VAR9 = VAR50;
goto VAR51;
}
break;

case VAR52:

if (VAR2->VAR33.VAR34 + VAR10 > VAR53) {
FUN5("",
FUN6(&VAR3->VAR38, VAR25, sizeof(VAR25)),
FUN7(VAR3->VAR42));
FUN4(VAR49);
VAR9 = VAR50;
goto VAR51;
}
break;

default:
FUN5("",
VAR3->VAR38.VAR39.VAR40,
FUN6(&VAR3->VAR38, VAR25, sizeof(VAR25)),
FUN7(VAR3->VAR42));
FUN4(VAR54);
VAR9 = VAR55;
goto VAR51;
}


VAR3->VAR56 += VAR2->VAR33.VAR34 - VAR4;
FUN8(VAR57, VAR2->VAR33.VAR34 - VAR4);


if ((VAR3->VAR58 & VAR59) &&
(VAR3->VAR56 >= VAR3->VAR60)) {
FUN9(VAR61);
FUN10(VAR3, VAR62);
FUN11(VAR3);
VAR9 = VAR63;
goto VAR51;
}


FUN12(&VAR3->VAR64);
if ((VAR3->VAR58 & VAR65) &&
(VAR3->VAR56 >= VAR3->VAR66)) {
VAR3->VAR58 &= ~VAR65;  
FUN13(&VAR3->VAR64);

FUN10(VAR3, VAR67);
} else
FUN13(&VAR3->VAR64);


VAR19 = VAR2;
while (VAR19 != NULL && !FUN14(VAR19))
VAR19 = VAR19->VAR68;

if (VAR19 != NULL) {
struct VAR1 *VAR69 = FUN15(VAR2, 0, VAR70);

if (VAR69 == NULL) {
FUN5("",
FUN6(&VAR3->VAR38, VAR25, sizeof(VAR25)),
FUN7(VAR3->VAR42));
FUN4(VAR71);
VAR9 = VAR72;
goto VAR51;
}

FUN16(VAR2);
VAR2 = VAR69;
}



VAR18 = FUN17(1);
if (VAR18 == NULL) {
FUN5("");
FUN4(VAR73);
VAR9 = VAR72;
goto VAR51;
}
VAR16 = &VAR18->VAR74[0];


VAR16->VAR75 = VAR4;
VAR16->VAR76 = VAR2->VAR33.VAR34 - VAR4;
VAR16->VAR77 = VAR78;
VAR16->VAR79 = VAR4;


VAR16->VAR80 = VAR7->VAR81;


VAR18->VAR82 = VAR2->VAR33.VAR34;	
VAR18->VAR83 = VAR84;
VAR18->VAR85 = (VAR86)VAR2;
VAR18->VAR87 = VAR3->VAR88;

while ((VAR9 = FUN18(VAR18)) == VAR89) {

if (VAR3->VAR88 != 0)
VAR3->VAR88 = VAR18->VAR87;
}
if (VAR9) {
FUN5("", VAR9);
FUN9(VAR90);
goto VAR51;
}

VAR11 = VAR18->VAR82;
VAR12 = VAR18->VAR91;


FUN19(VAR18);
VAR18 = NULL;

VAR13 = VAR11 - VAR4;


if (VAR13 <= VAR12 + VAR45) {

FUN4(VAR92); 
goto VAR93;
}


VAR20 = FUN20(VAR2, VAR4, VAR45, &VAR14);
if (VAR20 == NULL) {
FUN5("",
FUN6(&VAR3->VAR38, VAR25, sizeof(VAR25)),
FUN7(VAR3->VAR42));
FUN4(VAR94);
VAR9 = VAR72;
goto VAR51;
}


VAR29 = (struct VAR29 *)(FUN21(VAR20, VAR86) + VAR14);
memset(VAR29, 0, sizeof(struct VAR29));
VAR22 = (VAR95) FUN7(VAR3->VAR42);
VAR29->VAR96 = FUN22(VAR22);


switch (VAR3->VAR38.VAR39.VAR40) {
case VAR47:
VAR21 = FUN21(VAR2, struct VAR21 *);
VAR29->VAR97 = VAR21->VAR98;
VAR21->VAR98 = VAR99;
break;
case VAR52:
VAR24 = FUN21(VAR2, struct VAR23 *);
VAR29->VAR97 = VAR24->VAR100;
VAR24->VAR100 = VAR99;
break;
default:
FUN5("",
VAR3->VAR38.VAR39.VAR40,
FUN6(&VAR3->VAR38, VAR25, sizeof(VAR25)),
FUN7(VAR3->VAR42));
FUN4(VAR54);
VAR9 = VAR55;
goto VAR51;
}

VAR93:
VAR9 = FUN23(VAR2, VAR3);
if (VAR9)
FUN4(VAR101);
return VAR9;

VAR51:
FUN16(VAR2);
FUN19(VAR18);
return VAR9;
}