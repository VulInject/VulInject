static unsigned int FUN1(void)
{
basic_block VAR1, VAR2;
bool VAR3 = false, VAR4 = true;
gimple_stmt_iterator VAR5 = { 0 };


FUN2(FUN3(FUN4(VAR6)));
VAR2 = FUN5(FUN4(VAR6));


FUN6(VAR1, VAR6) {
for (VAR5 = FUN7(VAR1); !FUN8(VAR5); FUN9(&VAR5)) {
gimple VAR7;

VAR7 = FUN10(VAR5);


if (FUN11(VAR7))
VAR4 = false;

if (!FUN12(VAR7))
continue;

if (VAR8) {
fprintf(VAR9, "",
FUN13(VAR10));
}


FUN14(&VAR5, true);
if (VAR1 == VAR2)
VAR3 = true;
}
}

if (VAR3)
return 0;


if (VAR4 &&
!FUN15(VAR10) &&
FUN16(VAR10)) {
return 0;
}

if (VAR4 &&
!FUN17(FUN18(FUN19(VAR10)),
"", 10)) {
return 0;
}


VAR1 = VAR2;
if (!FUN20(VAR1)) {

FUN21(FUN22(FUN4(VAR6)));
FUN2(FUN3(FUN4(VAR6)));
VAR1 = FUN5(FUN4(VAR6));
}
VAR5 = FUN23(VAR1);
FUN14(&VAR5, false);

return 0;
}