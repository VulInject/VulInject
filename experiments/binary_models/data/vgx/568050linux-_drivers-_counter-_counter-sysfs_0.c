static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5, char *VAR6)
{
const struct VAR7 *const VAR8 = FUN2(VAR5);
struct VAR9 *const VAR10 = FUN3(VAR3);
const struct VAR11 *const VAR12 = VAR8->VAR13.VAR14;
int VAR15;
u32 VAR16 = 0;

switch (VAR8->VAR17) {
case VAR18:
VAR15 = VAR8->VAR13.FUN4(VAR10, &VAR16);
break;
case VAR19:
VAR15 = VAR8->VAR13.FUN5(VAR10, VAR8->VAR20, &VAR16);
break;
case VAR21:
if (VAR8->VAR13.VAR22 == VAR23)
VAR15 = VAR8->VAR13.FUN6(VAR10, VAR8->VAR20,
VAR8->VAR13.VAR14, &VAR16);
else
VAR15 = VAR8->VAR13.FUN7(VAR10, VAR8->VAR20, &VAR16);
break;
default:
return -VAR24;
}
if (VAR15 < 0)
return VAR15;

switch (VAR8->VAR13.VAR22) {
case VAR25:
return FUN8(VAR6, "", VAR26[VAR16]);
case VAR27:
return FUN8(VAR6, "", VAR28[VAR16]);
case VAR23:
return FUN8(VAR6, "", VAR29[VAR16]);
case VAR30:
return FUN8(VAR6, "", VAR12->VAR31[VAR16]);
case VAR32:
return FUN8(VAR6, "", VAR33[VAR16]);
case VAR34:
return FUN8(VAR6, "", VAR35[VAR16]);
case VAR36:
return FUN8(VAR6, "", VAR37[VAR16]);
default:
return FUN8(VAR6, "", (unsigned int)VAR16);
}
}