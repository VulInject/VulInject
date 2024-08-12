VAR1
*FUN1(VAR2 * VAR3, int VAR4, const void *VAR5, int VAR6)
{
unsigned long VAR7;
VAR1 *VAR8;

if (!VAR9 || !VAR3->VAR10)
return NULL;
if (VAR11) {
if (!FUN2(&VAR3->VAR12, VAR7))
return NULL;
} else
FUN3(&VAR3->VAR12, VAR7);
VAR8 = FUN4(VAR3);
memset(FUN5(VAR8), 0, VAR3->VAR13);
memcpy(FUN5(VAR8), VAR5, FUN6(VAR6, VAR3->VAR13));
FUN7(VAR3, VAR8, VAR4, 1);
FUN8(&VAR3->VAR12, VAR7);

return VAR8;
}