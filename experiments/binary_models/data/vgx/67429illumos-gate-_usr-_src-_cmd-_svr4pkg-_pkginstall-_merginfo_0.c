void
FUN1(struct VAR1 **VAR2, int VAR3)
{
VAR4		*VAR5;
VAR6		*VAR7;
VAR6		*VAR8;
char		VAR9[VAR10];
char		VAR11[VAR10];
char		VAR12[VAR10];
char		VAR13[VAR10];
int		VAR14;
int		VAR15;
int		VAR16;



(void) unlink(VAR17);



if (FUN2() == 0) {

VAR14 = snprintf(VAR12, sizeof (VAR12),
"",
((FUN3()) &&
(strcmp(FUN3(), "") != 0)) ?
FUN3() : "", VAR18,
VAR19);
if (VAR14 > sizeof (VAR12)) {
FUN4(VAR20,
((FUN3()) &&
(strcmp(FUN3(), "") != 0)) ?
FUN3() : "",
VAR18);
FUN5(1);
}
} else {

VAR14 = snprintf(VAR12, sizeof (VAR12), "",
VAR21, VAR19);
if (VAR14 > sizeof (VAR12)) {
FUN4(VAR20,
VAR21, VAR19);
FUN5(1);
}
}

VAR14 = snprintf(VAR9, VAR10, "", VAR22, VAR19);
if (VAR14 > VAR10) {
FUN4(VAR20, VAR22, VAR19);
FUN5(1);
}



FUN6(VAR23,
VAR24 ? VAR24 : "",
((FUN3()) &&
(strcmp(FUN3(), "") != 0)) ?
FUN3() : "",
VAR21 ? VAR21 : "",
VAR22 ? VAR22 : "",	FUN2(),
FUN7() ? FUN7() : "",
VAR12, VAR9);



if (strcmp(VAR12, VAR9) == 0) {
VAR8 = (VAR6 *)NULL;
FUN6(VAR25, VAR9);
} else {
FUN6(VAR26, VAR12, VAR9);
VAR8 = fopen(VAR12, "");

if (VAR8 == (VAR6 *)NULL) {
FUN6(VAR27, VAR18, VAR12,
strerror(VAR28));
}
}



if ((VAR7 = fopen(VAR9, "")) == NULL) {
FUN4(VAR29, VAR9, strerror(VAR28));
FUN5(99);
}



VAR16 = 0;
(void) fputs("", VAR7);
if (VAR2) {
(void) fputs(VAR2[0]->VAR30, VAR7);
VAR16++;
for (VAR14 = 1; VAR2[VAR14]; VAR14++) {
(void) FUN8('', VAR7);
(void) fputs(VAR2[VAR14]->VAR30, VAR7);
VAR16++;
}
}
VAR15 = FUN9();
for (VAR14 = 0; VAR14 < VAR15; VAR14++) {
int VAR31 = 0;

if (VAR2) {
int	VAR32;

for (VAR32 = 0; VAR2[VAR32]; ++VAR32) {
if (FUN10(VAR14) != NULL &&
strcmp(FUN10(VAR14),
VAR2[VAR32]->VAR30) == 0) {
VAR31++;
break;
}
}
}
if (!VAR31) {
if (VAR16 > 0) {
(void) FUN8('', VAR7);
}
(void) fputs(FUN10(VAR14), VAR7);
VAR16++;
}
}
(void) FUN8('', VAR7);



if (FUN11()) {
static char	*VAR33 = "";

(void) fputs(VAR33, VAR7);
(void) fputs(FUN7(), VAR7);
(void) FUN8('', VAR7);
} else {
(void) fputs("", VAR7);
(void) FUN8('', VAR7);
}



for (VAR14 = 0; VAR34[VAR14] != (char *)NULL; VAR14++) {
char	*VAR35 = VAR34[VAR14];
int	VAR36 = -1;
int	VAR37 = (VAR38 >> 1)+1;	
int	VAR39 = VAR38 >> 1;	
VAR40	*VAR41 = (VAR40 *)NULL;



if (FUN12(VAR35, VAR42[0].VAR43, VAR42[0].VAR44) < 0) {



FUN6(VAR45, VAR35,
VAR42[0].VAR43);

} else if (FUN12(VAR35, VAR42[VAR38-1].VAR43,
VAR42[VAR38-1].VAR44) > 0) {



FUN6(VAR46, VAR35,
VAR42[VAR38-1].VAR43);

} else {


FUN6(VAR47, VAR35,
VAR42[0].VAR43,
VAR42[VAR38-1].VAR43);

while (VAR37 > 0) {	
int	VAR48;

VAR41 = &VAR42[VAR39];


VAR48 = FUN12(VAR41->VAR43, VAR35, VAR41->VAR44);


if (VAR48 == 0) {

VAR36 = VAR39;
break;
}


VAR37 = VAR37 >> 1;
VAR39 += (VAR48 < 0) ? VAR37 : -VAR37;
continue;
}
}



if ((VAR36 >= 0) && (VAR41->VAR49 == VAR50)) {

FUN6(VAR51, VAR35);
continue;
}



if ((VAR8 != (VAR6 *)NULL) && (VAR36 >= 0) &&
(VAR41->VAR49 == VAR52)) {


char	*VAR53 = VAR35+VAR41->VAR44;
char	*VAR54;
char	VAR55[VAR10+1];



(void) strncpy(VAR55, VAR41->VAR43, VAR41->VAR44-1);
VAR55[VAR41->VAR44-1] = '';



FUN13(VAR8);
VAR54 = FUN14(VAR8, VAR55);

FUN6(VAR56, VAR55,
VAR54 ? VAR54 : "");



if (VAR54 == (char *)NULL) {
FUN4(VAR57, VAR18, VAR35);
FUN5(1);
}



if (strcmp(VAR53, VAR54) != 0) {
FUN4(VAR58, VAR18,
VAR55, VAR53, VAR54);
FUN5(1);
}
}



if ((FUN12(VAR35, "", 7) == 0)) {
(void) fputs("", VAR7);
(void) fputs(VAR59, VAR7);
(void) FUN8('', VAR7);
(void) fputs(VAR18, VAR7);
(void) fputs("", VAR7);
continue;
}

if ((FUN12(VAR35, "", 7) == 0) &&
VAR3 != 0 &&
!FUN15()) {
continue;
}

FUN6(VAR60, VAR35);

(void) fputs(VAR35, VAR7);
(void) FUN8('', VAR7);
}

(void) fclose(VAR7);
(void) fclose(VAR8);



VAR14 = snprintf(VAR9, VAR10, "", VAR24);
if (VAR14 > VAR10) {
FUN4(VAR20, VAR24, "");
FUN5(1);
}

if ((VAR5 = FUN16(VAR9)) != NULL) {
struct VAR61	*VAR62;

while ((VAR62 = FUN17(VAR5)) != NULL) {
if (VAR62->VAR63[0] == '')
continue;

VAR14 = snprintf(VAR9, VAR10, "",
VAR24, VAR62->VAR63);
if (VAR14 > VAR10) {
FUN4(VAR64, VAR24, "",
VAR62->VAR63);
FUN5(1);
}

VAR14 = snprintf(VAR13, VAR10, "", VAR65,
VAR62->VAR63);
if (VAR14 > VAR10) {
FUN4(VAR20, VAR65, VAR62->VAR63);
FUN5(1);
}

if (FUN18(VAR66|VAR67, VAR9, VAR13, 0644)) {
FUN4(VAR68, VAR62->VAR63, VAR65);
FUN5(99);
}
}
(void) FUN19(VAR5);
}



if (!FUN2()) {

VAR14 = snprintf(VAR9, VAR10, "", VAR24);
if (VAR14 > VAR10) {
FUN4(VAR20, VAR24, "");
FUN5(1);
}

if ((VAR5 = FUN16(VAR9)) != NULL) {
struct VAR61	*VAR62;


while ((VAR62 = FUN17(VAR5)) != NULL) {
if (VAR62->VAR63[0] == '')
continue;

if (strcmp(VAR62->VAR63, "") == 0)
continue;

VAR14 = snprintf(VAR9, VAR10, "",
VAR24, VAR62->VAR63);

if (VAR14 > VAR10) {
FUN4(VAR64, VAR24,
"", VAR62->VAR63);
FUN5(1);
}

VAR14 = snprintf(VAR13, VAR10, "",
VAR21,
VAR62->VAR63);

if (VAR14 > VAR10) {
FUN4(VAR64,
VAR21,
"", VAR62->VAR63);
FUN5(1);
}

if (FUN18(VAR66, VAR9, VAR13, 0644)) {
FUN4(VAR68, VAR9, VAR13);
(void) FUN19(VAR5);
FUN5(99);
}
}
(void) FUN19(VAR5);
}



VAR14 = snprintf(VAR9, sizeof (VAR9), "", VAR24, VAR19);
if (VAR14 > sizeof (VAR9)) {
FUN4(VAR20, VAR24, VAR19);
FUN5(1);
}

VAR14 = snprintf(VAR13, sizeof (VAR13), "",
VAR21, VAR19);
if (VAR14 > sizeof (VAR13)) {
FUN4(VAR20, VAR21,
VAR19);
FUN5(1);
}

if (FUN18(VAR66, VAR9, VAR13, 0644)) {
FUN4(VAR68, VAR9, VAR13);
FUN5(99);
}

VAR14 = snprintf(VAR9, sizeof (VAR9), "", VAR24);
if (VAR14 > sizeof (VAR9)) {
FUN4(VAR20, VAR24, "");
FUN5(1);
}

VAR14 = snprintf(VAR13, sizeof (VAR13), "",
VAR21);
if (VAR14 > sizeof (VAR9)) {
FUN4(VAR20, VAR21,
"");
FUN5(1);
}

if (FUN18(VAR66, VAR9, VAR13, 0644)) {
FUN4(VAR68, VAR9, VAR13);
FUN5(99);
}
}


if (strstr(VAR24, "") != NULL) {
struct stat VAR69;

VAR14 = snprintf(VAR9, sizeof (VAR9), "", VAR24);
if (VAR14 > sizeof (VAR9)) {
FUN4(VAR20, VAR24, "");
FUN5(1);
}

if ((FUN20(VAR9, &VAR69) == 0) && (VAR69.VAR70 & VAR71)) {
VAR14 = snprintf(VAR11, sizeof (VAR11), "VAR72 -VAR73 %VAR74