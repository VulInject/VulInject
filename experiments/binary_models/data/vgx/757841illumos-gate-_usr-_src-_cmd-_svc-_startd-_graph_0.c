static int
FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
VAR7 *VAR8 = NULL;
VAR9 *VAR10 = NULL;
scf_type_t VAR11;
VAR12 *VAR13;
admin_action_t VAR14;
int VAR15, VAR16 = 0, VAR17;
hrtime_t VAR18[VAR19];
char *VAR20;

VAR17 = FUN2(VAR6, &VAR20);
switch (VAR17) {
case 0:
break;

case VAR21:
return (VAR21);

case VAR22:
return (0);

default:
FUN3("", VAR17);
}

FUN4(&VAR23);

VAR13 = FUN5(VAR20);
if (VAR13 == NULL) {
FUN6(&VAR23);
FUN7(VAR24, ""
"", VAR20);
FUN8(VAR20, VAR25);
return (0);
}

VAR8 = FUN9(VAR2);
VAR10 = FUN10(VAR2);

for (VAR15 = 0; VAR15 < VAR19; VAR15++) {
if (FUN11(VAR4, VAR26[VAR15], VAR8) != 0) {
switch (FUN12()) {
case VAR27:
default:
VAR16 = VAR21;
goto VAR28;

case VAR29:
goto VAR28;

case VAR30:
VAR18[VAR15] = 0;
continue;

case VAR31:
case VAR32:
case VAR33:
FUN3("", FUN12());
}
}

if (FUN13(VAR8, &VAR11) != 0) {
switch (FUN12()) {
case VAR27:
default:
VAR16 = VAR21;
goto VAR28;

case VAR29:
VAR18[VAR15] = 0;
continue;

case VAR33:
FUN3("", FUN12());
}
}

if (VAR11 != VAR34) {
VAR18[VAR15] = 0;
continue;
}

if (FUN14(VAR8, VAR10) != 0) {
switch (FUN12()) {
case VAR27:
default:
VAR16 = VAR21;
goto VAR28;

case VAR29:
goto VAR28;

case VAR30:
case VAR35:
VAR18[VAR15] = 0;
continue;

case VAR33:
case VAR36:
FUN3("",
FUN12());
}
}

VAR17 = FUN15(VAR10, &VAR18[VAR15]);
assert(VAR17 == 0);
}

VAR14 = VAR37;
if (VAR18[VAR37] ||
VAR18[VAR38]) {
VAR14 = VAR18[VAR37] ?
VAR37 : VAR38;

FUN16(VAR13, VAR39[VAR14]);
VAR17 = FUN17(VAR2, VAR4, VAR14, VAR18[VAR14]);
switch (VAR17) {
case 0:
case VAR40:
break;

case VAR21:
VAR16 = VAR21;
goto VAR28;

case VAR41:
FUN18("");


default:
FUN3("", VAR17);
}
}

while ((VAR14 = FUN19(VAR18, VAR19)) != -1) {
FUN7(VAR24,
"", VAR26[VAR14],
VAR20);

if (VAR14 == VAR42) {
VAR17 = FUN20(VAR13, VAR6);
switch (VAR17) {
case 0:
case VAR22:
case VAR43:
case -1:
break;

case VAR21:

VAR16 = VAR21;
goto VAR28;

default:
FUN3("", VAR17);
}
}

FUN16(VAR13, VAR39[VAR14]);

VAR17 = FUN17(VAR2, VAR4, VAR14, VAR18[VAR14]);
switch (VAR17) {
case 0:
case VAR40:
break;

case VAR21:
VAR16 = VAR21;
goto VAR28;

case VAR41:
FUN18("");


default:
FUN3("", VAR17);
}

VAR18[VAR14] = 0;
}

VAR28:
FUN6(&VAR23);

FUN21(VAR8);
FUN22(VAR10);
FUN8(VAR20, VAR25);
return (VAR16);
}