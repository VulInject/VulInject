static int FUN1(struct VAR1 *VAR2,
enum power_supply_property VAR3,
union VAR4 *VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
unsigned int VAR8;
unsigned int VAR9;
bool VAR10;
int VAR11;

VAR11 = FUN3(VAR7->VAR12->VAR13, VAR14, &VAR8);
if (VAR11)
return VAR11;

VAR10 = !!(VAR8 & VAR15);

switch (VAR3) {
case VAR16:
VAR5->VAR17 = VAR10;
break;
case VAR18:
if (!VAR10) {
VAR5->VAR17 = VAR19;
break;
}
VAR5->VAR17 = FUN4(VAR8);
if (VAR5->VAR17 != VAR20)
VAR5->VAR17 = VAR19;

break;
case VAR21:
VAR11 = FUN3(VAR7->VAR12->VAR13,
VAR22, &VAR9);
if (VAR11 < 0)
return VAR11;

VAR5->VAR17 = FUN5(VAR9);
break;
case VAR23:
if (!VAR7->VAR24)
return -VAR25;

VAR11 = FUN6(VAR7->VAR24, &VAR5->VAR17, 1000);
if (VAR11 < 0)
return VAR11;

break;
default:
return -VAR26;
}

return 0;
}