void FUN1(VAR1 *VAR2, bool VAR3)
{
VAR4 *VAR5;
int VAR6;


if (!FUN2(&VAR2->VAR7)) {
FUN3("");
return;
}


if (VAR2->VAR8) {
usec_t VAR9 = FUN4();
if (VAR9 - VAR2->VAR10 < VAR11) {
FUN3("" VAR12 "",
(VAR11 - (VAR9 - VAR2->VAR10)) / VAR13);
return;
}
}

VAR6 = FUN5(VAR2);


if (!FUN2(&VAR2->VAR14) && VAR6 < (2 * FUN6(VAR2))) {
FUN3("");
goto VAR15;
}


if (VAR6 >= FUN6(VAR2) && VAR2->VAR16) {

if (VAR17 && FUN7(VAR2)) {
usec_t VAR9 = FUN4();
VAR4 *VAR18 = FUN8(&VAR2->VAR19);
if (VAR18 && (VAR9 - VAR18->VAR20) >= VAR17) {
if (VAR6 < FUN6(VAR2) + FUN7(VAR2)) {
FUN9(VAR18, "");
goto VAR21;
}
}
}
FUN3("",
VAR6, FUN6(VAR2));
return;
}

VAR21:
VAR6 = FUN10(VAR2->VAR22);
if (VAR6 > 0) {

while (VAR3 && VAR2->VAR22->VAR23 >= VAR6) {
if (!FUN11(VAR2->VAR22)) {
break;
}
}
if (VAR2->VAR22->VAR23 >= VAR6) {
FUN3("",
VAR2->VAR22->VAR24, VAR2->VAR22->VAR23, VAR6);
return;
}
}

VAR6 = FUN12(VAR2->VAR25);
if (VAR6 > 0) {

while (VAR3 && VAR2->VAR25->VAR23 >= VAR6) {
if (!FUN13(VAR2->VAR25)) {
break;
}
}
if (VAR2->VAR25->VAR23 >= VAR6) {
FUN3("",
VAR2->VAR25->VAR24, VAR2->VAR25->VAR23, VAR6);
return;
}
}

VAR15:

VAR5 = FUN14(VAR26);
if (!VAR5) {
FUN3("");
return;
}


VAR5->VAR2 = VAR2;
VAR5->VAR27 = VAR5->VAR2->VAR25;
VAR5->VAR28 = FUN4();
FUN15(&VAR5->VAR29, "");
VAR2->VAR10 = FUN4();
FUN16(VAR5, VAR30);
VAR2->VAR22->VAR23++;
VAR2->VAR25->VAR23++;

FUN17(VAR5);
}