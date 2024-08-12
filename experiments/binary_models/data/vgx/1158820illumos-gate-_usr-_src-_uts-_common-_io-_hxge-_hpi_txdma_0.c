VAR1
FUN1(hpi_handle_t VAR2, uint16_t VAR3)
{
uint32_t	VAR4;
int		VAR5;


VAR4 = 0;
for (VAR5 = 0; VAR5 < VAR3; VAR5++) {
FUN2(VAR2, VAR4, 0);
VAR4 += (VAR5 * (sizeof (VAR6)));
}

return (VAR7);
}