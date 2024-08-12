void
FUN1(void *VAR1, bus_space_handle_t VAR2, bus_size_t VAR3, u_int32_t VAR4, bus_size_t VAR5)
{
VAR4 = FUN2(VAR4);
VAR2 += VAR3;
while (VAR5--)
*(volatile VAR6 *)VAR2 = VAR4;
}