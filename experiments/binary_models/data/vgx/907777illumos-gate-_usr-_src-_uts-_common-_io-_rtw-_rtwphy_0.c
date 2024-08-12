static int
FUN1(struct VAR1 *VAR2, enum rtw_pwrstate VAR3)
{
struct VAR4 *VAR5 = (struct VAR4 *)VAR2;
struct VAR6 *VAR7 = &VAR5->VAR8;
uint32_t VAR9;
VAR9 = VAR10;
switch (VAR3) {
case VAR11:
VAR9 |= VAR12;
break;
case VAR13:
VAR9 |= VAR14;
break;
case VAR15:
VAR9 |= VAR16;
break;
}

if (VAR5->VAR17)
VAR9 |= VAR18;

return (FUN2(VAR7, VAR19, VAR20,
VAR9));
}