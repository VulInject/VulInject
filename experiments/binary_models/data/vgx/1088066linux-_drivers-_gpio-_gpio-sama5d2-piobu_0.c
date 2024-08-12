static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{

int VAR4 = FUN2(VAR2, VAR3);

if (VAR4 == VAR5)
VAR4 = FUN3(VAR2, VAR3, VAR6);
else if (VAR4 == VAR7)
VAR4 = FUN3(VAR2, VAR3, VAR8);

if (VAR4 < 0)
return VAR4;

return !!VAR4;
}