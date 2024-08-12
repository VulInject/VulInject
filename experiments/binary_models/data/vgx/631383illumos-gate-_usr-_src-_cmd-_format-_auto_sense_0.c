static struct VAR1 *
FUN1(ushort_t VAR2)
{
struct	VAR3	*VAR4;

assert(VAR2 == VAR5 ||
VAR2 == VAR6 ||
VAR2 == VAR7);

VAR4 = VAR8;

while (VAR4 != NULL) {
if (VAR4->VAR1->VAR9 == VAR2) {
return (VAR4->VAR1);
}
VAR4 = VAR4->VAR10;
}

FUN2("");

return (NULL);
}