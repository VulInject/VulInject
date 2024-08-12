struct VAR1 *FUN1(struct VAR2
*VAR3, int *VAR4,
gfp_t VAR5)
{
struct VAR1 *VAR6 = NULL;

for ( ; *VAR4 > 0; --*VAR4) {
struct VAR1 *VAR7 = FUN2(VAR3, VAR5);

if (!VAR7)
break;
else if (!VAR6)
VAR6 = VAR7;
else {
struct VAR1 *VAR8 = FUN3(VAR6->VAR9.VAR10,
struct VAR1,
VAR9);
FUN4(&VAR7->VAR9, &VAR6->VAR9);
VAR8->VAR11->VAR12.VAR13 =
FUN5(((VAR14)VAR7->VAR15.VAR16));
}
}

return VAR6;
}