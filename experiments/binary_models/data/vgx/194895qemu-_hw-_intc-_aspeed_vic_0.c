static void FUN1(void *VAR1, int VAR2, int VAR3)
{
uint64_t VAR4;
bool VAR5;
VAR6 *VAR7 = (VAR6 *)VAR1;

if (VAR2 > VAR8) {
FUN2(VAR9, "",
VAR10, VAR2);
return;
}

FUN3(VAR2, VAR3);

VAR4 = FUN4(VAR2);
if (VAR7->VAR11 & VAR4) {

if (VAR7->VAR12 & VAR4) {

VAR5 = VAR3;
} else {

VAR5 = !VAR3;
}
VAR7->VAR13 = FUN5(VAR7->VAR13, VAR2, 1, VAR5);
} else {
uint64_t VAR14 = VAR7->VAR3 & VAR4;


if (VAR7->VAR15 & VAR4) {
VAR5 = (!!VAR14) != (!!VAR3);
} else {
if (VAR7->VAR12 & VAR4) {

VAR5 = !VAR14 && VAR3;
} else {

VAR5 = VAR14 && !VAR3;
}
}
if (VAR5) {
VAR7->VAR13 = FUN5(VAR7->VAR13, VAR2, 1, VAR5);
}
}
VAR7->VAR3 = FUN5(VAR7->VAR3, VAR2, 1, VAR3);
FUN6(VAR7);
}