static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);

FUN3(&VAR6->VAR7);
VAR4->VAR8.VAR9.VAR10[0] = 
(FUN4(VAR6, VAR11) & VAR12) ? 1 : 0;
FUN5(&VAR6->VAR7);
return 0;
}