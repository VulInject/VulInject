static char *FUN1(const char *VAR1, struct VAR2 *VAR3, char VAR4)
{


size_t VAR5 = strlen(VAR1);
struct strbuf VAR6;
size_t VAR7;
size_t VAR8, VAR9=0, VAR10=0, VAR11=0, VAR12=0;
size_t VAR13=0, VAR14=0, VAR15=0, VAR16=0, VAR17, VAR18, VAR19;
const char *VAR20, *VAR21, *VAR22, *VAR23;
char *VAR24;


VAR7 = strspn(VAR1, VAR25);
if (!VAR7 || !FUN2(VAR1[0]) || VAR7 + 3 > VAR5 ||
VAR1[VAR7] != '' || VAR1[VAR7+1] != '' || VAR1[VAR7+2] != '') {
if (VAR3) {
VAR3->VAR1 = NULL;
VAR3->VAR26 = FUN3("invalid URL scheme name or VAR27 ':
}
return NULL; 
}
FUN4(&VAR6, VAR5);
VAR8 = VAR7;
VAR7 += 3;
VAR5 -= VAR7;
while (VAR7--)
FUN5(&VAR6, FUN6(*VAR1++));



VAR21 = strchr(VAR1, '');
VAR20 = VAR1 + strcspn(VAR1, "");
if (VAR21 && VAR21 < VAR20) {
VAR9 = VAR6.VAR28;
if (VAR21 > VAR1) {
if (!FUN7(&VAR6, VAR1, VAR21 - VAR1,
"", VAR29)) {
if (VAR3) {
VAR3->VAR1 = NULL;
VAR3->VAR26 = FUN3("");
}
FUN8(&VAR6);
return NULL;
}
VAR22 = strchr(VAR6.VAR30 + VAR8 + 3, '');
if (VAR22) {
VAR11 = (VAR22 + 1) - VAR6.VAR30;
VAR12 = VAR6.VAR28 - VAR11;
VAR10 = (VAR11 - 1) - (VAR8 + 3);
} else {
VAR10 = VAR6.VAR28 - (VAR8 + 3);
}
}
FUN5(&VAR6, '');
VAR5 -= (++VAR21 - VAR1);
VAR1 = VAR21;
}



if (!VAR5 || strchr("", *VAR1)) {

if (!FUN9(VAR6.VAR30, "")) {
if (VAR3) {
VAR3->VAR1 = NULL;
VAR3->VAR26 = FUN3("");
}
FUN8(&VAR6);
return NULL;
}
} else {
VAR13 = VAR6.VAR28;
}
VAR22 = VAR20 - 1;
while (VAR22 > VAR1 && *VAR22 != '' && *VAR22 != '')
VAR22--;
if (*VAR22 != '') {
VAR22 = VAR20;
} else if (!VAR13 && VAR22 < VAR20 && VAR22 + 1 != VAR20) {

if (VAR3) {
VAR3->VAR1 = NULL;
VAR3->VAR26 = FUN3("");
}
FUN8(&VAR6);
return NULL;
}

if (VAR4)
VAR7 = strspn(VAR1, VAR31 "");
else
VAR7 = strspn(VAR1, VAR31);

if (VAR7 < VAR22 - VAR1) {

if (VAR3) {
VAR3->VAR1 = NULL;
VAR3->VAR26 = FUN3("");
}
FUN8(&VAR6);
return NULL;
}
while (VAR1 < VAR22) {
FUN5(&VAR6, FUN6(*VAR1++));
VAR5--;
}



if (VAR22 < VAR20) {

VAR1++;
VAR1 += strspn(VAR1, "");
if (VAR1 == VAR20 && VAR1[-1] == '')
VAR1--;
if (VAR1 == VAR20) {

} else if (VAR20 - VAR1 == 2 &&
FUN9(VAR6.VAR30, "") &&
!FUN10(VAR1, "", 2)) {

} else if (VAR20 - VAR1 == 3 &&
FUN9(VAR6.VAR30, "") &&
!FUN10(VAR1, "", 3)) {

} else {

unsigned long VAR32 = 0;
VAR7 = strspn(VAR1, VAR33);
if (VAR7 < VAR20 - VAR1) {

if (VAR3) {
VAR3->VAR1 = NULL;
VAR3->VAR26 = FUN3("");
}
FUN8(&VAR6);
return NULL;
}
if (VAR20 - VAR1 <= 5)
VAR32 = FUN11(VAR1, NULL, 10);
if (VAR32 == 0 || VAR32 > 65535) {

if (VAR3) {
VAR3->VAR1 = NULL;
VAR3->VAR26 = FUN3("");
}
FUN8(&VAR6);
return NULL;
}
FUN5(&VAR6, '');
VAR15 = VAR6.VAR28;
FUN12(&VAR6, VAR1, VAR20 - VAR1);
VAR16 = VAR20 - VAR1;
}
VAR5 -= VAR20 - VAR22;
VAR1 = VAR20;
}
if (VAR13)
VAR14 = VAR6.VAR28 - VAR13 - (VAR16 ? VAR16 + 1 : 0);



VAR17 = VAR6.VAR28;
VAR23 = VAR6.VAR30 + VAR17;
FUN5(&VAR6, '');
if (*VAR1 == '') {
VAR1++;
VAR5--;
}
for (;;) {
const char *VAR34;
size_t VAR35 = VAR6.VAR28;
const char *VAR36 = VAR1 + strcspn(VAR1, "");
int VAR37 = 0;


if (!FUN7(&VAR6, VAR1, VAR36 - VAR1, "",
VAR29)) {
if (VAR3) {
VAR3->VAR1 = NULL;
VAR3->VAR26 = FUN3("");
}
FUN8(&VAR6);
return NULL;
}

VAR34 = VAR6.VAR30 + VAR35;
if (!strcmp(VAR34, "")) {

if (VAR34 == VAR23 + 1) {
FUN13(&VAR6, VAR6.VAR28 - 1);
VAR37 = 1;
} else {
FUN13(&VAR6, VAR6.VAR28 - 2);
}
} else if (!strcmp(VAR34, "")) {

const char *VAR38 = VAR6.VAR30 + VAR6.VAR28 - 3;
if (VAR38 == VAR23) {

if (VAR3) {
VAR3->VAR1 = NULL;
VAR3->VAR26 = FUN3("");
}
FUN8(&VAR6);
return NULL;
}
while (*--VAR38 != '') {}
if (VAR38 == VAR23) {
FUN13(&VAR6, VAR38 - VAR6.VAR30 + 1);
VAR37 = 1;
} else {
FUN13(&VAR6, VAR38 - VAR6.VAR30);
}
}
VAR5 -= VAR36 - VAR1;
VAR1 = VAR36;

if (*VAR1 != '')
break;
VAR1++;
VAR5--;
if (!VAR37)
FUN5(&VAR6, '');
}
VAR18 = VAR6.VAR28 - VAR17;



if (*VAR1) {
if (!FUN7(&VAR6, VAR1, VAR5, "", VAR29)) {
if (VAR3) {
VAR3->VAR1 = NULL;
VAR3->VAR26 = FUN3("");
}
FUN8(&VAR6);
return NULL;
}
}


VAR24 = FUN14(&VAR6, &VAR19);
if (VAR3) {
VAR3->VAR1 = VAR24;
VAR3->VAR26 = NULL;
VAR3->VAR5 = VAR19;
VAR3->VAR8 = VAR8;
VAR3->VAR9 = VAR9;
VAR3->VAR10 = VAR10;
VAR3->VAR11 = VAR11;
VAR3->VAR12 = VAR12;
VAR3->VAR13 = VAR13;
VAR3->VAR14 = VAR14;
VAR3->VAR15 = VAR15;
VAR3->VAR16 = VAR16;
VAR3->VAR17 = VAR17;
VAR3->VAR18 = VAR18;
}
return VAR24;
}