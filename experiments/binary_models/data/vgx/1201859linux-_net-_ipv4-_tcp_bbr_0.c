static VAR1 FUN1(struct VAR2 *VAR3, u32 VAR4)
{
struct VAR5 *VAR5 = FUN2(VAR3);


VAR4 += 3 * FUN3(VAR3);


VAR4 = (VAR4 + 1) & ~1U;


if (VAR5->VAR6 == VAR7 && VAR5->VAR8 == 0)
VAR4 += 2;

return VAR4;
}