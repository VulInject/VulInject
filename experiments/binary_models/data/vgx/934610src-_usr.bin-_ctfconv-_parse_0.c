struct VAR1 *
FUN1(struct VAR2 *VAR3, size_t VAR4, int VAR5)
{
struct VAR1 *VAR6;
struct VAR7 *VAR8;
const char *VAR9 = NULL;
size_t VAR10 = 0, VAR11 = 0;

FUN2(VAR8, &VAR3->VAR12, VAR13) {
switch (VAR8->VAR14->VAR15) {
case VAR16:
VAR9 = FUN3(VAR8);
break;
case VAR17:
VAR10 = FUN4(VAR8, VAR4);
break;
case VAR18:
VAR11 = FUN4(VAR8, VAR4);
assert(VAR11 < VAR19);
break;
default:
FUN5("", FUN6(VAR8->VAR14->VAR15));
break;
}
}

VAR6 = FUN7(++VAR20, VAR3->VAR21, VAR9, VAR11, 0, VAR10, VAR5,
VAR22);

if (VAR6->VAR23 == 0 && (VAR6->VAR24 == sizeof(void *) ||
VAR5 == VAR25 || VAR5 == VAR26 ||
VAR5 == VAR27)) {

VAR6->VAR28 &= ~VAR22;
VAR6->VAR23 = VAR29;
VAR6->VAR30 = VAR31;
}

return VAR6;
}