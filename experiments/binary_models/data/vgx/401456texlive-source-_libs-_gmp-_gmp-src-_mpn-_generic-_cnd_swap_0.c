void
FUN1 (mp_limb_t VAR1, volatile VAR2 *VAR3, volatile VAR2 *VAR4,
mp_size_t VAR5)
{
volatile mp_limb_t VAR6 = - (VAR2) (VAR1 != 0);
mp_size_t VAR7;
for (VAR7 = 0; VAR7 < VAR5; VAR7++)
{
mp_limb_t VAR8, VAR9, VAR10;
VAR8 = VAR3[VAR7];
VAR9 = VAR4[VAR7];
VAR10 = (VAR8 ^ VAR9) & VAR6;
VAR3[VAR7] = VAR8 ^ VAR10;
VAR4[VAR7] = VAR9 ^ VAR10;
}
}