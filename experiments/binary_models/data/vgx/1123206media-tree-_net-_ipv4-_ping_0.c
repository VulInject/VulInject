static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR1);
return FUN3(VAR1, VAR2, &VAR4->VAR5,
sizeof(struct VAR6));
}