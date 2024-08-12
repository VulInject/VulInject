VAR1 FUN1(VAR2 *VAR3, int VAR4) {
RDebugReasonType VAR5 = VAR6;
int VAR7 = VAR4;
int VAR8, VAR9 = VAR10;
int VAR11 = -1;

if (VAR4 == -1) {
VAR9 |= VAR12;
}

for (;;) {



if (FUN2 ()) {
FUN3 ((VAR13)VAR14, VAR3);
} else {
FUN3 ((VAR13)VAR15, VAR3);
}
void *VAR16 = FUN4 ();
if (VAR3->VAR17) {
VAR11 = FUN5 (-1, &VAR8, VAR9);
} else {
VAR11 = FUN5 (VAR4, &VAR8, VAR9);
}
FUN6 (VAR16);
FUN7 ();

if (VAR11 < 0) {

if (VAR18 == VAR19) {
continue;
}
FUN8 ("");
break;
} else if (VAR11 == 0) {

VAR9 &= ~VAR12;
} else {
VAR7 = VAR11;


VAR5 = FUN9 (VAR3, VAR7, VAR8, true);
if (VAR5 != VAR6) {
break;
}

if (FUN10 (VAR8)) {
if (VAR7 == VAR3->VAR20) {
FUN11 (VAR3->VAR21);
VAR3->VAR21 = NULL;
VAR5 = VAR22;
FUN12 ("", VAR7, FUN13 (VAR8));
break;
} else {
FUN12 ("", VAR7, FUN13 (VAR8));
FUN14 (VAR3, VAR7);
continue;
}
} else if (FUN15 (VAR8)) {
FUN12 ("", FUN16 (VAR8));
VAR5 = VAR23;
} else if (FUN17 (VAR8)) {


if (!FUN18 (VAR3->VAR21, &VAR7, &VAR24) &&
FUN19 (VAR8) == VAR25) {
VAR5 = FUN20 (VAR3, VAR7);
if (VAR5 != VAR6) {
break;
}
}

if (FUN21 (VAR3, VAR7)) {
VAR5 = VAR3->VAR5.VAR26;
} else {
FUN12 ("");
return VAR27;
}
} else if (FUN22 (VAR8)) {
FUN12 ("");
VAR5 = VAR28;
} else if (VAR8 == 1) {
FUN12 ("");
VAR5 = VAR22;
} else if (VAR8 == 0) {
FUN12 ("");
VAR5 = VAR22;
} else {
if (VAR11 != VAR7) {
VAR5 = VAR29;
} else {
FUN12 ("");
}
}
if (VAR5 != VAR6) {
break;
}
}
}
VAR3->VAR5.VAR7 = VAR7;
return VAR5;
}