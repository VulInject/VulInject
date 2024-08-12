static void
FUN1(void *VAR1, enum bfa_ioc_event VAR2)
{
struct VAR3 *VAR4;
VAR4 = (struct VAR3 *) VAR1;

switch (VAR2) {
case VAR5:
case VAR6:
if (VAR4->VAR7) {
VAR4->VAR8 = VAR9;
VAR4->VAR7  = false;
if (VAR4->VAR10.VAR11) {
VAR4->VAR10.FUN2(
VAR4->VAR10.VAR12,
VAR9);
}
}
if (VAR4->VAR13) {
VAR4->VAR14 = VAR9;
VAR4->VAR13  = false;
if (VAR4->VAR10.VAR15) {
VAR4->VAR10.FUN3(
VAR4->VAR10.VAR16,
VAR9);
}
}
if (VAR4->VAR17) {
VAR4->VAR18 = VAR9;
VAR4->VAR17  = false;
if (VAR4->VAR10.VAR19) {
VAR4->VAR10.FUN4(
VAR4->VAR10.VAR20,
VAR9);
}
}
break;

default:
break;
}
}