int FUN1(struct VAR1 *VAR2, int VAR3)
{
struct VAR4 *VAR5 = &VAR2->VAR6.VAR5[VAR3];

if (!VAR2->VAR6.VAR5)
return 0;

FUN2(&VAR5->VAR7, VAR2, VAR3);
return 1;
}