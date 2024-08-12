static int FUN1(struct VAR1 *VAR2, u16 VAR3, u16 VAR4)
{
void *VAR5;

VAR5 = memalign(VAR6, VAR7);
if (!VAR5)
return -VAR8;

FUN2(VAR5, VAR4, VAR3);
FUN3((VAR9 *)VAR2->VAR10.VAR11, VAR5, VAR3, (VAR12)VAR4);
VAR2->VAR10.VAR5[VAR4] = VAR5;

return 0;
}