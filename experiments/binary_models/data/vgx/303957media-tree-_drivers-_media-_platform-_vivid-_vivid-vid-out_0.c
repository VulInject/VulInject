int FUN1(struct VAR1 *VAR1, void *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR1);

if (!VAR6->VAR7)
return -VAR8;
return FUN3(VAR1, VAR2, VAR4);
}