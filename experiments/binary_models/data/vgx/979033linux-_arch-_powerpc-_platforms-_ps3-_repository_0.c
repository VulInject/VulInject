int FUN1(VAR1 *VAR2, unsigned int *VAR3)
{
int VAR4;

*VAR3 = 0;
VAR4 = FUN2(VAR2);
return VAR4 ? VAR4
: FUN3(VAR3);
}