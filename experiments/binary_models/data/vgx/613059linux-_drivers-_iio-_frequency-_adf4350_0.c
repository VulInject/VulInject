static VAR1 FUN1(struct VAR2 *VAR3,
uintptr_t private,
const struct VAR4 *VAR5,
const char *VAR6, size_t VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR3);
unsigned long long VAR10;
unsigned long VAR11;
int VAR12;

VAR12 = FUN3(VAR6, 10, &VAR10);
if (VAR12)
return VAR12;

FUN4(&VAR9->VAR13);
switch ((VAR14)private) {
case VAR15:
VAR12 = FUN5(VAR9, VAR10);
break;
case VAR16:
if (VAR10 > VAR17) {
VAR12 = -VAR18;
break;
}

if (VAR9->VAR19) {
VAR11 = FUN6(VAR9->VAR19, VAR10);
if (VAR11 != VAR10) {
VAR12 = -VAR18;
break;
}
VAR12 = FUN7(VAR9->VAR19, VAR11);
if (VAR12 < 0)
break;
}
VAR9->VAR20 = VAR10;
VAR12 = FUN5(VAR9, VAR9->VAR21);
break;
case VAR22:
if (VAR10 == 0)
VAR12 = -VAR18;
else
VAR9->VAR23 = VAR10;
break;
case VAR24:
if (VAR10)
VAR9->VAR25[VAR26] |= VAR27;
else
VAR9->VAR25[VAR26] &= ~VAR27;

FUN8(VAR9);
break;
default:
VAR12 = -VAR18;
}
FUN9(&VAR9->VAR13);

return VAR12 ? VAR12 : VAR7;
}