static void
FUN1(VAR1 *VAR2, VAR3 *VAR4,
VAR3 *VAR5, size_t VAR6, uint_t VAR7)
{
if (VAR7 == VAR8)
for (; VAR6; VAR6--)
*VAR4++ = FUN2(VAR2, VAR5++);
else
for (; VAR6; VAR6--)
*VAR4++ = FUN2(VAR2, VAR5);
}