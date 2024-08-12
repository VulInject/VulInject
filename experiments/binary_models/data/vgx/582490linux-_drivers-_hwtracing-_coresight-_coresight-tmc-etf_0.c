static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
int VAR5 = 0;
unsigned long VAR6;
struct VAR7 *VAR8 = FUN2(VAR4);

if (!VAR8)
return -VAR9;


VAR6 = VAR4->VAR6 & ((VAR8->VAR10 << VAR11) - 1);


VAR8->VAR12 = VAR6 / VAR13;


VAR8->VAR14 = VAR6 % VAR13;

FUN3(&VAR8->VAR15, 0);

return VAR5;
}