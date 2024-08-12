float
FUN1(float VAR1, float *VAR2)
{
double VAR3, VAR4;

VAR3 = FUN2(VAR1, &VAR4);
*VAR2 = (float) VAR4;
return (float) VAR3;
}