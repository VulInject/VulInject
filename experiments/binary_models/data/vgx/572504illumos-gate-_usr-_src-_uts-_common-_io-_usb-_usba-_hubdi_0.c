static int
FUN1(VAR1 *VAR2, uint_t VAR3, ddi_bus_config_op_t VAR4,
void *VAR5, VAR1 **VAR6)
{
VAR7	*VAR8 = FUN2(VAR2);
int	VAR9, VAR10;
long VAR11;

FUN3(VAR12, VAR8->VAR13,
"", VAR4);

if (VAR14) {
VAR3 |= VAR15;
}

if (VAR4 == VAR16) {
boolean_t VAR17;
char VAR18[80];
char *VAR19, *VAR20;

FUN4(VAR12, VAR8->VAR13,
"", VAR4);

(void) snprintf(VAR18, 80, "", (char *)VAR5);

FUN5(VAR18, &VAR19, &VAR20, NULL);
if (VAR20 && *VAR20) {
(void) FUN6(VAR20, NULL, 16, &VAR11);
} else {
return (VAR21);
}

VAR17 = FUN7(VAR8, VAR11);

if (VAR17 == 0) {
return (VAR21);
}

}
FUN8(VAR8->VAR22, &VAR10);
VAR9 = FUN9(VAR2, VAR3, VAR4, VAR5, VAR6, 0);
FUN10(VAR8->VAR22, VAR10);

return (VAR9);
}