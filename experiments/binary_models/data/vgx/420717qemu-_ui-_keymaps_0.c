int FUN1(VAR1 *VAR2, int VAR3,
VAR4 *VAR5, bool VAR6)
{
static const uint32_t VAR7 =
VAR8 | VAR9 | VAR10;
uint32_t VAR11, VAR12;
struct VAR13 *VAR13;

if (VAR3 == VAR14) {
VAR3 = VAR15;
}

VAR13 = FUN2(VAR2->VAR16, FUN3(VAR3));
if (!VAR13) {
FUN4(VAR3);
FUN5("", VAR3);
return 0;
}

if (VAR13->VAR17 == 1) {
return VAR13->VAR18[0];
}


if (VAR6) {

VAR11 = 0;
if (VAR5 && FUN6(VAR5, VAR19)) {
VAR11 |= VAR8;
}
if (VAR5 && FUN6(VAR5, VAR20)) {
VAR11 |= VAR9;
}
if (VAR5 && FUN6(VAR5, VAR21)) {
VAR11 |= VAR10;
}

for (VAR12 = 0; VAR12 < VAR13->VAR17; VAR12++) {
if ((VAR13->VAR18[VAR12] & VAR7) == VAR11) {
return VAR13->VAR18[VAR12];
}
}
} else {

for (VAR12 = 0; VAR12 < VAR13->VAR17; VAR12++) {
QKeyCode VAR22 = VAR23
(VAR13->VAR18[VAR12]);
if (VAR5 && FUN7(VAR5, VAR22)) {
return VAR13->VAR18[VAR12];
}
}
}
return VAR13->VAR18[0];
}