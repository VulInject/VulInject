static VAR1 FUN1(struct VAR2 *VAR3)
{
const struct VAR4 *VAR5 = &VAR3->VAR6[VAR7];
int VAR8, VAR9;

switch (VAR5->VAR10) {
case VAR11:
case VAR12:
case VAR13:
case VAR14:
VAR8 = 0;
break;
case VAR15:
case VAR16:
case VAR17:
case VAR18:
VAR8 = 1;
break;
case VAR19:
case VAR20:
case VAR21:
case VAR22:
VAR8 = 2;
break;
case VAR23:
case VAR24:
VAR8 = 3;
break;
default:
FUN2(1, "",
VAR5->VAR10);
return 0;
}

if (!(VAR3->VAR25 & VAR26) &&
!(VAR3->VAR25 & VAR27)) {

return VAR28;
}


VAR9 = VAR3->VAR29 ? 0 : !!(VAR3->VAR25 & VAR26);

return VAR30[VAR8][VAR9][VAR3->VAR31];
}