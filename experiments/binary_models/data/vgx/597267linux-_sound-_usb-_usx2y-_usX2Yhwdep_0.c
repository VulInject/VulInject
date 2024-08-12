static VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR4, VAR5 *VAR6)
{
__poll_t	VAR7 = 0;
struct VAR8	*VAR9 = VAR3->VAR10;
struct VAR11 *VAR12 = VAR9->VAR11;

if (VAR9->VAR13 & VAR14)
return VAR15;

FUN2(VAR4, &VAR9->VAR16, VAR6);

if (VAR12 && VAR12->VAR17 != VAR12->VAR18)
VAR7 |= VAR19;

return VAR7;
}