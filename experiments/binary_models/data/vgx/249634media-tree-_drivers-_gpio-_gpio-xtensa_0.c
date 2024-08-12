static int FUN1(struct VAR1 *VAR2)
{
int VAR3;

VAR3 = FUN2(&VAR4, NULL);
if (VAR3)
return VAR3;
return FUN2(&VAR5, NULL);
}