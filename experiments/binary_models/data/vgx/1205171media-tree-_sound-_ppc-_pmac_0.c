static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
if (VAR4->VAR7.VAR8.VAR7[0] != VAR6->VAR9) {
VAR6->VAR9 = !!VAR4->VAR7.VAR8.VAR7[0];
if (VAR6->VAR10)
VAR6->FUN3(VAR6, 1);
return 1;
}
return 0;
}