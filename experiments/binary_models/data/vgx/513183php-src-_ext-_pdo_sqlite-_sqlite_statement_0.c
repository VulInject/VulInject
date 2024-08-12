static int FUN1(
VAR1 *VAR2, int VAR3, VAR4 *VAR5, enum VAR6 *VAR7)
{
VAR8 *VAR9 = (VAR8*)VAR2->VAR10;
if (!VAR9->VAR2) {
return 0;
}
if(VAR3 >= FUN2(VAR9->VAR2)) {

FUN3(VAR2);
return 0;
}
switch (FUN4(VAR9->VAR2, VAR3)) {
case VAR11:
FUN5(VAR5);
return 1;

case VAR12: {
int64_t VAR13 = FUN6(VAR9->VAR2, VAR3);
if (VAR13 > VAR14 || VAR13 < VAR15) {
FUN7(VAR5,
(char *) FUN8(VAR9->VAR2, VAR3),
FUN9(VAR9->VAR2, VAR3));
return 1;
}
FUN10(VAR5, VAR13);
return 1;
}

case VAR16:
FUN11(VAR5, FUN12(VAR9->VAR2, VAR3));
return 1;

case VAR17:
FUN13(VAR5,
FUN14(VAR9->VAR2, VAR3), FUN9(VAR9->VAR2, VAR3));
return 1;

default:
FUN13(VAR5,
(char *) FUN8(VAR9->VAR2, VAR3), FUN9(VAR9->VAR2, VAR3));
return 1;
}
}