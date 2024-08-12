int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
if (VAR5) {
struct VAR6 *VAR6 = VAR2->VAR7.VAR8;

bcopy(VAR4, &VAR6->VAR9, sizeof(*VAR4));


if (VAR2 == VAR10)
FUN2(&VAR6->VAR9);
}
if (VAR11)
return (VAR12);
return (0);
}