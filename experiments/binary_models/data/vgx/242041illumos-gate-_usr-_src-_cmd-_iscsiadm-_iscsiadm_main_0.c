static int
FUN1(char *VAR1, IMA_OID VAR2, int VAR3)
{
IMA_STATUS VAR4;
IMA_BOOL_VALUE VAR5;
IMA_MIN_MAX_VALUE VAR6;
char VAR7[VAR8 + 1];
VAR9	*VAR10 = NULL;
VAR11 *VAR12;

(void) memset(VAR7, 0, sizeof (VAR7));

switch (VAR3) {
case VAR13:
(void) fprintf(VAR14, "",
VAR1,
FUN2(""));
break;
case VAR15:
(void) fprintf(VAR14, "",
VAR1,
FUN2(""));
VAR4 = FUN3(
&VAR2,
&VAR12);

if (!FUN4(VAR4)) {
FUN5(VAR4);
return (1);
}

VAR4 = FUN6(&VAR12->VAR16[0],
&VAR10);
VAR5.VAR17 = VAR10->VAR18;
VAR6.VAR17 = VAR10->VAR18;
break;
default:
return (1);
}

if (VAR3 == VAR15) {
VAR5.VAR19 = VAR10->VAR20;
} else {
VAR4 = FUN7(VAR2, &VAR5);
}
if (!FUN4(VAR4)) {
FUN5(VAR4);
(void) FUN8(VAR10);
return (1);
}
(void) fprintf(VAR14, "", VAR1,
FUN2(""));
FUN9(VAR5, VAR3);


if (VAR3 == VAR15) {
VAR5.VAR19 = VAR10->VAR21;
} else {
VAR4 = FUN10(VAR2, &VAR5);
}
if (!FUN4(VAR4)) {
FUN5(VAR4);
(void) FUN8(VAR10);
return (1);
}
(void) fprintf(VAR14, "", VAR1,
FUN2(""));
FUN9(VAR5, VAR3);


if (VAR3 == VAR15) {
VAR6.VAR19 = VAR10->VAR22;
} else {
VAR4 = FUN11(VAR2, &VAR6);
}
if (!FUN4(VAR4)) {
FUN5(VAR4);
(void) FUN8(VAR10);
return (1);
}
(void) fprintf(VAR14, "", VAR1,
FUN2(""));
FUN12(VAR6, VAR3);


if (VAR3 == VAR15) {
VAR6.VAR19 = VAR10->VAR23;
} else {
VAR4 = FUN13(VAR2, &VAR6);
}
if (!FUN4(VAR4)) {
FUN5(VAR4);
(void) FUN8(VAR10);
return (1);
}
(void) fprintf(VAR14, "", VAR1,
FUN2(""));
FUN12(VAR6, VAR3);


if (VAR3 == VAR15) {
VAR6.VAR19 = VAR10->VAR24;
} else {
VAR4 = FUN14(VAR2, &VAR6);
}
if (!FUN4(VAR4)) {
FUN5(VAR4);
(void) FUN8(VAR10);
return (1);
}
(void) fprintf(VAR14, "", VAR1,
FUN2(""));
FUN12(VAR6, VAR3);


if (VAR3 == VAR15) {
VAR6.VAR19 = VAR10->VAR25;
} else {
VAR4 = FUN15(VAR2,
&VAR6);
}
if (!FUN4(VAR4)) {
FUN5(VAR4);
(void) FUN8(VAR10);
return (1);
}
(void) fprintf(VAR14, "",
VAR1, FUN2(""));
FUN12(VAR6, VAR3);


if (VAR3 == VAR15) {
VAR5.VAR19 = VAR10->VAR26;
} else {
VAR4 = FUN16(VAR2, &VAR5);
}
if (!FUN4(VAR4)) {
FUN5(VAR4);
(void) FUN8(VAR10);
return (1);
}
(void) fprintf(VAR14, "", VAR1, FUN2(""));
FUN9(VAR5, VAR3);


if (VAR3 == VAR15) {
VAR5.VAR19 = VAR10->VAR27;
} else {
VAR4 = FUN17(VAR2, &VAR5);
}
if (!FUN4(VAR4)) {
FUN5(VAR4);
(void) FUN8(VAR10);
return (1);
}
(void) fprintf(VAR14, "", VAR1,
FUN2(""));
FUN9(VAR5, VAR3);


if (VAR3 == VAR15) {
VAR6.VAR19 = VAR10->VAR28;
} else {
VAR4 = FUN18(VAR2, &VAR6);
}
if (!FUN4(VAR4)) {
FUN5(VAR4);
(void) FUN8(VAR10);
return (1);
}
(void) fprintf(VAR14, "", VAR1, FUN2(""));
FUN12(VAR6, VAR3);


if (VAR3 == VAR15) {
VAR6.VAR19 = VAR10->VAR29;
} else {
VAR4 = FUN19(VAR2, &VAR6);
}
if (!FUN4(VAR4)) {
FUN5(VAR4);
(void) FUN8(VAR10);
return (1);
}
(void) fprintf(VAR14, "", VAR1,
FUN2(""));
FUN12(VAR6, VAR3);


if (VAR3 == VAR15) {
VAR6.VAR19 = VAR10->VAR30;
} else {
VAR4 = FUN20(VAR2,
&VAR6);
}
if (!FUN4(VAR4)) {
FUN5(VAR4);
(void) FUN8(VAR10);
return (1);
}
(void) fprintf(VAR14, "", VAR1,
FUN2(""));
FUN12(VAR6, VAR3);


if (VAR3 == VAR15) {
VAR6.VAR19 = VAR10->VAR31;
} else {
VAR4 = FUN21(VAR2, &VAR6);
}
if (!FUN4(VAR4)) {
FUN5(VAR4);
(void) FUN8(VAR10);
return (1);
}
(void) fprintf(VAR14, "", VAR1, FUN2(""));
FUN12(VAR6, VAR3);

(void) FUN8(VAR10);
return (0);
}