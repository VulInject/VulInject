void FUN1(struct VAR1 *VAR2)
{
enum dss_rotation VAR3;
bool VAR4 = VAR2->VAR5;
struct VAR6 *VAR7 = &VAR2->VAR7;
struct VAR8 *VAR9 = &VAR2->VAR9;
int *VAR10 = &VAR2->VAR10;
int VAR11 = 1, VAR12 = 2, VAR13 = 2;
int VAR14 = 0, VAR15 = 0, VAR16 = 0, VAR17 = 0;

VAR3 = FUN2(VAR2);

if (VAR18 == VAR9->VAR19 ||
VAR20 == VAR9->VAR19) {
if (FUN3(VAR2)) {

VAR12 = 4;
VAR11 = 2;
} else {
VAR12 = 2;	
}
} else if (VAR21 == VAR9->VAR19) {
VAR12 = 4;
} else if (VAR22 == VAR9->VAR19) {
VAR12 = 3;
}
VAR2->VAR12 = VAR12;
VAR2->VAR11 = VAR11;

if (FUN3(VAR2)) {
VAR17 = VAR23;
VAR15 = (VAR9->VAR24 - VAR7->VAR24) - VAR7->VAR25;
VAR16 = (VAR9->VAR26 - VAR7->VAR26) - VAR7->VAR27;
} else {
VAR17 = VAR9->VAR26;
}
VAR2->VAR17 = VAR17;
switch (VAR3) {
case VAR28:
VAR14 = VAR2->VAR29[0].VAR30 *
VAR2->VAR29[0].VAR31;
VAR13 = VAR12 / VAR11;
if (!VAR4) {
*VAR10 = VAR14 + VAR17 *
VAR13 * VAR16 + VAR7->VAR25 * VAR13;
} else {
*VAR10 = VAR14 + VAR17 * VAR13 *
VAR16 + VAR7->VAR25 * VAR13 + (VAR17 *
((VAR7->VAR26 / (VAR11)) - 1) * VAR12);
}
break;
case VAR32:
VAR14 = ((VAR23 * VAR2->VAR29[0].VAR30 *
VAR2->VAR29[0].VAR31) +
(VAR2->VAR29[0].VAR33 *
VAR2->VAR29[0].VAR31));
if (!VAR4) {
*VAR10 = VAR14 + (VAR17 * VAR12 * VAR15) +
(VAR16 / VAR11) * VAR12;

} else {
*VAR10 = VAR14 + (VAR17 * VAR12 * VAR15) +
(VAR16 / VAR11) * VAR12 + (VAR17 *
(VAR7->VAR24 - 1) * VAR12);
}
break;
case VAR34:
VAR14 = VAR23 * VAR2->VAR29[0].VAR33 *
VAR2->VAR29[0].VAR31;
VAR13 = VAR12 / VAR11;
if (!VAR4) {
*VAR10 = VAR14 + VAR17 *
VAR13 * VAR7->VAR27 + VAR15 * VAR12;
} else {
*VAR10 = VAR14 + VAR17 *
VAR13 * VAR7->VAR27 + VAR15 * VAR12 +
(VAR17 * ((VAR7->VAR26 / VAR11) - 1) *
VAR12);
}
break;
case VAR35:
if (!VAR4) {
*VAR10 = (VAR17 * VAR12) *
VAR7->VAR25 + (VAR7->VAR27 / VAR11) * VAR12;
} else {
*VAR10 = (VAR17 * VAR12) *
VAR7->VAR25 + (VAR7->VAR27 / VAR11) * VAR12 +
(VAR17 * (VAR7->VAR24 - 1) * VAR12);
}
break;
default:
*VAR10 = (VAR17 * VAR12 * VAR7->VAR25) /
VAR11 + (VAR7->VAR27 * VAR12) / VAR11 +
((VAR7->VAR26 / VAR11) - 1) * VAR12;
break;
}
}