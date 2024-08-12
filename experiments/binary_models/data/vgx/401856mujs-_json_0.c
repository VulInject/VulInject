static int FUN1(VAR1 *VAR2, VAR3 **VAR4, const char *VAR5, const char *VAR6, int VAR7)
{



FUN2(VAR2, -1, VAR5);

if (FUN3(VAR2, -1)) {
if (FUN4(VAR2, -1, "")) {
if (FUN5(VAR2, -1)) {
FUN6(VAR2, -2);
FUN7(VAR2, VAR5);
FUN8(VAR2, 1);
FUN9(VAR2);
} else {
FUN10(VAR2, 1);
}
}
}

if (FUN5(VAR2, 2)) {
FUN6(VAR2, 2); 
FUN6(VAR2, -3); 
FUN7(VAR2, VAR5); 
FUN6(VAR2, -4); 
FUN8(VAR2, 2);
FUN9(VAR2); 
}

if (FUN3(VAR2, -1) && !FUN5(VAR2, -1)) {
VAR8 *VAR9 = FUN11(VAR2, -1);
switch (VAR9->VAR10) {
case VAR11: FUN12(VAR2, VAR4, VAR9->VAR12.VAR13); break;
case VAR14: FUN13(VAR2, VAR4, VAR9->VAR12.VAR15.VAR16); break;
case VAR17: FUN14(VAR2, VAR4, VAR9->VAR12.VAR18 ? "" : ""); break;
case VAR19: FUN15(VAR2, VAR4, VAR6, VAR7); break;
default: FUN16(VAR2, VAR4, VAR9, VAR6, VAR7); break;
}
}
else if (FUN17(VAR2, -1))
FUN14(VAR2, VAR4, FUN18(VAR2, -1) ? "" : "");
else if (FUN19(VAR2, -1))
FUN12(VAR2, VAR4, FUN20(VAR2, -1));
else if (FUN21(VAR2, -1))
FUN13(VAR2, VAR4, FUN22(VAR2, -1));
else if (FUN23(VAR2, -1))
FUN14(VAR2, VAR4, "");
else {
FUN10(VAR2, 1);
return 0;
}

FUN10(VAR2, 1);
return 1;
}