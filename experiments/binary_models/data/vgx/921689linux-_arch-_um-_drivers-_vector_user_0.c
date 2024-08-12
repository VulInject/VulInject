int FUN1(int VAR1, void *VAR2)
{
struct VAR3 *VAR4 = VAR2;

int VAR5 = FUN2(VAR1, VAR6, VAR7, VAR2, sizeof(struct VAR3));
if (VAR5 < 0)
FUN3(KERN_ERR VAR8, VAR4->VAR9, VAR4->VAR10, VAR1, -VAR11);
return VAR5;
}