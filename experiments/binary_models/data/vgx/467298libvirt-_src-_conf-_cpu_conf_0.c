bool
FUN1(VAR1 *VAR2,
VAR1 *VAR3,
bool VAR4)
{
size_t VAR5;

if (!VAR2 && !VAR3)
return true;

if (VAR4) \
FUN2(VAR6, VAR7, VAR8)

if ((VAR2 && !VAR3) || (!VAR2 && VAR3)) {
FUN3("", FUN4(""));
return false;
}

if (VAR2->VAR9 != VAR3->VAR9) {
FUN3(FUN4(""),
FUN5(VAR3->VAR9),
FUN5(VAR2->VAR9));
return false;
}

if (VAR2->VAR10 != VAR3->VAR10) {
FUN3(FUN4(""),
FUN6(VAR3->VAR10),
FUN6(VAR2->VAR10));
return false;
}

if (VAR2->VAR11 != VAR3->VAR11) {
FUN3(FUN4(""),
FUN7(VAR3->VAR11),
FUN7(VAR2->VAR11));
return false;
}

if (VAR2->VAR12 != VAR3->VAR12) {
FUN3(FUN4(""),
FUN8(VAR3->VAR12),
FUN8(VAR2->VAR12));
return false;
}

if (FUN9(VAR2->VAR13, VAR3->VAR13)) {
FUN3(FUN4(""),
FUN10(VAR3->VAR13), FUN10(VAR2->VAR13));
return false;
}

if (FUN9(VAR2->VAR14, VAR3->VAR14)) {
FUN3(FUN4(""),
FUN10(VAR3->VAR14), FUN10(VAR2->VAR14));
return false;
}

if (FUN9(VAR2->VAR15, VAR3->VAR15)) {
FUN3(FUN4(""),
FUN10(VAR3->VAR15), FUN10(VAR2->VAR15));
return false;
}

if (VAR2->VAR16 != VAR3->VAR16) {
FUN3(FUN4(""),
VAR3->VAR16, VAR2->VAR16);
return false;
}

if (VAR2->VAR17 != VAR3->VAR17) {
FUN3(FUN4(""),
VAR3->VAR17, VAR2->VAR17);
return false;
}

if (VAR2->VAR18 != VAR3->VAR18) {
FUN3(FUN4(""),
VAR3->VAR18, VAR2->VAR18);
return false;
}

if (VAR2->VAR19 != VAR3->VAR19) {
FUN3(FUN4(""),
VAR3->VAR19, VAR2->VAR19);
return false;
}

if ((VAR2->VAR20 && !VAR3->VAR20) ||
(!VAR2->VAR20 && VAR3->VAR20) ||
(VAR2->VAR20 && VAR3->VAR20 &&
(VAR2->VAR20->VAR10 != VAR3->VAR20->VAR10 ||
VAR2->VAR20->VAR21 != VAR3->VAR20->VAR21))) {
FUN3("", FUN4(""));
return false;
}

if (VAR2->VAR22 != VAR3->VAR22) {
FUN3(FUN4(""),
VAR3->VAR22, VAR2->VAR22);
return false;
}

for (VAR5 = 0; VAR5 < VAR2->VAR22; VAR5++) {
if (FUN11(VAR2->VAR23[VAR5].VAR24, VAR3->VAR23[VAR5].VAR24)) {
FUN3(FUN4(""),
VAR3->VAR23[VAR5].VAR24, VAR2->VAR23[VAR5].VAR24);
return false;
}

if (VAR2->VAR23[VAR5].VAR25 != VAR3->VAR23[VAR5].VAR25) {
FUN3(FUN4(""),
FUN12(VAR3->VAR23[VAR5].VAR25),
FUN12(VAR2->VAR23[VAR5].VAR25));
return false;
}
}

if ((VAR2->VAR26 && !VAR3->VAR26) ||
(!VAR2->VAR26 && VAR3->VAR26) ||
(VAR2->VAR26 && VAR3->VAR26 &&
(VAR2->VAR26->VAR27 != VAR3->VAR26->VAR27 ||
VAR2->VAR26->VAR10 != VAR3->VAR26->VAR10))) {
FUN3("", FUN4(""));
return false;
}


return true;
}