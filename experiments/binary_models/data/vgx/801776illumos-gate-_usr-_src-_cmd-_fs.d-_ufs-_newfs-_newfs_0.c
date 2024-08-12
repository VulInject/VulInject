static VAR1
FUN1(int VAR2, char *VAR3)
{
struct extvtoc VAR4;
VAR5 *VAR6;
diskaddr_t	VAR7;

int VAR8 = FUN2(VAR2, &VAR4);

if (VAR8 >= 0) {
VAR9 = VAR10;
} else {
if (VAR8 == VAR11 || VAR8 == VAR12) {

VAR8 = FUN3(VAR2, &VAR6);
if (VAR8 >= 0)
VAR9 = VAR13;
}
}

if (VAR8 < 0) {


VAR7 = FUN4(VAR2);
if (VAR7 == 0) {
switch (VAR8) {
case VAR12:
(void) fprintf(VAR14, FUN5(
""), VAR3, strerror(VAR15));
FUN6(10);

case VAR16:
FUN7(FUN5(
""), VAR3);

case VAR17:
FUN7(FUN5(
""), VAR3);

default:
FUN7(FUN5(
""),
VAR3);

}
} else {
VAR9 = VAR18;
}
}

if (VAR9 == VAR13) {
VAR7 = VAR6->VAR19[VAR8].VAR20;
FUN8(VAR6);
} else if (VAR9 == VAR10) {
VAR7 = VAR4.VAR21[VAR8].VAR20;
}

return (VAR7);
}