static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4,
int VAR5, int VAR6, long VAR7)
{
struct VAR8 *VAR8 = FUN2(VAR2);

unsigned int VAR9 =
FUN3(VAR10[0] * 1000000 * 2,
VAR11);
unsigned int VAR12 =
FUN3(VAR10[1] * 1000000 * 2,
VAR11);
unsigned int VAR13 =
FUN3(VAR10[2] * 1000000 * 2,
VAR11);
unsigned int VAR14 =
FUN3(VAR10[3] * 1000000 * 2,
VAR11);

switch (VAR7) {
case VAR15:
if (VAR4->VAR16 != VAR17)
return -VAR18;
VAR8->VAR19[VAR4->VAR20-1] = VAR5;
return 0;
case VAR21:

if (VAR5 < 4 || VAR5 > 8000)
return -VAR18;


if (VAR5 > 1000) {
VAR8->VAR22 = VAR23;
VAR8->VAR24 = FUN3(8000, VAR5) - 1;
return 0;
}

VAR8->VAR22 = VAR25;
VAR8->VAR24 = FUN3(1000, VAR5) - 1;
return 0;
case VAR26:
if (VAR4->VAR16 != VAR17)
return -VAR18;



if (VAR5 != 0) {
VAR8->VAR27 = VAR28;
return 0;
}


if (VAR6 <= VAR9 ||
VAR6 < ((VAR12 + VAR9) / 2))
VAR8->VAR27 = VAR29;
else if (VAR6 <= VAR12 ||
VAR6 < ((VAR13 + VAR12) / 2))
VAR8->VAR27 = VAR30;
else if (VAR6 <= VAR13 ||
VAR6 < ((VAR14 + VAR13) / 2))
VAR8->VAR27 = VAR31;
else

VAR8->VAR27 = VAR28;
return 0;
default:
break;
}

return -VAR18;
}