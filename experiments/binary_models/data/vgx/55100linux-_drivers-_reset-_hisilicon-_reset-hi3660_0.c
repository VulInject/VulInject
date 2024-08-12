static int FUN1(struct VAR1 *VAR2,
unsigned long VAR3)
{
int VAR4;

VAR4 = FUN2(VAR2, VAR3);
if (VAR4)
return VAR4;

return FUN3(VAR2, VAR3);
}