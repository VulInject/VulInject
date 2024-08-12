void FUN1(VAR1 *VAR2, bool VAR3)
{
if (VAR3) {
VAR2->VAR4.VAR5 ^=
(((VAR2->VAR4.VAR6 >> VAR7) & 1) << VAR8);

uint32_t VAR9 = (255 & VAR2->VAR4.VAR6);
VAR2->VAR4.VAR5 ^= (VAR9 << VAR10);

VAR2->VAR4.VAR6 = 0;
} else {
VAR2->VAR4.VAR6 |= (1 << 8);
}
}