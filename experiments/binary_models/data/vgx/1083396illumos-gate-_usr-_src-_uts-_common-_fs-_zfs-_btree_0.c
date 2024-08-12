static void
FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
size_t VAR5 = VAR2->VAR6;
if (FUN2(VAR4)) {
VAR7 *VAR8 = (VAR7 *)VAR4;
for (uint32_t VAR9 = VAR4->VAR10 + 1; VAR9 <= VAR11;
VAR9++) {
VAR8->VAR12[VAR9] =
(VAR3 *)VAR13;
}
(void) memset(VAR8->VAR14 + VAR4->VAR10 * VAR5, 0x0f,
(VAR11 - VAR4->VAR10) * VAR5);
} else {
VAR15 *VAR16 = (VAR15 *)VAR4;
(void) memset(VAR16->VAR17, 0x0f, VAR4->VAR18 * VAR5);
(void) memset(VAR16->VAR17 +
(VAR4->VAR18 + VAR4->VAR10) * VAR5, 0x0f,
VAR19 -
(VAR4->VAR18 + VAR4->VAR10) * VAR5);
}
}