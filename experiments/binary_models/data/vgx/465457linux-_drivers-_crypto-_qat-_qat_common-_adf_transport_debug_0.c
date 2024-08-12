static void *FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR2->private;

FUN2(&VAR7);
if (*VAR4 == 0)
return VAR8;

if (*VAR4 >= (FUN3(VAR6->VAR9) /
FUN4(VAR6->VAR10)))
return NULL;

return VAR6->VAR11 +
(FUN4(VAR6->VAR10) * (*VAR4)++);
}