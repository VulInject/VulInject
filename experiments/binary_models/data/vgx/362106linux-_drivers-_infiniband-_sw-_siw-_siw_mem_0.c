int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct xa_limit VAR5 = FUN2(1, 0x00ffffff);
u32 VAR6, VAR7;

FUN3(&VAR7, 4);
VAR7 &= 0x00ffffff;

if (FUN4(&VAR2->VAR8, &VAR6, VAR4, VAR5, &VAR7,
VAR9) < 0)
return -VAR10;


VAR4->VAR11 = VAR6 << 8;

FUN5(VAR4, "");

return 0;
}