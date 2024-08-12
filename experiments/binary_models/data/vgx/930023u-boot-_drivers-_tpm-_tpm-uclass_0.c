int FUN1(struct VAR1 *VAR2, char *VAR3, int VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);

if (!VAR6->VAR7)
return -VAR8;

return VAR6->FUN3(VAR2, VAR3, VAR4);
}