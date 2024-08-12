int FUN1(int VAR1, uint VAR2, uint VAR3, int VAR4,
int VAR5)
{
struct VAR6 *VAR6;
struct VAR7 *VAR8;
struct VAR9 *VAR10;
uint VAR11;

VAR8 = calloc(1, sizeof(*VAR8));
if (VAR8 == NULL)
return -1;

VAR11 = VAR12 | VAR13 | VAR14;

switch (VAR1) {
case 0:
VAR8->VAR15 = (struct VAR16 *)VAR17;
break;
case 1:
VAR8->VAR15 = (struct VAR16 *)VAR18;
FUN2(VAR19) || FUN2(VAR20) || \
FUN2(VAR21) || FUN2(VAR22)) && \
FUN2(VAR23)

VAR11 |= VAR24;
break;
case 2:
VAR8->VAR15 = (struct VAR16 *)VAR25;

VAR11 |= VAR24;
break;
default:
VAR8->VAR15 = (struct VAR16 *)VAR17;
return 1;
}

VAR8->VAR4 = FUN3(VAR4, "");
VAR8->VAR5 = FUN3(VAR5, "");

VAR10 = &VAR8->VAR10;

VAR10->VAR26 = "";
VAR10->VAR27 = &VAR28;

VAR10->VAR29 = VAR30 | VAR31 | VAR32;
VAR10->VAR33 = VAR11 & ~VAR2;

VAR10->VAR34 = 400000;

if (VAR3 != 0)
VAR10->VAR3 = VAR3;
else {
if (VAR10->VAR33 & VAR14) {
if (VAR10->VAR33 & VAR13)
VAR10->VAR3 = 52000000;
else
VAR10->VAR3 = 26000000;
} else
VAR10->VAR3 = 20000000;
}

VAR10->VAR35 = VAR36;


if ((FUN4() == VAR37) && (FUN5() <= VAR38))
VAR10->VAR35 = 1;

VAR6 = FUN6(VAR10, VAR8);
if (VAR6 == NULL)
return -1;

return 0;
}