int
FUN1(struct VAR1 *VAR2)
{
extern void	FUN2(int);

FUN3(FUN4(&VAR3));

VAR2->VAR4 &= ~VAR5;

FUN2(VAR2->VAR6);

return (0);
}