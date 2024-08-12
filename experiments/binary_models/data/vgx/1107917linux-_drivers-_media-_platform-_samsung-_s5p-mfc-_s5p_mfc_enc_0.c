static int FUN1(struct VAR1 *VAR2,
unsigned int *VAR3, unsigned int *VAR4,
unsigned int VAR5[], struct VAR6 *VAR7[])
{
struct VAR8 *VAR9 = FUN2(VAR2->VAR10);
struct VAR11 *VAR12 = VAR9->VAR12;

if (VAR2->VAR13 == VAR14) {
if (VAR9->VAR15 != VAR16) {
FUN3("", VAR9->VAR15);
return -VAR17;
}

if (VAR9->VAR18)
*VAR4 = VAR9->VAR18->VAR19;
else
*VAR4 = VAR20;
if (*VAR3 < 1)
*VAR3 = 1;
if (*VAR3 > VAR21)
*VAR3 = VAR21;
VAR5[0] = VAR9->VAR22;
VAR7[0] = VAR9->VAR12->VAR23[VAR24];
} else if (VAR2->VAR13 == VAR25) {
if (VAR9->VAR26)
*VAR4 = VAR9->VAR26->VAR19;
else
*VAR4 = VAR27;

if (*VAR3 < 1)
*VAR3 = 1;
if (*VAR3 > VAR21)
*VAR3 = VAR21;

VAR5[0] = VAR9->VAR28;
VAR5[1] = VAR9->VAR29;

if (FUN4(VAR12)) {
VAR7[0] = VAR9->VAR12->VAR23[VAR24];
VAR7[1] = VAR9->VAR12->VAR23[VAR24];
} else {
VAR7[0] = VAR9->VAR12->VAR23[VAR30];
VAR7[1] = VAR9->VAR12->VAR23[VAR30];
}
} else {
FUN3("", VAR2->VAR13);
return -VAR17;
}
return 0;
}