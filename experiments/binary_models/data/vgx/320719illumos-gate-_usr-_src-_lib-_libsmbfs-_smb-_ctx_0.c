static int
FUN1(struct VAR1 *VAR2, const char *VAR3, int VAR4)
{
char *VAR5;
int VAR6;
int VAR7;
int VAR8, VAR9;

if (VAR4 > 0) {
FUN2(VAR10, VAR3, "", &VAR5);
if (VAR5) {
VAR7 = FUN3(VAR2, VAR5);
if (VAR7)
FUN4(FUN5(VAR11,
""),
VAR7, VAR3);
}
}

if (VAR4 <= 1) {



VAR8 = -1;
FUN2(VAR10, VAR3, "", &VAR5);
if (VAR5 != NULL) {
VAR8 = FUN6(VAR5);
if (VAR8 == -1) {
FUN4(FUN5(VAR11,
""%VAR12\""),
0, VAR5, VAR3);
}
}
VAR9 = -1;
FUN2(VAR10, VAR3, "", &VAR5);
if (VAR5 != NULL) {
VAR9 = FUN6(VAR5);
if (VAR9 == -1) {
FUN4(FUN5(VAR11,
""%VAR12\""),
0, VAR5, VAR3);
}
}


if (VAR8 != -1 && VAR9 != -1) {
if (VAR8 > VAR9) {
FUN4(FUN5(VAR11,
""),
0, VAR3);
} else {
VAR2->VAR13 = VAR8;
VAR2->VAR14 = VAR9;
}
}


if (VAR8 != -1) {
if (VAR8 > VAR2->VAR14) {
FUN4(FUN5(VAR11,
""),
0, VAR3);
} else {
VAR2->VAR13 = VAR8;
}
}
if (VAR9 != -1) {
if (VAR9 < VAR2->VAR13) {
FUN4(FUN5(VAR11,
""),
0, VAR3);
} else {
VAR2->VAR14 = VAR9;
}
}

FUN2(VAR10, VAR3, "", &VAR5);
if (VAR5) {

VAR6 = FUN7(VAR5);
if (VAR6 != -1) {
VAR2->VAR15 = VAR6;
} else {

FUN4(FUN5(VAR11,
""%VAR12\""),
0, VAR5, VAR3);
return (VAR16);
}
}

FUN2(VAR10, VAR3, "", &VAR5);
if (VAR5) {

if (strcmp(VAR5, "") == 0) {
(void) FUN8(VAR2, VAR17, VAR17);
} else if (strcmp(VAR5, "") == 0) {
(void) FUN8(VAR2, VAR18, VAR17);
} else if (strcmp(VAR5, "") == 0) {
(void) FUN8(VAR2, VAR18, VAR18);
} else {

FUN4(FUN5(VAR11,
""%VAR12\""),
0, VAR5, VAR3);
return (VAR16);
}
}


FUN2(VAR10, VAR3, "", &VAR5);
if (VAR5) {
VAR7 = FUN9(VAR2, VAR5, 0);
if (VAR7)
FUN4(FUN5(VAR11,
""
""), VAR7, VAR3);
}
FUN2(VAR10, VAR3, "", &VAR5);
if (VAR5) {
VAR7 = FUN9(VAR2, VAR5, 0);
if (VAR7)
FUN4(FUN5(VAR11,
""
""), VAR7, VAR3);
}

FUN2(VAR10, VAR3, "", &VAR5);
if (VAR5) {
VAR7 = FUN10(VAR2, VAR5, 0);
if (VAR7)
FUN4(FUN5(VAR11,
""
""), VAR7, VAR3);
}
}

if (VAR4 == 1) {

FUN2(VAR10, VAR3, "", &VAR5);
if (VAR5) {
VAR7 = FUN11(VAR2, VAR5);
if (VAR7) {
FUN4(FUN5(VAR11,
""),
0, VAR3);
return (VAR7);
}
}
}

FUN2(VAR10, VAR3, "", &VAR5);
if (VAR5) {
VAR7 = FUN12(VAR2, VAR5, 0);
if (VAR7)
FUN4(FUN5(VAR11,
""),
VAR7, VAR3);
}

return (0);
}