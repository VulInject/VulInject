static bool FUN1(struct VAR1 *VAR2,
uint32_t VAR3,
int *VAR4,
struct VAR5 *VAR6,
VAR7 *VAR8,
struct VAR9 *VAR10)
{
struct VAR11 *VAR12 = FUN2(VAR2->VAR2);
struct VAR11 *VAR12 = VAR2->VAR12;


if ((VAR12->VAR13 == 0x791e) &&
(VAR12->VAR14 == 0x1043) &&
(VAR12->VAR15 == 0x826d)) {
if ((*VAR4 == VAR16) &&
(VAR3 == VAR17))
*VAR4 = VAR18;
}


if ((VAR12->VAR13 == 0x7941) &&
(VAR12->VAR14 == 0x1849) &&
(VAR12->VAR15 == 0x7941)) {
if ((*VAR4 == VAR16) &&
(VAR3 == VAR17))
*VAR4 = VAR18;
}


if ((VAR12->VAR13 == 0x796e) &&
(VAR12->VAR14 == 0x1462) &&
(VAR12->VAR15 == 0x7302)) {
if ((VAR3 == VAR19) ||
(VAR3 == VAR17))
return false;
}


if ((VAR12->VAR13 == 0x7941) &&
(VAR12->VAR14 == 0x147b) &&
(VAR12->VAR15 == 0x2412)) {
if (*VAR4 == VAR20)
return false;
}


if ((VAR12->VAR13 == 0x5653) &&
(VAR12->VAR14 == 0x1462) &&
(VAR12->VAR15 == 0x0291)) {
if (*VAR4 == VAR21) {
VAR6->VAR22 = false;
*VAR8 = 53;
}
}


if ((VAR12->VAR13 == 0x7146) &&
(VAR12->VAR14 == 0x17af) &&
(VAR12->VAR15 == 0x2058)) {
if (VAR3 == VAR23)
return false;
}


if ((VAR12->VAR13 == 0x7142) &&
(VAR12->VAR14 == 0x1458) &&
(VAR12->VAR15 == 0x2134)) {
if (VAR3 == VAR23)
return false;
}



if ((VAR12->VAR13 == 0x71C5) &&
(VAR12->VAR14 == 0x106b) &&
(VAR12->VAR15 == 0x0080)) {
if ((VAR3 == VAR24) ||
(VAR3 == VAR19))
return false;
if (VAR3 == VAR25)
*VAR8 = 0x90;
}


if ((VAR3 == VAR26) &&
(*VAR4 == VAR20)) {
*VAR4 = VAR27;
*VAR8 = VAR28;
}


if ((VAR12->VAR13 == 0x9598) &&
(VAR12->VAR14 == 0x1043) &&
(VAR12->VAR15 == 0x01da)) {
if (*VAR4 == VAR16) {
*VAR4 = VAR20;
}
}


if ((VAR12->VAR13 == 0x9598) &&
(VAR12->VAR14 == 0x1043) &&
(VAR12->VAR15 == 0x01e4)) {
if (*VAR4 == VAR16) {
*VAR4 = VAR20;
}
}


if ((VAR12->VAR13 == 0x95C5) &&
(VAR12->VAR14 == 0x1043) &&
(VAR12->VAR15 == 0x01e2)) {
if (*VAR4 == VAR16) {
*VAR4 = VAR20;
}
}


if (*VAR4 == VAR16) {
if (VAR3 & (VAR29)) {
*VAR4 = VAR30;
*VAR8 = 0;
}
}


if (((VAR12->VAR13 == 0x95c4) || (VAR12->VAR13 == 0x9591)) &&
(VAR12->VAR14 == 0x1025) &&
(VAR12->VAR15 == 0x013c)) {
if ((*VAR4 == VAR20) &&
(VAR3 == VAR23)) {

*VAR4 = VAR18;
return false;
}
}


if ((VAR12->VAR13 == 0x9498) &&
(VAR12->VAR14 == 0x1682) &&
(VAR12->VAR15 == 0x2452) &&
(VAR6->VAR22 == false) &&
!(VAR3 & (VAR31 | VAR32))) {
struct VAR33 *VAR34 = VAR2->VAR35;
*VAR6 = FUN3(VAR34, 0x93);
}


if (((VAR12->VAR13 == 0x9802) ||
(VAR12->VAR13 == 0x9805) ||
(VAR12->VAR13 == 0x9806)) &&
(VAR12->VAR14 == 0x1734) &&
(VAR12->VAR15 == 0x11bd)) {
if (*VAR4 == VAR30) {
*VAR4 = VAR20;
*VAR8 = 0x3103;
} else if (*VAR4 == VAR18) {
*VAR4 = VAR20;
}
}

return true;
}