static void FUN1(List VAR1)
{
VAR2 *VAR3 = NULL;
VAR2 *VAR4 = NULL;
ListIterator VAR5 = NULL;

if (FUN2(VAR1) < 2)
return;


VAR5 = FUN3(VAR1);
while ((VAR3 = FUN4(VAR5))) {
(void) FUN5(VAR3->VAR6,
VAR7, NULL);
if (!VAR4) {
VAR4 = VAR3;
FUN6(VAR4->VAR8);
if (VAR9) {
FUN7(VAR4->VAR8, "",
VAR9);
} else {
VAR4->VAR8 =
xstrdup("");
}
continue;
}
if (!VAR4->VAR6) {
VAR4->VAR6 =
VAR3->VAR6;
} else {
FUN8(VAR4->VAR6,
VAR3->VAR6);
FUN9(VAR4->VAR10,
VAR3->VAR10);
}
FUN10(VAR5);
}
FUN11(VAR5);
}