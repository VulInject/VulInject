void
FUN1(struct VAR1 *VAR2)
{
if (!VAR2)
{
return;
}
int VAR3;
for (VAR3 = 0; VAR3 < VAR2->VAR4; ++VAR3)
{
struct VAR5 *VAR6 = &VAR2->VAR7[VAR3];
FUN2(&VAR6->VAR8);
}
free(VAR2);
}