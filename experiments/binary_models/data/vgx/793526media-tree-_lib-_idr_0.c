int FUN1(struct VAR1 *VAR1, void *VAR2, int VAR3, int VAR4, gfp_t VAR5)
{
int VAR6, VAR7 = VAR1->VAR8;

if (VAR7 < VAR3)
VAR7 = VAR3;

VAR6 = FUN2(VAR1, VAR2, VAR7, VAR4, VAR5);
if ((VAR6 == -VAR9) && (VAR7 > VAR3))
VAR6 = FUN2(VAR1, VAR2, VAR3, VAR7, VAR5);

if (VAR6 >= 0)
VAR1->VAR8 = VAR6 + 1U;

return VAR6;
}