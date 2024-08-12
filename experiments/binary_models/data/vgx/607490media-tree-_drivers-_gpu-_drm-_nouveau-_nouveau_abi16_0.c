int
FUN1(struct VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR5 = (void *)VAR2->VAR6.VAR7.VAR8;
FUN2(&VAR5->mutex);
return VAR3;
}