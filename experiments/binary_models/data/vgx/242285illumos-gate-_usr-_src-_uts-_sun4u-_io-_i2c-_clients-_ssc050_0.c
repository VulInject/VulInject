static int
FUN1(VAR1 *VAR2, ddi_info_cmd_t VAR3, void *VAR4, void **VAR5)
{
dev_t	VAR6;
int	VAR7;

if (VAR3 == VAR8) {
VAR6 = (VAR9)VAR4;
VAR7 = FUN2(FUN3(VAR6));
*VAR5 = (void *)(VAR10)VAR7;
return (VAR11);
}
return (VAR12);
}