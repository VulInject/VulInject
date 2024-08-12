static enum VAR1
FUN1(void *VAR2, const struct VAR3 *VAR3, void *VAR4)
{
struct VAR5 *VAR6;
struct VAR7 *VAR8;
struct prefix_ipv4 VAR9;

VAR8 = VAR4;
if (!VAR8)
return VAR10;

switch (VAR8->VAR11->VAR12) {
case VAR13:

return VAR10;
case VAR14:
case VAR15:
VAR9.VAR16 = VAR17;
VAR9.VAR3 = VAR8->VAR11->VAR18.VAR19;
VAR9.VAR20 = VAR21;
break;
case VAR22:
case VAR23:
case VAR24:
return VAR10;
}
VAR6 = FUN2(VAR25, (char *)VAR2);
if (VAR6 == NULL) {
if (FUN3(VAR26, VAR27))
FUN4(
"",
VAR28, (char *)VAR2);
return VAR10;
}

return (FUN5(VAR6, &VAR9) == VAR29 ? VAR10
: VAR30);
}