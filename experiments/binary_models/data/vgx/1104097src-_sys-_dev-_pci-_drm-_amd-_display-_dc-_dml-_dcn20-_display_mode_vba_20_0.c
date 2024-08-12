static void FUN1(
struct VAR1 *VAR2,
double VAR3,
double VAR4,
unsigned int VAR5,
bool VAR6,
double VAR7,
unsigned int VAR8,
enum source_format_class VAR9,
unsigned int VAR10,
double VAR11,
double VAR12,
double VAR13,
double VAR14,
unsigned int VAR15,
unsigned int VAR16,
bool VAR17,
unsigned int VAR18,
unsigned int VAR19,
double VAR20,
double *VAR21,
double *VAR22,
double *VAR23,
bool *VAR24)
{
double VAR25 = 0.0;

if (VAR9 == VAR26 || VAR9 == VAR27) {
*VAR21 = 0.0;
*VAR22 = 0.0;
*VAR23 = VAR20;
*VAR24 = true;
} else {
double VAR28;
double VAR29;

if (VAR6 == true) {
VAR2->VAR30.VAR31[0] = VAR7
* VAR10 / VAR8;
VAR28 =
FUN2(
VAR13
+ VAR14
/ VAR2->VAR30.VAR31[0],
FUN2(
VAR3
+ VAR4
* (VAR5
- 1),
VAR11 / 4.0));
} else {
VAR28 = 0;
}

*VAR21 = FUN3(
4.0 * (VAR28 / VAR11 + 0.125),
1) / 4.0;

if ((VAR6 || VAR17)) {
VAR2->VAR30.VAR31[0] = VAR7
* VAR10 / VAR8;
VAR29 = FUN2(
(VAR15 + VAR16)
/ VAR2->VAR30.VAR31[0],
FUN2(VAR4, VAR11 / 4.0));
} else {
VAR29 = 0;
}

*VAR22 = FUN3(
4.0 * (VAR29 / VAR11 + 0.125),
1) / 4.0;

if (VAR6 == true) {
*VAR23 =
FUN2(
VAR14
/ (*VAR21
* VAR11),
(VAR15 + VAR16)
/ (VAR29
* VAR11));
} else if (VAR15 + VAR16 > 0) {
*VAR23 = (VAR15 + VAR16)
/ (VAR29 * VAR11);
} else {
*VAR23 = 0;
}

if (VAR6 && !VAR17)
VAR25 = VAR18 * VAR11 / VAR12;
else if (!VAR6 && VAR17)
VAR25 = VAR19 * VAR11 / VAR12;
else
VAR25 = FUN4(VAR18, VAR19) * VAR11
/ VAR12;

if (*VAR21 >= 8
|| *VAR22 >= 16
|| VAR28
+ 2 * VAR29
> VAR25)
*VAR24 = false;
else
*VAR24 = true;
}
}