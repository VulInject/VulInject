void
FUN1(void *VAR1, bus_space_handle_t VAR2,
bus_size_t VAR3, VAR4 *VAR5, bus_size_t VAR6)
{
while (VAR6--) {
*VAR5++ = FUN2(VAR2, VAR3);
VAR3 += 4;
}
}