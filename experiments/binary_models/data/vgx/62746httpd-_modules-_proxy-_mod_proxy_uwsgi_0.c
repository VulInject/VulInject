static int FUN1(VAR1 *VAR2, VAR3 * VAR4,
VAR5 * VAR6)
{

char VAR7[VAR8];
const char *VAR9;
char *VAR10, *VAR11;
char VAR12;
int VAR13;
int VAR14 = 0;
int VAR15;
int VAR16;
int VAR17 = 0;
VAR18 *VAR19 = VAR2->VAR20;
apr_off_t VAR21;
apr_status_t VAR22;
VAR23 *VAR24;
apr_read_type_e VAR25 = VAR26;
VAR27 *VAR28;
VAR27 *VAR29;
VAR30 *VAR31;

VAR1 *VAR32 = FUN2(VAR4->VAR20, VAR2);
VAR32->VAR33 = VAR34;

VAR29 = FUN3(VAR2->VAR35, VAR19->VAR36);
VAR28 = FUN3(VAR2->VAR35, VAR19->VAR36);

VAR13 = FUN4(VAR7, sizeof(VAR7), VAR32, 1);

if (VAR13 <= 0) {

return VAR37;
}

VAR4->VAR38->VAR39->read += VAR13;

if (VAR13 >= sizeof(VAR7) - 1) {

return VAR37;
}

if (FUN5(VAR7, "")) {
VAR15 = 9;
}
else if (FUN5(VAR7, "")) {
VAR15 = 7;
}
else {

return VAR37;
}
VAR16 = VAR15 + 3;

VAR12 = VAR7[VAR16];
VAR7[VAR16] = '';
VAR2->VAR40 = FUN6(&VAR7[VAR15]);

if (VAR12 != '') {
VAR7[VAR16] = VAR12;
}
else {

VAR7[VAR16] = '';
VAR7[VAR16 + 1] = '';
}
VAR2->VAR41 = FUN7(VAR2->VAR35, &VAR7[VAR15]);


while ((VAR13 = FUN4(VAR7, sizeof(VAR7), VAR32, 1)) > 0) {
VAR10 = strchr(VAR7, '');

if (!VAR10)
continue;
*VAR10 = '';
++VAR10;
while (FUN8(*VAR10))
++VAR10;
for (VAR11 = &VAR10[strlen(VAR10) - 1];
VAR11 > VAR10 && FUN8(*VAR11); --VAR11)
*VAR11 = '';
FUN9(VAR2->VAR42, VAR7, VAR10);
}

if ((VAR9 = FUN10(VAR2->VAR42, ""))) {
FUN11(VAR2, FUN7(VAR2->VAR35, VAR9));
}


VAR31 =
FUN12(VAR2->VAR43, &VAR44);
if (FUN13(VAR31, VAR2->VAR40)) {
if (FUN13(VAR6, VAR2->VAR40)) {
int VAR40 = VAR2->VAR40;
VAR2->VAR40 = VAR45;
VAR2->VAR41 = NULL;
return VAR40;
}

while (!VAR17) {
FUN14(VAR29);
VAR22 = FUN15(VAR32->VAR46, VAR29,
VAR47, VAR25, VAR6->VAR48);
if (FUN16(VAR22)
|| (VAR22 == VAR49 && FUN17(VAR29))) {
VAR24 = FUN18(VAR19->VAR36);
FUN19(VAR29, VAR24);
if (FUN20(VAR2->VAR50, VAR29) || VAR19->VAR51) {
break;
}
VAR25 = VAR52;
continue;
}
if (VAR22 == VAR53) {
break;
}
if (VAR22 != VAR49 || FUN17(VAR29)) {
int VAR40 = VAR54;
if (VAR22 == VAR49) {
FUN21(VAR55, VAR56, 0, VAR2, FUN22(10294)
"");
VAR40 = VAR37;
}
FUN14(VAR29);
FUN23(VAR2, VAR40, VAR29, -1);
FUN20(VAR2->VAR50, VAR29);
VAR14 = 1;
break;
}


if (FUN24(FUN25(VAR29)))
VAR17 = 1;

VAR25 = VAR26;
FUN26(VAR29, 0, &VAR21);
VAR4->VAR38->VAR39->read += VAR21;

VAR22 = FUN27(VAR2, VAR29, VAR28);
if (VAR22 != VAR49) {

if (!FUN17(VAR28)) {

FUN20(VAR2->VAR50, VAR28);
FUN14(VAR28);
}
FUN23(VAR2, VAR37,
VAR28, -1);
FUN20(VAR2->VAR50, VAR28);
FUN14(VAR28);

VAR14 = 1;
break;
}
if (FUN20(VAR2->VAR50, VAR28) != VAR49
|| VAR19->VAR51) {
VAR17 = 1;
}
FUN14(VAR28);
}

FUN14(VAR29);

if (VAR19->VAR51 || VAR14) {
return VAR57;
}

return VAR58;
}