int FUN1(const VAR1 *VAR2, slimb_t VAR3, bf_rnd_t VAR4, slimb_t VAR5)
{
BOOL VAR6;
slimb_t VAR7, VAR8;
limb_t VAR9;

if (VAR2->VAR10 == VAR11 || VAR2->VAR10 == VAR12)
return VAR13;
if (VAR4 == VAR14) {
return (VAR5 >= (VAR3 + 1));
}
if (VAR2->VAR10 == VAR15)
return VAR13;
VAR6 = (VAR4 == VAR16 || VAR4 == VAR17);
if (VAR5 < (VAR3 + 2))
return VAR13;
VAR7 = VAR2->VAR18 * VAR19 - 1 - VAR3;
VAR8 = VAR5 - VAR3;

VAR9 = FUN2(VAR2->VAR20, VAR2->VAR18, VAR7);
VAR7--;
VAR8--;
VAR9 ^= VAR6;

while (VAR8 != 0) {
if (FUN2(VAR2->VAR20, VAR2->VAR18, VAR7) != VAR9)
return VAR21;
VAR7--;
VAR8--;
}
return VAR13;
}