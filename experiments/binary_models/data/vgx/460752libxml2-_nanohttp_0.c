static void
FUN1(xmlNanoHTTPCtxtPtr VAR1, const char *VAR2) {
const char *VAR3 = VAR2;

if (VAR2 == NULL) return;

if (!FUN2(VAR2, "", 5)) {
int VAR4 = 0;
int VAR5 = 0;

VAR3 += 5;
while ((*VAR3 >= '') && (*VAR3 <= '')) {
VAR4 *= 10;
VAR4 += *VAR3 - '';
VAR3++;
}
if (*VAR3 == '') {
VAR3++;
if ((*VAR3 >= '') && (*VAR3 <= '')) {
VAR4 *= 10;
VAR4 += *VAR3 - '';
VAR3++;
}
while ((*VAR3 >= '') && (*VAR3 <= ''))
VAR3++;
} else
VAR4 *= 10;
if ((*VAR3 != '') && (*VAR3 != '')) return;
while ((*VAR3 == '') || (*VAR3 == '')) VAR3++;
if ((*VAR3 < '') || (*VAR3 > '')) return;
while ((*VAR3 >= '') && (*VAR3 <= '')) {
VAR5 *= 10;
VAR5 += *VAR3 - '';
VAR3++;
}
if ((*VAR3 != 0) && (*VAR3 != '') && (*VAR3 != '')) return;
VAR1->VAR6 = VAR5;
VAR1->VAR4 = VAR4;
} else if (!FUN3(BAD_CAST VAR2, VAR7"", 13)) {
const VAR8 *VAR9, *VAR10, *VAR11;
VAR3 += 13;
while ((*VAR3 == '') || (*VAR3 == '')) VAR3++;
if (VAR1->VAR12 != NULL)
FUN4(VAR1->VAR12);
VAR1->VAR12 = FUN5(VAR3);
VAR11 = (const VAR8 *) VAR3;
VAR10 = VAR11;
while ((*VAR10 != 0) && (*VAR10 != '') && (*VAR10 != '') &&
(*VAR10 != '') && (*VAR10 != ''))
VAR10++;
if (VAR1->VAR13 != NULL)
FUN4(VAR1->VAR13);
VAR1->VAR13 = (char *) FUN6(VAR11, VAR10 - VAR11);
VAR9 = FUN7(BAD_CAST VAR1->VAR12, VAR7 "");
if (VAR9 != NULL) {
VAR9 += 8;
VAR10 = VAR9;
while ((*VAR10 != 0) && (*VAR10 != '') && (*VAR10 != '') &&
(*VAR10 != '') && (*VAR10 != ''))
VAR10++;
if (VAR1->VAR14 != NULL)
FUN4(VAR1->VAR14);
VAR1->VAR14 = (char *) FUN6(VAR9, VAR10 - VAR9);
}
} else if (!FUN3(BAD_CAST VAR2, VAR7"", 12)) {
const VAR8 *VAR9, *VAR10, *VAR11;
VAR3 += 12;
if (VAR1->VAR12 != NULL) return;
while ((*VAR3 == '') || (*VAR3 == '')) VAR3++;
VAR1->VAR12 = FUN5(VAR3);
VAR11 = (const VAR8 *) VAR3;
VAR10 = VAR11;
while ((*VAR10 != 0) && (*VAR10 != '') && (*VAR10 != '') &&
(*VAR10 != '') && (*VAR10 != ''))
VAR10++;
if (VAR1->VAR13 != NULL)
FUN4(VAR1->VAR13);
VAR1->VAR13 = (char *) FUN6(VAR11, VAR10 - VAR11);
VAR9 = FUN7(BAD_CAST VAR1->VAR12, VAR7 "");
if (VAR9 != NULL) {
VAR9 += 8;
VAR10 = VAR9;
while ((*VAR10 != 0) && (*VAR10 != '') && (*VAR10 != '') &&
(*VAR10 != '') && (*VAR10 != ''))
VAR10++;
if (VAR1->VAR14 != NULL)
FUN4(VAR1->VAR14);
VAR1->VAR14 = (char *) FUN6(VAR9, VAR10 - VAR9);
}
} else if (!FUN3(BAD_CAST VAR2, VAR7"", 9)) {
VAR3 += 9;
while ((*VAR3 == '') || (*VAR3 == '')) VAR3++;
if (VAR1->VAR15 != NULL)
FUN4(VAR1->VAR15);
if (*VAR3 == '') {
VAR8 *VAR16 = FUN8(VAR7 "VAR17:
VAR8 *VAR18 =
FUN9(VAR16, (const VAR8 *) VAR1->VAR19);
VAR1->VAR15 =
(char *) FUN9 (VAR18, (const VAR8 *) VAR3);
} else {
VAR1->VAR15 = FUN5(VAR3);
}
} else if (!FUN3(BAD_CAST VAR2, VAR7"", 17)) {
VAR3 += 17;
while ((*VAR3 == '') || (*VAR3 == '')) VAR3++;
if (VAR1->VAR20 != NULL)
FUN4(VAR1->VAR20);
VAR1->VAR20 = FUN5(VAR3);
} else if (!FUN3(BAD_CAST VAR2, VAR7"", 19)) {
VAR3 += 19;
while ((*VAR3 == '') || (*VAR3 == '')) VAR3++;
if (VAR1->VAR20 != NULL)
FUN4(VAR1->VAR20);
VAR1->VAR20 = FUN5(VAR3);
} else if ( !FUN3( BAD_CAST VAR2, VAR7"", 17) ) {
VAR3 += 17;
while ((*VAR3 == '') || (*VAR3 == '')) VAR3++;
if ( !FUN3( BAD_CAST VAR3, VAR7"", 4) ) {
VAR1->VAR21 = 1;

VAR1->VAR22 = FUN10(sizeof(VAR23));

if (VAR1->VAR22 != NULL) {
VAR1->VAR22->VAR24 = VAR25;
VAR1->VAR22->VAR26 = VAR25;
VAR1->VAR22->VAR27 = VAR25;
VAR1->VAR22->VAR28 = 0;
VAR1->VAR22->VAR29 = VAR25;

FUN11( VAR1->VAR22, 31 );
}
}
} else if ( !FUN3( BAD_CAST VAR2, VAR7"", 15) ) {
VAR3 += 15;
VAR1->VAR30 = FUN12( VAR3, NULL, 10 );
}
}