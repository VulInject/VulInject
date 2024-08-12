static void
FUN1(VAR1 *VAR2, size_t VAR3)
{
for (; VAR3 > 1; VAR3--, VAR2++) {
VAR1 *VAR4 = &VAR2[FUN2(VAR3)];
uint32_t VAR5 = *VAR2;
*VAR2 = *VAR4;
*VAR4 = VAR5;
}
}