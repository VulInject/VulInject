static struct VAR1 *FUN1(struct VAR2 *VAR3, u8 VAR4)
{
int		VAR5;

if (!FUN2((VAR3->VAR6.VAR7 == VAR8 ?
VAR3->VAR9 : VAR3->VAR10)))
return NULL;
if ((VAR4 & ~VAR11) == 0)
return &VAR3->VAR12[0];
for (VAR5 = 1; VAR5 < VAR13; VAR5++) {
struct VAR1	*VAR12 = &VAR3->VAR12[VAR5];

if (!VAR12->VAR14)
continue;
if (VAR12->VAR14->VAR15 == VAR4)
return VAR12;
}
return NULL;
}