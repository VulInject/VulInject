static int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4,
bool VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
struct cpumask VAR8;
int VAR9;

if (!FUN3(&VAR8, VAR4, VAR10))
return -VAR11;

VAR9 = FUN4(VAR2, &VAR8);
if (VAR9 < 0)
return VAR9;

VAR7->VAR12.VAR13 = FUN5(VAR2->VAR14, VAR9);
VAR7->VAR15 = ((VAR16) VAR7->VAR12.VAR13) | VAR7->VAR12.VAR17;


FUN6(VAR7->VAR15, VAR7->VAR18 + VAR19);

FUN7(VAR2, &VAR8);

return VAR20;
}