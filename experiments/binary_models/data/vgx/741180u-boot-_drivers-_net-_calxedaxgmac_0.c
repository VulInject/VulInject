static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6 = FUN3(VAR4);
u32 VAR7[2];


VAR7[1] = FUN4(&VAR6->VAR7[0].VAR8);
VAR7[0] = FUN4(&VAR6->VAR7[0].VAR9);
memcpy(VAR4->VAR10, VAR7, VAR11);

return 0;
}