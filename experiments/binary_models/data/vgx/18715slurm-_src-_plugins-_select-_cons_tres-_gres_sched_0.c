static VAR1 *FUN1(
VAR2 *VAR3,
VAR2 *VAR4,
bool VAR5, VAR6 *VAR7,
uint16_t VAR8, uint16_t VAR9,
uint32_t VAR10, char *VAR11,
bool VAR12, uint32_t VAR13,
VAR6 **VAR14,
uint32_t VAR15, const uint32_t VAR16)
{
VAR17 *VAR18 = VAR3->VAR19;
VAR20 *VAR21 = VAR4->VAR19;
VAR20 *VAR22 = NULL;
int VAR23, VAR24, VAR25, VAR26;
uint32_t VAR27;
VAR1 *VAR28;
int64_t VAR29;
uint64_t VAR30, VAR31 = 0;
bool VAR32 = false;
bool VAR33 = FUN2(VAR4, VAR5);

if (VAR21->VAR34 == 0)
return NULL;

if (!VAR5)
VAR22 = VAR21->VAR22;

VAR28 = xmalloc(sizeof(VAR1));
VAR28->VAR35 = VAR8;
VAR28->VAR36 = xcalloc(VAR8, sizeof(VAR6 *));
VAR28->VAR37 = xcalloc(VAR8, sizeof(VAR38));
for (VAR23 = 0; VAR23 < VAR21->VAR39; VAR23++) {
bool VAR40 = false;
if (VAR18->VAR41 &&
(VAR18->VAR42 != VAR21->VAR43[VAR23]))
continue;	
if (VAR33 &&
(VAR21->VAR44[VAR23] == 0))
continue;
if (!VAR5 && !VAR21->VAR45 &&
(VAR21->VAR44[VAR23] >=
VAR21->VAR46[VAR23])) {
continue;	
}

if (!VAR5 && !VAR21->VAR45) {
VAR30 = VAR21->VAR46[VAR23] -
VAR21->VAR44[VAR23];
} else {
VAR30 = VAR21->VAR46[VAR23];
}
if (VAR30 == 0)
continue;


if (VAR22 && VAR22->VAR47 &&
VAR21->VAR48[VAR23]) {
VAR26 = FUN3(VAR21->VAR48[VAR23],
VAR22->VAR47);
if (VAR26 > 0) {

if (FUN4(
VAR4->VAR49))
continue;
else {
VAR30 -= VAR26;
if (VAR30 == 0)
continue;
}
}
}


if (FUN4(VAR4->VAR49) &&
(VAR30 > VAR28->VAR50) &&
!VAR5)

VAR28->VAR50 = VAR30;

VAR27 = VAR8 * VAR9;
if ((VAR7 && (VAR27 != FUN5(VAR7))) ||
(VAR21->VAR51[VAR23] &&
(VAR27 != FUN5(VAR21->VAR51[VAR23])))) {
FUN6("",
VAR52, VAR11);
VAR32 = false;
break;
}

if (VAR21->VAR51 &&
VAR21->VAR51[VAR23]) {
VAR40 = true;
for (VAR25 = 0; VAR25 < VAR8; VAR25++) {
bool VAR53 = false;
for (VAR26 = 0; VAR26 < VAR9; VAR26++) {
VAR24 = (VAR25 * VAR9) + VAR26;
if (FUN7(VAR21->
VAR51[VAR23], VAR24)) {
VAR53 = true;
break;
}
}
if (!VAR53) {
VAR40 = false;
break;
}
}
}

if (!VAR21->VAR51 ||
!VAR21->VAR51[VAR23] ||
VAR40) {

VAR28->VAR54 += VAR30;
VAR28->VAR55 += VAR30;
if (!VAR28->VAR56) {
VAR28->VAR56 =
FUN8(VAR21->
VAR48[VAR23]);
} else {
FUN9(VAR28->VAR56,
VAR21->VAR48[VAR23]);
}
VAR32 = true;
continue;
}


for (VAR25 = 0; ((VAR25 < VAR8) && VAR30); VAR25++) {
if (VAR12 && VAR7) {
for (VAR26 = 0; VAR26 < VAR9; VAR26++) {
VAR24 = (VAR25 * VAR9) + VAR26;
if (FUN7(VAR7, VAR24))
break;
}
if (VAR26 >= VAR9) {

continue;
}
}
for (VAR26 = 0; VAR26 < VAR9; VAR26++) {
VAR24 = (VAR25 * VAR9) + VAR26;
if (VAR21->VAR51[VAR23] &&
!FUN7(VAR21->VAR51[VAR23],
VAR24))
continue;
if (!VAR21->VAR48[VAR23]) {
FUN6("",
VAR52, VAR11);
continue;
}
if (!VAR28->VAR36[VAR25]) {
VAR28->VAR36[VAR25] =
FUN8(VAR21->
VAR48[VAR23]);
} else {
FUN9(VAR28->VAR36[VAR25],
VAR21->VAR48[VAR23]);
}
VAR28->VAR37[VAR25] += VAR30;
VAR28->VAR55 += VAR30;
VAR30 = 0;
VAR32 = true;
break;
}
}
}


if (VAR32 && VAR18->VAR57) {

for (VAR25 = 0; VAR25 < VAR8; VAR25++) {
if (VAR28->VAR37[VAR25] <
VAR18->VAR57) {

VAR28->VAR55 -=
VAR28->VAR37[VAR25];
VAR28->VAR37[VAR25] = 0;
if (VAR12 && VAR7) {
VAR23 = VAR25 * VAR9;
FUN10(VAR7, VAR23,
VAR23 + VAR9 - 1);
}
} else if (VAR28->VAR37[VAR25] >
VAR18->VAR57) {

VAR23 = VAR28->VAR37[VAR25] -
VAR18->VAR57;
VAR28->VAR37[VAR25] =
VAR18->VAR57;
VAR28->VAR55 -= VAR23;
}
}
}


if (VAR32 && VAR12 && VAR7 && (VAR13 < VAR8)) {
int VAR58 = 0;
bool *VAR59 = xcalloc(VAR8, sizeof(bool));
for (VAR25 = 0; VAR25 < VAR8; VAR25++) {
if (VAR28->VAR37[VAR25] == 0)
continue;
for (VAR26 = 0; VAR26 < VAR9; VAR26++) {
VAR23 = (VAR25 * VAR9) + VAR26;
if (!FUN7(VAR7, VAR23))
continue;
VAR58++;
VAR59[VAR25] = true;
break;
}
}
while (VAR58 > VAR13) {
int VAR60 = -1;
for (VAR25 = 0; VAR25 < VAR8; VAR25++) {
if (!VAR59[VAR25])
continue;
if ((VAR60 == -1) ||
(VAR28->VAR37[VAR25] <
VAR28->VAR37[VAR60]))
VAR60 = VAR25;
}
if (VAR60 == -1)
break;
VAR25 = VAR60;
VAR23 = VAR25 * VAR9;
FUN10(VAR7, VAR23, VAR23 + VAR9 - 1);
VAR28->VAR55 -= VAR28->VAR37[VAR25];
VAR28->VAR37[VAR25] = 0;
VAR58--;
VAR59[VAR25] = false;
}
FUN11(VAR59);
}

if (VAR32) {
if (VAR18->VAR61)
VAR31 = VAR18->VAR61;
if (VAR18->VAR62)
VAR31 = FUN12(VAR31, VAR18->VAR62);
if (VAR28->VAR55 < VAR31)
VAR32 = false;
}



VAR29 = VAR31 - VAR28->VAR54;
if (VAR32 && VAR7 && (VAR29 > 0)) {
int VAR63 = -1;
bool *VAR59 = xcalloc(VAR8, sizeof(bool));
for (VAR25 = 0; VAR25 < VAR8; VAR25++) {
if (VAR28->VAR37[VAR25] == 0)
continue;
for (VAR26 = 0; VAR26 < VAR9; VAR26++) {
VAR23 = (VAR25 * VAR9) + VAR26;
if (!FUN7(VAR7, VAR23))
continue;
VAR59[VAR25] = true;
if ((VAR63 == -1) ||
(VAR28->VAR37[VAR25] >
VAR28->VAR37[VAR63])) {
VAR63 = VAR25;
}
break;
}
}
while ((VAR63 != -1) && (VAR29 > 0)) {
if (*VAR14 == NULL)
*VAR14 = FUN13(VAR8);
FUN14(*VAR14, VAR63);
VAR29 -= VAR28->VAR37[VAR63];
VAR59[VAR63] = false;
if (VAR29 <= 0)
break;

VAR63 = -1;
for (VAR25 = 0; VAR25 < VAR8; VAR25++) {
if ((VAR28->VAR37[VAR25] == 0) ||
!VAR59[VAR25])
continue;
if ((VAR63 == -1) ||
(VAR28->VAR37[VAR25] >
VAR28->VAR37[VAR63])) {
VAR63 = VAR25;
}
}
}
FUN11(VAR59);
}

if (!VAR32) {
FUN15(VAR28);
VAR28 = NULL;
}
return VAR28;
}