static int
FUN1(VAR1 *VAR2, VAR3 *VAR4, topo_version_t VAR5,
VAR6 *VAR7, VAR6 **VAR8)
{
di_node_t VAR9;
uint8_t VAR10;
char *VAR11 = NULL;
uint32_t VAR12;
uint_t VAR13;

if (VAR5 > VAR14)
return (FUN2(VAR2, VAR15));

if (FUN3(VAR7, VAR16, &VAR10) != 0 ||
VAR10 > VAR17 ||
FUN4(VAR7, VAR18, &VAR11) != 0)
return (FUN2(VAR2, VAR19));

if (VAR11 == NULL)
return (FUN2(VAR2, VAR19));

if ((VAR9 = FUN5(VAR11, VAR20)) == VAR21) {
if (VAR22 != VAR23)
return (FUN2(VAR2, VAR24));
VAR12 = VAR25;
} else {
uint_t VAR26 = FUN6(VAR9);
VAR13 = FUN7(VAR9);
if (VAR26 || (VAR13 & (VAR27 | VAR28 |
VAR29 | VAR30)))
VAR12 = VAR25;
else if (VAR13 & VAR31)
VAR12 = VAR32;
else
VAR12 = VAR33;
FUN8(VAR9);
}

if (FUN9(VAR2, VAR8, VAR34) != 0)
return (FUN2(VAR2, VAR35));
if (FUN10(*VAR8, VAR36,
VAR12) != 0) {
FUN11(*VAR8);
return (FUN2(VAR2, VAR35));
}

return (0);
}