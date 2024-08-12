static inline struct VAR1 *
FUN1(struct VAR2 *VAR3, struct VAR1 *VAR4)
{
return (struct VAR1 *)((char *)VAR4 +
FUN2(VAR3, VAR4->VAR5));
}