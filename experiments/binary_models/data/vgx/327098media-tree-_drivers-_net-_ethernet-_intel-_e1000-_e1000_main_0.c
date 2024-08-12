static struct VAR1 *FUN1(struct VAR2 *VAR3,
unsigned int VAR4)
{
struct VAR1 *VAR5 = FUN2(&VAR3->VAR6, VAR4);

if (FUN3(!VAR5))
VAR3->VAR7++;
return VAR5;
}