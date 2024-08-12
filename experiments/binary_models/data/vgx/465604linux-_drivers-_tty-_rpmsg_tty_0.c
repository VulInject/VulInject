static int FUN1(struct VAR1 *VAR2, void *VAR3, int VAR4, void *VAR5, u32 VAR6)
{
struct VAR7 *VAR8 = FUN2(&VAR2->VAR9);
int VAR10;

if (!VAR4)
return -VAR11;
VAR10 = FUN3(&VAR8->VAR12, VAR3, VAR4);
if (VAR10 != VAR4)
FUN4(&VAR2->VAR9, "", VAR10);
FUN5(&VAR8->VAR12);

return 0;
}