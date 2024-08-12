int FUN1(struct VAR1 *VAR2, enum charlcd_fontsize VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR6;

if (VAR3 == VAR7)
VAR5->VAR8 |= VAR9;
else
VAR5->VAR8 &= ~VAR9;

FUN2(VAR5);
return 0;
}