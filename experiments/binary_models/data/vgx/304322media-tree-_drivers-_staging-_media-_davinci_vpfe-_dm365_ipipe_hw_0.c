int
FUN1(void VAR1 *VAR2, struct VAR3 *VAR4,
int VAR5, unsigned int VAR6)
{
struct VAR7 *VAR8;
struct VAR9 *VAR10;
struct VAR11 *VAR12;
unsigned int VAR13;
unsigned int VAR14;

if (VAR5 != VAR15 && VAR5 != VAR16)
return -VAR17;

VAR10 = &VAR4->VAR18[VAR5];
VAR8 = &VAR4->VAR19[VAR5];
VAR12 = &VAR4->VAR12;

if (VAR5 == VAR15)
VAR13 = VAR20;
else
VAR13 = VAR21;


if (VAR12->VAR22 == VAR23) {
if (VAR12->VAR24) {

VAR14 = VAR6 + VAR10->VAR25;
FUN2(VAR2, VAR14, VAR13);
} else {
VAR14 = VAR6 + VAR10->VAR26;
FUN3(VAR2, VAR14, VAR13);
}
} else {
if (VAR8->VAR27 && VAR8->VAR28) {

VAR14 = VAR6 + VAR10->VAR29 +
VAR10->VAR25 +
VAR10->VAR30 +
VAR10->VAR31;
if (VAR5 == VAR16)
VAR14 +=
VAR4->VAR18[VAR15].VAR30 +
VAR4->VAR18[VAR15].VAR31;

FUN2(VAR2, VAR14, VAR13);
}
VAR14 = VAR6 + VAR10->VAR26 + VAR10->VAR30;
if (VAR5 == VAR16)
VAR14 += VAR4->VAR18[VAR15].VAR30 +
VAR4->VAR18[VAR15].VAR31;

FUN3(VAR2, VAR14, VAR13);
}

FUN4(VAR2, VAR4->VAR32[VAR5], VAR13);

return 0;
}