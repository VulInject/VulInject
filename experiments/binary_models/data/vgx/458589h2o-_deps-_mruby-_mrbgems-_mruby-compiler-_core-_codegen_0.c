static void
FUN1(VAR1 *VAR2, VAR3 *VAR4, mrb_bool VAR5, int VAR6)
{
if (VAR6) {
int VAR7 = 0, VAR8 = 0, VAR9 = 0;

while (VAR4) {
switch (FUN2(VAR4->VAR10->VAR10)) {
case VAR11:
if ((VAR4->VAR12 == NULL) && (FUN2(VAR4->VAR10->VAR12->VAR12) == 0))
break;

case VAR13:
FUN3(VAR2, VAR4->VAR10, VAR14);
++VAR8;
break;

case VAR15:
if (VAR8 > 0) {
VAR8 = 0;
++VAR7;
if (VAR5)
FUN4(VAR2);
}
break;
}
while (VAR8 >= 2) {
FUN5(); FUN5();
FUN6(VAR2, VAR16, FUN7());
FUN8();
VAR8--;
}
if (VAR7 > VAR17) {
FUN9(VAR7);
if (VAR9) {
FUN5();
FUN10(VAR2, VAR18, FUN7(), VAR7);
}
else {
FUN10(VAR2, VAR19, FUN7(), VAR7);
VAR9 = 1;
}
FUN8();
VAR7 = 0;
}
VAR4 = VAR4->VAR12;
}
if (VAR8 > 0) {
++VAR7;
if (VAR5)
FUN4(VAR2);
}
FUN9(VAR7);
if (VAR9) {
FUN5();
FUN10(VAR2, VAR18, FUN7(), VAR7);
}
else {
FUN10(VAR2, VAR19, FUN7(), VAR7);
}
FUN8();
}
else {
while (VAR4) {
switch (FUN2(VAR4->VAR10->VAR10)) {
case VAR13: case VAR20:
FUN3(VAR2, VAR4->VAR10, VAR21);
}
VAR4 = VAR4->VAR12;
}
}
}