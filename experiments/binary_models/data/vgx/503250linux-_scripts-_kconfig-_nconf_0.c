static void FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3;
struct VAR4 *VAR5;
struct VAR1 *VAR6;
int VAR7, VAR8, VAR9 = 2;
tristate VAR10;
char VAR11;

if (!VAR1 || (!VAR12 && !FUN2(VAR1)))
return;

VAR3 = VAR1->VAR3;
VAR5 = VAR1->VAR13;
if (!VAR3) {
if (VAR5 && VAR1 != VAR14) {
const char *VAR13 = FUN3(VAR1);
enum prop_type VAR15;
VAR15 = VAR1->VAR13 ? VAR1->VAR13->VAR7 : VAR16;
switch (VAR15) {
case VAR17:
VAR18++;
if (VAR19) {
FUN4(VAR1, '',
"",
VAR1->VAR20 ? "" : "",
VAR21 + 1, '', VAR13);
} else
FUN4(VAR1, '',
"",
VAR21 + 1, '', VAR13,
FUN5(VAR1) ? "" : "");

if (VAR19 && VAR1->VAR20)
goto VAR22;
return;
case VAR23:
if (VAR13) {
VAR18++;
FUN4(VAR1, '',
"",
VAR21 + 1, '',
VAR13);
}
break;
default:
if (VAR13) {
VAR18++;
FUN4(VAR1, '', "",
VAR21 + 1, '',
VAR13);
}
}
} else
VAR9 = 0;
goto VAR22;
}

VAR7 = FUN6(VAR3);
if (FUN7(VAR3)) {
struct VAR2 *VAR24 = FUN8(VAR3);
struct VAR1 *VAR25 = NULL;

VAR18++;
for (VAR6 = VAR1->VAR26; VAR6; VAR6 = VAR6->VAR27) {
if (FUN2(VAR6) && VAR6->VAR3 == VAR24)
VAR25 = VAR6;
}

VAR10 = FUN9(VAR3);
if (FUN10(VAR3)) {
switch (VAR7) {
case VAR28:
FUN4(VAR1, '', "",
VAR10 == VAR29 ? '' : '');
break;
case VAR30:
switch (VAR10) {
case VAR31:
VAR11 = '';
break;
case VAR32:
VAR11 = '';
break;
default:
VAR11 = '';
break;
}
FUN4(VAR1, '', "", VAR11);
break;
}
} else {
FUN4(VAR1, VAR25 ? '' : '', "");
}

FUN11("", VAR21 + 1,
'', FUN3(VAR1));
if (VAR10 == VAR31) {
if (VAR25) {
FUN11("",
FUN3(VAR25));
FUN11("");
if (VAR25->VAR26) {
VAR21 += 2;
FUN1(VAR25);
VAR21 -= 2;
}
}
return;
}
} else {
if (VAR1 == VAR14) {
FUN4(VAR1, '',
"", VAR21 + 1,
'', FUN3(VAR1));
goto VAR22;
}
VAR18++;
VAR10 = FUN9(VAR3);
if (FUN12(VAR3) && VAR10 == VAR31) {
FUN4(VAR1, '', "");
} else {
switch (VAR7) {
case VAR28:
if (FUN10(VAR3))
FUN4(VAR1, '', "",
VAR10 == VAR29 ? '' : '');
else
FUN4(VAR1, '', "",
VAR10 == VAR29 ? '' : '');
break;
case VAR30:
switch (VAR10) {
case VAR31:
VAR11 = '';
break;
case VAR32:
VAR11 = '';
break;
default:
VAR11 = '';
break;
}
if (FUN10(VAR3)) {
if (VAR3->VAR33.VAR34 == VAR32)
FUN4(VAR1,
'', "", VAR11);
else
FUN4(VAR1,
'', "", VAR11);
} else
FUN4(VAR1, '', "", VAR11);
break;
default:
VAR8 = 2 + strlen(FUN13(VAR3));
FUN4(VAR1, '', "",
FUN13(VAR3));
VAR8 = VAR21 - VAR8 + 4;
if (VAR8 < 0)
VAR8 = 0;
FUN11("", VAR8, '',
FUN3(VAR1),
(FUN14(VAR3) ||
!FUN10(VAR3)) ? "" :
"");
goto VAR22;
}
}
FUN11("", VAR21 + 1, '',
FUN3(VAR1),
(FUN14(VAR3) || !FUN10(VAR3)) ?
"" : "");
if (VAR1->VAR13 && VAR1->VAR13->VAR7 == VAR17) {
FUN11("", FUN5(VAR1) ? "" : "");
return;
}
}

VAR22:
VAR21 += VAR9;
for (VAR6 = VAR1->VAR26; VAR6; VAR6 = VAR6->VAR27)
FUN1(VAR6);
VAR21 -= VAR9;
}