VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, Bool VAR6)
{
char *VAR7;
VAR8 *VAR9, *VAR10;
Bool VAR11;
VAR12 *VAR13;
Bool VAR14;
char VAR15[1000];

VAR10 = NULL;
VAR14 = 0;

if (VAR5)
VAR3->VAR16 = 0 ;

VAR3->VAR17 = VAR5;

VAR11 = (VAR3->VAR18->VAR19 & VAR20) ? 1 : 0;



if (VAR3->VAR21 && !VAR3->VAR22) {
if (VAR6 ) {
VAR10 = FUN2(VAR3->VAR18->VAR23, (VAR3->VAR18->VAR19 & VAR24) ? VAR25 : VAR26);
VAR10 = FUN2(VAR3->VAR18->VAR23, VAR25);
FUN3(VAR10, NULL);
FUN4(VAR10);
FUN5(VAR3->VAR18->VAR23, VAR10);
} else {
VAR10 = FUN6(VAR3->VAR18->VAR23);
}
}

if (!VAR3->VAR16)
VAR3->VAR27 = VAR3->VAR18->VAR28;


while (!VAR3->VAR29) {
VAR7 = FUN7(VAR3, 0);
if (VAR3->VAR30) break;


if (!strcmp(VAR7, "")) FUN8(VAR3);
else if (!strcmp(VAR7, "")) FUN8(VAR3);
else if (!strcmp(VAR7, "")) FUN8(VAR3);
else if (!strcmp(VAR7, "") || !strcmp(VAR7, "")) {
FUN9(VAR3, VAR31, "");
break;
}


else if (!strcmp(VAR7, "") || !strcmp(VAR7, "")) {
VAR3->VAR18->VAR32->VAR33 = (VAR34 *) FUN10(VAR3, VAR7);
}

else if (!strcmp(VAR7, "") || !strcmp(VAR7, "")) {
VAR3->VAR35 = 0;
if (!strcmp(VAR7, "")) {
VAR3->VAR35 = 1;
VAR7 = FUN7(VAR3, 0);
if (strcmp(VAR7, "")) {
FUN9(VAR3, VAR36, "", VAR7);
VAR3->VAR29 = VAR36;
break;
}
}
VAR11 = 0;
VAR7 = FUN7(VAR3, 0);
if (VAR7[0] == '') {
VAR3->VAR37 += FUN11(&VAR7[1]);
} else {
if (sscanf(VAR7, "", &VAR3->VAR37) != 1) {
FUN9(VAR3, VAR36, "", VAR7);
break;
}
}
if (VAR3->VAR29) break;

if (VAR3->VAR38 && (VAR3->VAR38->VAR39 != VAR3->VAR37)) VAR3->VAR38 = NULL;
if (VAR3->VAR40 && (VAR3->VAR40->VAR39 != VAR3->VAR37)) {
FUN12(VAR3);
VAR3->VAR40 = NULL;
}

VAR3->VAR27 = 0;

if (!VAR3->VAR37) VAR3->VAR35 = 1;

VAR3->VAR16 = 1;

if (!FUN13(VAR3, '')) {
VAR7 = FUN7(VAR3, 0);
if (!strcmp(VAR7, "")) {
FUN14(VAR3, "", (VAR41*)&VAR3->VAR27);
if (VAR3->VAR29) break;
}
if (!FUN13(VAR3, '')) {
FUN9(VAR3, VAR36, "");
}
}

if (VAR5 && VAR3->VAR37) break;
}
else if (!strcmp(VAR7, "") || !strcmp(VAR7, "")) {
FUN15(VAR3, VAR7, VAR5 ? VAR5->VAR42 : NULL);
}

else if (!strcmp(VAR7, "")) {
}
else if (!strcmp(VAR7, "")) {
VAR7 = FUN7(VAR3, 0);
strcpy(VAR15, VAR7);
VAR14 = 1;
}
else if (!strcmp(VAR7, "")) {
VAR4 *VAR43 = NULL;
if (!VAR3->VAR22 && VAR3->VAR40 && !VAR3->VAR21) {

VAR43 = FUN16(VAR3->VAR18->VAR23, VAR44);
FUN17(VAR3->VAR40->VAR45, VAR43);
FUN17(VAR3->VAR46, VAR43);
}

VAR13 = FUN18(VAR3, 1, 0, VAR43);
if (VAR14) {
u32 VAR47 = FUN19(VAR3, VAR15);
if (!VAR47) VAR47 = FUN20(VAR3);
if (VAR43) {
VAR43->VAR48 = VAR47;
VAR43->VAR49 = FUN21(VAR15);
FUN22(VAR3->VAR18->VAR23, VAR47);
} else if (VAR13) {
FUN23(VAR13, VAR47);
FUN24(VAR13, VAR15);
}
VAR14 = 0;
}
}

else if (!strcmp(VAR7, "") || !strcmp(VAR7, "")) {
Bool VAR50 = VAR3->VAR27 ? 0 : 1;
if (!VAR3->VAR27 || VAR3->VAR27==VAR3->VAR51->VAR52) VAR3->VAR27 = VAR3->VAR53;

if (VAR3->VAR54 && (VAR3->VAR54->VAR52 != VAR3->VAR27)) {
VAR55 *VAR56 = VAR3->VAR54;
VAR3->VAR54 = FUN25(VAR3->VAR18->VAR32, (VAR57) VAR3->VAR27, VAR58, VAR59);

if (VAR3->VAR54 != VAR56) {
VAR3->VAR40 = NULL;
VAR3->VAR38 = NULL;
}
}
if (!VAR3->VAR54) VAR3->VAR54 = FUN25(VAR3->VAR18->VAR32, (VAR57) VAR3->VAR27, VAR58, VAR59);
if (!VAR3->VAR38) VAR3->VAR38 = FUN26(VAR3->VAR54, VAR3->VAR37, 0, VAR3->VAR35);
FUN27(VAR3, VAR7);
if (VAR50) VAR3->VAR27= 0;
}

else if (!strcmp(VAR7, "") || !strcmp(VAR7, "") || !strcmp(VAR7, "") || !strcmp(VAR7, "")

|| !strcmp(VAR7, "") || !strcmp(VAR7, "") || !strcmp(VAR7, "") || !strcmp(VAR7, "") || !strcmp(VAR7, "") || !strcmp(VAR7, "")
|| !strcmp(VAR7, "")
) {
Bool VAR50 = VAR3->VAR27 ? 0 : 1;

if (!VAR3->VAR27) VAR3->VAR27 = VAR3->VAR60;
if (!VAR3->VAR27 || (VAR3->VAR54 && (VAR3->VAR27==VAR3->VAR54->VAR52)) ) VAR3->VAR27 = VAR3->VAR60;

if (VAR3->VAR51->VAR52 != VAR3->VAR27) {
VAR55 *VAR56 = VAR3->VAR51;
VAR3->VAR51 = FUN25(VAR3->VAR18->VAR32, (VAR57) VAR3->VAR27, VAR61, VAR62);

if (VAR3->VAR51 != VAR56) {
FUN12(VAR3);
VAR3->VAR40 = NULL;
}
}
if (VAR11) {
VAR11 = 0;
VAR3->VAR40 = FUN28(VAR3->VAR51->VAR63);
VAR3->VAR37 = (VAR64) (VAR3->VAR40 ? VAR3->VAR40->VAR39 : 0) + 1;
VAR3->VAR40 = NULL;
}

if (!VAR3->VAR40) VAR3->VAR40 = FUN26(VAR3->VAR51, VAR3->VAR37, 0, VAR3->VAR35);
FUN29(VAR3, VAR7, VAR3->VAR40->VAR45);
if (VAR50) VAR3->VAR27= 0;
}

else if (!strcmp(VAR7, "")
|| !strcmp(VAR7, "")
|| !strcmp(VAR7, "")
|| !strcmp(VAR7, "")

|| VAR3->VAR21
)
{

VAR9 = FUN30(VAR3, VAR7, VAR10, VAR14 ? VAR15 : NULL);
VAR14 = 0;
if (!VAR9) break;
if (VAR3->VAR22) {
FUN17(VAR3->VAR22, VAR9);
} else if (!VAR10) {
if (VAR5) VAR5->VAR9 = VAR9;
else if (VAR3->VAR18->VAR19 & VAR20) {
VAR4 *VAR43 = FUN16(VAR3->VAR18->VAR23, VAR65);
assert(!VAR3->VAR40);
assert(VAR3->VAR51);
VAR3->VAR40 = FUN26(VAR3->VAR51, 0, 0, 1);
FUN17(VAR3->VAR40->VAR45, VAR43);
VAR43->VAR9 = VAR9;
}
} else {
FUN31(VAR10, VAR9, -1);
}


}


else {

if (FUN13(VAR3, '')) VAR3->VAR16 = 0;
else if (strlen(VAR7)) {
FUN9(VAR3, VAR36, "", VAR7);
}
VAR3->VAR35 = 0;
}
}
FUN32(VAR3, 0);
FUN12(VAR3);


while (FUN33(VAR3->VAR66)) {
VAR8 *VAR67 = (VAR8 *)FUN34(VAR3->VAR66, 0);
FUN35(VAR3->VAR66, 0);
FUN36(VAR67);
}
return VAR3->VAR29;
}