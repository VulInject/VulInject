void *
FUN1(VAR1 *VAR2, VAR3 *VAR4, uint_t VAR5,
const void *VAR6, uint_t VAR7)
{
VAR8		*VAR9;
int		VAR10;
void		*VAR11;
dhcpv6_option_t VAR12;
VAR8		*VAR13;
int		VAR14;

if (!VAR2->VAR15)
return (NULL);

VAR9 = (VAR8 *)VAR2->VAR16;
VAR10 = VAR7 + sizeof (VAR12);

if (VAR2->VAR17 + VAR10 > VAR2->VAR18) {
FUN2(VAR19,
""
"", VAR5,
VAR2->VAR17, VAR10, VAR2->VAR18);
return (NULL);
}


(void) memcpy(&VAR12, VAR4, sizeof (VAR12));
VAR14 = FUN3(VAR12.VAR20);
VAR13 = (VAR8 *)(VAR4 + 1) + VAR14;
VAR14 += VAR10;
VAR12.VAR20 = FUN4(VAR14);
(void) memcpy(VAR4, &VAR12, sizeof (VAR12));


if (VAR13 < VAR9 + VAR2->VAR17) {
(void) memmove(VAR13 + VAR10, VAR13,
(VAR9 + VAR2->VAR17) - VAR13);
}
VAR2->VAR17 += VAR10;


VAR11 = VAR13;
VAR12.VAR21 = FUN4(VAR5);
VAR12.VAR20 = FUN4(VAR7);
(void) memcpy(VAR13, &VAR12, sizeof (VAR12));
if (VAR7 > 0)
(void) memcpy(VAR13 + sizeof (VAR12), VAR6, VAR7);
return (VAR11);
}