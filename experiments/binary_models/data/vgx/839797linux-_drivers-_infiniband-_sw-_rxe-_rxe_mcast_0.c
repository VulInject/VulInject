static void FUN1(struct VAR1 *VAR2, union VAR3 *VAR4,
struct VAR5 *VAR6)
{
FUN2(&VAR6->VAR7);
memcpy(&VAR6->VAR4, VAR4, sizeof(VAR6->VAR4));
FUN3(&VAR6->VAR8);
VAR6->VAR2 = VAR2;


FUN4(&VAR6->VAR7);
FUN5(VAR6);
}