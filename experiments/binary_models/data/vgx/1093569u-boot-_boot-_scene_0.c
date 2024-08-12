int FUN1(struct VAR1 *VAR2, uint VAR3, int *VAR4)
{
struct VAR5 *VAR6;

VAR6 = FUN2(VAR2, VAR3, VAR7);
if (!VAR6)
return FUN3("", -VAR8);

switch (VAR6->VAR9) {
case VAR7:
case VAR10:
break;
case VAR11: {
struct VAR12 *VAR13 = (struct VAR12 *)VAR6;
ulong VAR14, VAR15;
uint VAR16;

FUN4(VAR13->VAR17, &VAR14, &VAR15, &VAR16);
if (VAR4)
*VAR4 = VAR14;
return VAR15;
}
case VAR18: {
struct VAR19 *VAR20 = (struct VAR19 *)VAR6;
struct VAR21 *VAR22 = VAR2->VAR21;

if (VAR4)
*VAR4 = 16; 
if (VAR20->VAR23)
return VAR20->VAR23;
if (VAR22->VAR24)
return FUN5(VAR22->VAR24);


return 16;
}
}

return 0;
}