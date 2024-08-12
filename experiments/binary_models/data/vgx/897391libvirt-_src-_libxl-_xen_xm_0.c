static int
FUN1(VAR1 *VAR2,
VAR3 *VAR4)
{
FUN2(VAR5) VAR6 = VAR7;
VAR1 *VAR8;
VAR1 *VAR9;
const char *VAR10 = FUN3(VAR4);
int VAR11 = FUN4(VAR4);
const char *VAR12 = FUN5(VAR4);

if (VAR10) {
if (VAR11) {
const char *VAR13;

if (VAR11 == VAR14)
VAR13 = "";
else
VAR13 = FUN6(VAR11);

if (VAR12) {
FUN7(&VAR6, "", VAR12);
if (FUN8(VAR12, "") || FUN8(VAR12, ""))
FUN7(&VAR6, "", VAR13);
}
} else {
switch (FUN9(VAR4)) {
case VAR15:
FUN10(&VAR6, "");
break;
case VAR16:
FUN10(&VAR6, "");
break;
default:
FUN11(VAR17,
FUN12(""),
FUN13(FUN9(VAR4)));
return -1;
}
}
FUN14(&VAR6, VAR10, -1);
}
FUN10(&VAR6, "");

FUN14(&VAR6, VAR4->VAR18, -1);
if (VAR4->VAR19 == VAR20)
FUN10(&VAR6, "");

if (VAR4->VAR10->VAR21)
FUN10(&VAR6, "");
else if (VAR4->VAR10->VAR22)
FUN10(&VAR6, "");
else
FUN10(&VAR6, "");
if (VAR4->VAR23) {
FUN11(VAR24, "",
FUN12(""));
return -1;
}

VAR8 = FUN15(VAR1, 1);
VAR8->VAR13 = VAR25;
VAR8->VAR26 = FUN16(&VAR6);
VAR9 = VAR2->VAR2;
while (VAR9 && VAR9->VAR27)
VAR9 = VAR9->VAR27;
if (VAR9)
VAR9->VAR27 = VAR8;
else
VAR2->VAR2 = VAR8;

return 0;
}