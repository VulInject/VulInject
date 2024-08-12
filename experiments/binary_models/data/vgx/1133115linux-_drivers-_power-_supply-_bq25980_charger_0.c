static int FUN1(struct VAR1 *VAR2)
{
int VAR3;
int VAR4, VAR5;
int VAR6;

VAR3 = FUN2(VAR2->VAR7, VAR8, &VAR5);
if (VAR3)
return VAR3;

VAR3 = FUN2(VAR2->VAR7, VAR9, &VAR4);
if (VAR3)
return VAR3;

VAR6 = (VAR5 << 8) | VAR4;

if (VAR5 & VAR10)
return ((VAR6 ^ 0xffff) + 1) * VAR11;

return VAR6 * VAR11;
}