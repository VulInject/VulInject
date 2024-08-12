void
FUN1(VAR1 *VAR2, const VAR3 *VAR4, bool VAR5)
{
VAR6 *new;
VAR7 *VAR8;
const char *VAR9;
uint32_t VAR10;
uint8_t VAR11;
unsigned int VAR12 = 0;
bool VAR13 = false;
uint8_t VAR14;
const char *VAR15 = NULL;

FUN2(new);
if (!new) {
FUN3(VAR16, "");
return;
}
FUN4(&new->VAR17);
FUN4(&new->VAR18);

new->VAR19 = VAR20;
new->VAR21 = VAR22;
new->VAR23 = VAR24;
new->VAR14 = VAR25;


while (VAR12 < FUN5(VAR4)) {
VAR9 = FUN6(VAR4, VAR12);


if (!strcmp(VAR9, "")) {
if (new->VAR14 == VAR25)
new->VAR14 = VAR26;
else if (new->VAR14 != VAR26) {
FUN7(VAR27, "");
goto VAR28;
}
VAR12++;
}
else if (!strcmp(VAR9, "")) {
if (new->VAR14 == VAR25)
new->VAR14 = VAR29;
else if (new->VAR14 != VAR29) {
FUN7(VAR27, "");
goto VAR28;
}
VAR12++;
}
else if (!strcmp(VAR9, "")) {
if (new->VAR30)
FUN8(new->VAR30);
new->VAR30 = FUN9(NULL, FUN6(VAR4, ++VAR12), false);
if (!new->VAR30) {
FUN7(VAR27, "", FUN6(VAR4, VAR12));
goto VAR28;
}
if (new->VAR14 == VAR25)
new->VAR14 = new->VAR30->VAR31.VAR32;
else if (new->VAR14 != new->VAR30->VAR31.VAR32) {
FUN7(VAR27, "");
goto VAR28;
}
}
else if (!strcmp(VAR9, "")) {
if (!strcmp("", FUN6(VAR4, ++VAR12)))
VAR12++;
FUN7(VAR27, ""as VAR33\"");
FUN7(VAR27, "", "");
}
else if (!strcmp(VAR9, "") || !strcmp(VAR9, "")) {


if (VAR9[0] == '')	
FUN7(VAR27, ""VAR34\""VAR35\"");

VAR9 = FUN6(VAR4, ++VAR12);
if (!strcmp(VAR9, "")) {
VAR14 = VAR29;
VAR9 = FUN6(VAR4, ++VAR12);
}
else if (!strcmp(VAR9, "")) {
VAR14 = VAR26;
VAR9 = FUN6(VAR4, ++VAR12);
}
else
VAR14 = new->VAR14;

if (new->VAR14 == VAR25)
new->VAR14 = VAR14;
else if (new->VAR14 != VAR14) {
FUN7(VAR27, "");
goto VAR28;
}

if (new->VAR35)
FUN8(new->VAR35);
new->VAR35 = FUN9(NULL, VAR9, false);
if (!new->VAR35) {
FUN7(VAR27, "", FUN6(VAR4, VAR12));
goto VAR28;
}
if (new->VAR14 == VAR25)
new->VAR14 = new->VAR35->VAR31.VAR32;
else if (new->VAR14 != new->VAR35->VAR31.VAR32) {
FUN7(VAR27, "");
goto VAR28;
}
}
else if (!strcmp(VAR9, "")) {
if (new->VAR36)
FUN8(new->VAR36);
new->VAR36 = FUN10(FUN6(VAR4, ++VAR12));
if (!new->VAR36) {
FUN7(VAR27, "", FUN6(VAR4, VAR12));
goto VAR28;
}
if (new->VAR36->VAR31.VAR32 != VAR26) {
FUN7(VAR27, "", FUN6(VAR4, VAR12));
goto VAR28;
}
if (new->VAR14 == VAR25)
new->VAR14 = new->VAR36->VAR31.VAR32;
else if (new->VAR14 != new->VAR36->VAR31.VAR32) {
FUN7(VAR27, "");
goto VAR28;
}
}
else if (!strcmp(VAR9, "") || !strcmp(VAR9,"")) {

if (!FUN11(FUN6(VAR4, ++VAR12), &VAR11)) {
FUN7(VAR27, "", FUN6(VAR4, VAR12));
goto VAR28;
}

new->VAR37 = VAR11;
new->VAR38 |= VAR39;
}
else if (!strcmp(VAR9, "")) {
if (!FUN12(FUN6(VAR4, ++VAR12), &VAR10)) {
FUN7(VAR27, "", FUN6(VAR4, VAR12));
goto VAR28;
}
new->VAR19 = VAR10;
}
else if (!strcmp(VAR9, "")) {
if (!FUN13(FUN6(VAR4, ++VAR12), &VAR11)) {
FUN7(VAR27, "", FUN6(VAR4, VAR12));
goto VAR28;
}
new->VAR40 = VAR11;
new->VAR38 |= VAR41;
}
else if (!strcmp(VAR9, "")) {

if (!FUN14(FUN6(VAR4, ++VAR12), &VAR11)) {
FUN7(VAR27, "", FUN6(VAR4, VAR12));
goto VAR28;
}
new->VAR21 = VAR11;
new->VAR38 |= VAR42;
}
else if (!strcmp(VAR9, "") ||
!strcmp(VAR9, "") ||
!strcmp(VAR9, "")) {
if (FUN15(&new->VAR43, FUN6(VAR4, ++VAR12), VAR44, ""))
goto VAR28;
new->VAR38 |= VAR45;
}
else if (!strcmp(VAR9, "") || !strcmp(VAR9, "")) {
VAR9 = FUN6(VAR4, ++VAR12);
VAR8 = FUN16(VAR9, VAR46);
if (!VAR8) {
FUN7(VAR27, "", VAR9);
goto VAR28;
}
new->VAR47 = VAR8;
}
else if (!strcmp(VAR9, "")) {

new->VAR48 |= VAR49;
}
else if (!strcmp(VAR9, "")) {	
FUN17(VAR4, &VAR12, &new->VAR50);
FUN7(VAR27, "", "");
}
else if (!strcmp(VAR9, "")) {	
VAR12++;
if (new->VAR14 == VAR29) {
FUN7(VAR27, "");
goto VAR28;
}
new->VAR14 = VAR26;
if (FUN15(&new->VAR51, FUN6(VAR4, VAR12), VAR44, ""))
goto VAR28;
new->VAR38 |= VAR52;
FUN7(VAR27, "", "");
}
else if (!strcmp(VAR9, "")) {
if (!strcmp(FUN6(VAR4, ++VAR12), "")) {
new->VAR53 |= 1 << VAR54;
VAR12++;
}
if (FUN15(&new->VAR55, FUN6(VAR4, VAR12), VAR44, ""))
goto VAR28;
new->VAR38 |= VAR56;
}
else if (!strcmp(VAR9, "")) {
if (FUN18(&VAR11, FUN6(VAR4, ++VAR12), 255, ""))
goto VAR28;
new->VAR57 = VAR11;
new->VAR38 |= VAR58;
}
else if (!strcmp(VAR9, "")) {
if (!strcmp(FUN6(VAR4, ++VAR12), "")) {
new->VAR53 |= 1 << VAR59;
VAR12++;
}
if (FUN15(&new->VAR60, FUN6(VAR4, VAR12), VAR44, ""))
goto VAR28;
new->VAR38 |= VAR61;
}
else if (!strcmp(VAR9, "")) {
if (!strcmp(FUN6(VAR4, ++VAR12), "")) {
new->VAR53 |= 1 << VAR62;
VAR12++;
}
if (FUN19(&new->VAR63, FUN6(VAR4, VAR12), 8, "")) { 
FUN7(VAR27, "", FUN6(VAR4,VAR12));
goto VAR28;
}
new->VAR38 |= VAR64;
}
else if (!strcmp(VAR9, "")) {
if (!strcmp(FUN6(VAR4, ++VAR12), "")) {
new->VAR53 |= 1 << VAR65;
VAR12++;
}
if (FUN19(&new->VAR66, FUN6(VAR4, VAR12), 4, "")) { 
FUN7(VAR27, "", FUN6(VAR4,VAR12));
goto VAR28;
}
new->VAR38 |= VAR67;
}
else if (!strcmp(VAR9, "")) {
if (!strcmp(FUN6(VAR4, ++VAR12), "")) {
new->VAR53 |= 1 << VAR68;
VAR12++;
}
if (FUN15(&new->VAR69, FUN6(VAR4, VAR12), VAR44, ""))
goto VAR28;
new->VAR38 |= VAR70;
}
else if (!strcmp(VAR9, "")) {
if (FUN15(&new->VAR71, FUN6(VAR4, ++VAR12), VAR44, ""))
goto VAR28;
new->VAR38 |= VAR72;
}
else if (!strcmp(VAR9, "")) {
if (!strcmp(FUN6(VAR4, ++VAR12), "")) {
new->VAR53 |= 1 << VAR73;
VAR12++;
}
if (FUN15(&new->VAR74, FUN6(VAR4, VAR12), VAR44, ""))
goto VAR28;
new->VAR38 |= VAR75;
}
else if (!strcmp(VAR9, "")) {
if (!strcmp(FUN6(VAR4, ++VAR12), "")) {
new->VAR53 |= 1 << VAR76;
VAR12++;
}
if (FUN15(&new->VAR77, FUN6(VAR4, VAR12), VAR44, ""))
goto VAR28;
new->VAR38 |= VAR78;
}
else if (!strcmp(VAR9, "")) {
if (FUN20(&new->VAR79, FUN6(VAR4, ++VAR12))) {
FUN7(VAR27, "", FUN6(VAR4,VAR12));
goto VAR28;
}
if (new->VAR14 == VAR26) {
FUN7(VAR27, "");
goto VAR28;
}
new->VAR14 = VAR29;
}
else if (!strcmp(VAR9, "")) {
if (!strcmp(FUN6(VAR4, ++VAR12), "")) {
new->VAR53 |= 1 << VAR80;
VAR12++;
}
if (FUN19(&new->VAR81, FUN6(VAR4, VAR12), 1, "")) { 
FUN7(VAR27, "", FUN6(VAR4, VAR12));
goto VAR28;
}
new->VAR38 |= VAR82;
}
else if (!strcmp(VAR9, "")) {
if (FUN15(&new->VAR83, FUN6(VAR4, ++VAR12), VAR44, ""))
goto VAR28;
new->VAR38 |= VAR84;
}
else if (!strcmp(VAR9, "")) {
VAR12++;
if (FUN15(&new->VAR85, FUN6(VAR4, VAR12), VAR44, ""))
goto VAR28;
new->VAR38 |= VAR86;
}
else if (!strcmp(VAR9, "")) {
VAR12++;
if (!strcmp("", FUN6(VAR4, VAR12)))
new->VAR87 |= VAR88;
else
FUN7(VAR27, "", FUN6(VAR4,VAR12));
}
else if (!strcmp(VAR9, "")) {
VAR12++;
if (FUN15(&VAR10, FUN6(VAR4, VAR12), 1, ""))
goto VAR28;
new->VAR89 = VAR10;
new->VAR38 |= VAR90;
FUN7(VAR27, "", "");
}
else if (!strcmp(VAR9, "")) {
VAR12++;
if (!strcmp(FUN6(VAR4, VAR12), "")) {
new->VAR53 |= 1 << VAR91;
VAR12++;
}
VAR9 = FUN6(VAR4, VAR12);
new->VAR92 = FUN21(VAR9);
FUN7(VAR27, "", "");
}
else if (!strcmp(VAR9, "")) {
VAR12++;
if (new->VAR14 == VAR29) {
FUN7(VAR27, "");
goto VAR28;
}
new->VAR14 = VAR26;
VAR9 = FUN6(VAR4, VAR12);
if (!strcmp(VAR9, ""))
new->VAR93 = VAR94;
else if (!strcmp(VAR9, ""))
new->VAR93 = VAR95;
else if (!strcmp(VAR9, ""))
new->VAR93 = VAR96;
else if (!FUN18(&VAR11, VAR9, VAR97, ""))
new->VAR93 = VAR11;
else
goto VAR28;
new->VAR38 |= VAR98;
FUN7(VAR27, "", "");
}
else if (!strcmp(VAR9, "")) {
VAR12++;
VAR9 = FUN6(VAR4, VAR12);
if (!strcmp(VAR9, ""))
new->VAR99 = 1;
else if (!strcmp(VAR9, ""))
new->VAR99 = 0;
else
FUN7(VAR27, "", "", VAR9);
new->VAR38 |= VAR100;
FUN7(VAR27, "", "");
}
else if (!strcmp(VAR9, "")) {
VAR12++;
if (FUN15(&VAR10, FUN6(VAR4, VAR12), 1, ""))
goto VAR28;
new->VAR101 = !!VAR10;
new->VAR38 |= VAR102;
FUN7(VAR27, "", "");
}
else if (!strcmp(VAR9, "")) {

new->VAR38 |= VAR103;
new->VAR38 &= ~VAR104;
}
else if (!strcmp(VAR9, "")) {

new->VAR38 &= ~( VAR103 | VAR104);
}
else if (!strcmp(VAR9, "")) {
new->VAR38 |= VAR104;
new->VAR38 &= ~VAR103;
}

else if (!strcmp(VAR9, "")) {
FUN7(VAR27, ""or\""VAR105\"");

if (!FUN22(&new->VAR18)) {
FUN7(VAR27, ""or\"");
VAR12 += 2;
continue;
}


VAR106 *VAR107 = FUN23(sizeof(VAR106));
FUN4(&VAR107->VAR17);
VAR107->VAR108 = new->VAR35;
new->VAR35 = NULL;
FUN24(&VAR107->VAR17, &new->VAR18);


VAR107 = FUN23(sizeof(VAR106));
FUN4(&VAR107->VAR17);
VAR107->VAR108 = FUN9(NULL, FUN6(VAR4, ++VAR12), false);
if (!VAR107->VAR108) {
FUN7(VAR27, ""or\""
, FUN6(VAR4, VAR12));
FUN8(VAR107);
goto VAR28;
}
FUN24(&VAR107->VAR17, &new->VAR18);
}
else if (!strcmp(VAR9, "")) {
if (!FUN22(&new->VAR18))
FUN7(VAR27, ""or\"");
else
VAR13 = true;
break;
}
else if (!strcmp(VAR9, ""))
new->VAR109 = true;
else if (VAR5 && !strcmp(VAR9, "")) {
VAR12++;
if (new->VAR110) {
FUN7(VAR27, "", FUN6(VAR4, VAR12));
break;
}
if (!(new->VAR110 = FUN25(FUN6(VAR4, VAR12))))
FUN7(VAR27, "", FUN6(VAR4, VAR12));
}
else if (!strcmp(VAR9, "")) {
if (!(VAR8 = FUN16(FUN6(VAR4, ++VAR12), VAR111))) {
FUN7(VAR27, "", FUN6(VAR4, VAR12));
goto VAR28;
}
if (VAR8->VAR112 != VAR113) {
FUN7(VAR27, "", FUN6(VAR4, VAR12));
goto VAR28;
}
new->VAR19 = VAR8->VAR114;
}
else {
if (!strcmp(VAR9, ""))
VAR12++;

if (FUN26(VAR9, &VAR11)) {
new->VAR23 = VAR11;
new->VAR38 |= VAR115;
VAR12++;
}
if (new->VAR116)
FUN8(new->VAR116);
VAR15 = FUN6(VAR4, VAR12);
new->VAR116 = FUN10(VAR15);
if (!new->VAR116) {
FUN7(VAR27, "", VAR15);
goto VAR28;
}
if (new->VAR14 == VAR25)
new->VAR14 = new->VAR116->VAR31.VAR32;
else if (new->VAR14 != new->VAR116->VAR31.VAR32) {
FUN7(VAR27, "", VAR15);
goto VAR28;
}
}
VAR12++;
}

if (VAR13)
FUN27(VAR4, VAR12, new);
else if (VAR12 < FUN5(VAR4)) {
FUN7(VAR27, "", FUN6(VAR4, VAR12));
goto VAR28;
}

if (!new->VAR116) {
FUN7(VAR27, "");
goto VAR28;
}

if (!new->VAR109) {
if ((new->VAR38 & VAR41) && new->VAR40 != VAR117)
FUN7(VAR27, "", VAR117);
new->VAR40 = VAR117;
new->VAR38 |= VAR41;

if (!new->VAR47) {

FUN7(VAR27, "", VAR15);
new->VAR109 = true;
}
}

if (new->VAR110 && !new->VAR47) {
FUN7(VAR27, "");
new->VAR110 = NULL;
}


if (new->VAR14 == VAR25)
new->VAR14 = VAR29;
if (new->VAR116->VAR31.VAR32 == VAR25)
new->VAR116->VAR31.VAR32 = new->VAR14;
if (new->VAR36 && new->VAR36->VAR31.VAR32 == VAR25)
new->VAR36->VAR31.VAR32 = new->VAR14;

FUN24(&new->VAR17, VAR2);
return;

VAR28:
FUN28(new);
}