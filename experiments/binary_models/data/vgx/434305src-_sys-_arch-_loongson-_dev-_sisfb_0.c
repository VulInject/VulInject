int
FUN1(void *VAR1, u_long VAR2, caddr_t VAR3, int VAR4, struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = (struct VAR7 *)VAR1;
struct VAR9 *VAR10 = VAR8->VAR11;
struct VAR12 *VAR13 = &VAR10->VAR13;
struct VAR14 *VAR15;
struct VAR16 *VAR17;
int VAR18;

switch (VAR2) {
case VAR19:
*(VAR20 *)VAR3 = VAR21;
break;
case VAR22:
VAR17 = (struct VAR16 *)VAR3;
VAR17->VAR23 = VAR13->VAR24;
VAR17->VAR25 = VAR13->VAR26;
VAR17->VAR27 = VAR13->VAR28;
VAR17->VAR29 = VAR13->VAR30;
VAR17->VAR31 = 0;
VAR17->VAR32 = 256;
break;
case VAR33:
*(VAR20 *)VAR3 = VAR13->VAR30;
break;
case VAR34:
VAR15 = (struct VAR14 *)VAR3;
VAR18 = FUN2(VAR10->VAR35, VAR15);
if (VAR18 != 0)
return VAR18;
break;
case VAR36:
VAR15 = (struct VAR14 *)VAR3;
VAR18 = FUN3(VAR10->VAR35, VAR15);
if (VAR18 != 0)
return VAR18;
if (VAR13->VAR28 == 8)
FUN4(VAR10, VAR15->VAR37, VAR15->VAR38);
break;
default:
return -1;
}

return 0;
}