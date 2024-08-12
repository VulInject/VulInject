static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
void *VAR5)
{
int VAR6 = 0;
unsigned long VAR7;
struct VAR8 *VAR9 = VAR5;


VAR7 = VAR4->VAR7 & ((VAR9->VAR10 << VAR11) - 1);


VAR9->VAR12 = VAR7 / VAR13;


VAR9->VAR14 = VAR7 % VAR13;

FUN2(&VAR9->VAR15, 0);

return VAR6;
}