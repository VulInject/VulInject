struct VAR1 *
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
in_addr_t	VAR5;

if (VAR4->VAR6 & VAR7) {
do {
if (VAR2->VAR8 == VAR4->VAR8)
return (VAR2);
VAR2 = VAR2->VAR9;
} while (VAR2);
return (NULL);
}

VAR5 = VAR4->VAR5.VAR10.VAR11;
do {
if (VAR2->VAR5.VAR11 == VAR5)
return (VAR2);
VAR2 = VAR2->VAR9;
} while (VAR2);

return (NULL);
}