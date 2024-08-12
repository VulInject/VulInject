VAR1 *
FUN1(const void *VAR2, size_t VAR3,
const VAR1 *VAR4, uint16_t VAR5, VAR6 *VAR7)
{
const VAR8 *VAR9;
dhcpv6_option_t VAR10;
uint_t VAR11;

VAR5 = FUN2(VAR5);
VAR9 = VAR2;
while (VAR3 >= sizeof (VAR1)) {
(void) memcpy(&VAR10, VAR9, sizeof (VAR10));
VAR11 = FUN3(VAR10.VAR12) + sizeof (VAR10);
if (VAR11 > VAR3)
break;
if (VAR10.VAR13 != VAR5 ||
(VAR4 != NULL && VAR9 <= (const VAR8 *)VAR4)) {
VAR9 += VAR11;
VAR3 -= VAR11;
continue;
}
if (VAR7 != NULL)
*VAR7 = VAR11;

return ((VAR1 *)VAR9);
}
return (NULL);
}