static VAR1
FUN1(VAR2 *restrict VAR3, VAR4 *restrict VAR5,
boolean_t dummy VAR6)
{
strview_t VAR7;
size_t VAR8, VAR9;
boolean_t VAR10;
char VAR11;

if (FUN2(VAR3))
return (VAR12);

FUN3("", VAR13, FUN4(VAR5));

if (FUN5(VAR5) == 0)
return (VAR12);

FUN6(VAR3, VAR8);
FUN7(&VAR7, VAR5);

switch (VAR11 = FUN8(VAR5)) {
case '':
VAR10 = FUN9(VAR3, '') &&
FUN1(VAR3, VAR5, VAR12) &&
FUN10(VAR3, "") &&
FUN11(VAR3, VAR5, VAR12) &&
FUN9(VAR3, '');
break;
case '':
VAR10 = FUN9(VAR3, '') &&
FUN1(VAR3, VAR5, VAR12) &&
FUN9(VAR3, '');
break;
case '':
VAR9 = 0;
VAR10 = FUN9(VAR3, '') &&
FUN12(VAR3, VAR5, VAR14, "",
VAR12, &VAR9) &&
FUN10(VAR3, (VAR9 == 1) ? "" : "");
break;
case '':
case '':

if (!(VAR10 = FUN9(VAR3, '')))
break;


if (FUN13(VAR3, VAR5)) {
if (!(VAR10 = FUN9(VAR3, '')))
break;
} else if (FUN2(VAR3)) {
break;
}

VAR10 = FUN10(VAR3, (VAR11 == '') ? "" : "") &&
FUN1(VAR3, VAR5, VAR12);
break;
case '':
VAR10 = FUN10(VAR3, "") &&
FUN1(VAR3, VAR5, VAR12);
break;
case '':
VAR10 = FUN10(VAR3, "") &&
FUN1(VAR3, VAR5, VAR12);
break;
case '':
VAR10 = FUN14(VAR3, VAR5);
break;
case '':
VAR10 = FUN10(VAR3, "") &&
FUN15(VAR3, VAR5);
if (!VAR10)
break;


FUN3("", VAR13, FUN4(VAR5));


if (FUN16(VAR5, ""))
break;


if (FUN17(VAR5, 0) == '' &&
!(VAR10 = FUN10(VAR3, "")))
break;

VAR10 = FUN13(VAR3, VAR5);
break;
default:
FUN7(VAR5, &VAR7);

VAR10 = FUN18(VAR3, VAR5, VAR14,
VAR12) ||
FUN19(VAR3, VAR5);
if (VAR10)
break;

VAR10 = FUN20(VAR3, VAR5, VAR12);
break;
}

FUN3("", VAR13, FUN21(VAR3, VAR8),
VAR10 ? "" : "");

return (VAR10);
}