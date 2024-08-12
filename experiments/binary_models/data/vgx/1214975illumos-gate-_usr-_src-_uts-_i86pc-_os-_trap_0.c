static void
FUN1(uint_t VAR1, struct VAR2 *VAR3, caddr_t VAR4)
{
int VAR5;

VAR5 = FUN2();
VAR1 &= ~VAR6;
if (FUN3(VAR7)->VAR8[0])
FUN4("", FUN3(VAR7)->VAR8);
if (VAR1 < VAR9)
FUN4("", VAR10[VAR1], VAR11[VAR1]);
else
switch (VAR1) {
case VAR12:
FUN4("");
break;
case VAR13:
FUN4("");
break;
default:
FUN4("", VAR1);
break;
}
if (VAR1 == VAR14) {
FUN4("",
FUN5(VAR3->VAR15) ? "": "", (VAR16)VAR4);
} else if (VAR4) {
FUN4("", (VAR16)VAR4);
}

FUN4("",
(FUN6(VAR17) && FUN6(VAR17)->VAR18) ?
FUN6(VAR17)->VAR19 : 0, VAR3->VAR20, VAR3->VAR21, VAR3->VAR22);


FUN4("",
(VAR23)FUN7(), (VAR23)FUN8(), VAR24);
FUN4("",
(VAR23)FUN7(), VAR25, (VAR23)FUN8(), VAR24);

FUN4("", FUN9());
FUN4("", FUN10());
FUN4("", FUN11());
FUN4("");

FUN12(VAR3);
FUN13(VAR5);
}