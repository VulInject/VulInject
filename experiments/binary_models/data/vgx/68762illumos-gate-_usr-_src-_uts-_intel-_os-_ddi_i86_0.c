void
FUN1(VAR1 *VAR2, VAR3 *VAR4,
VAR3 *VAR5, size_t VAR6, uint_t VAR7)
{
VAR3 *VAR8;
uintptr_t VAR9;

VAR8 = VAR4;
VAR9 = (VAR10)VAR5;

if (VAR7 == VAR11)
for (; VAR6; VAR6--, VAR9 += 4)
*VAR8++ = FUN2(FUN3(VAR9));
else
for (; VAR6; VAR6--)
*VAR8++ = FUN2(FUN3(VAR9));
}