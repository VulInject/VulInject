FUN1 (struct VAR1 *VAR2, int VAR3)
{
int VAR4 = (FUN2 (VAR2->VAR5 + VAR6) + 6) % 7;

VAR2->VAR7 = VAR3 * 7 + (VAR2->VAR8 + 6) % 7 - VAR4;
if (VAR2->VAR7 < 0) {
VAR2->VAR8 = (VAR4 + 1) % 7;
VAR2->VAR7 = 0;
}
}