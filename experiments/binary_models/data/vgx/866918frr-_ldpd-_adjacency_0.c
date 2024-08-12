struct VAR1 *
FUN1(struct VAR2 *VAR3, int VAR4, union VAR5 *VAR6)
{
struct tnbr	 VAR1;
VAR1.VAR4 = VAR4;
VAR1.VAR6 = *VAR6;
return (FUN2(VAR7, &VAR3->VAR8, &VAR1));
}