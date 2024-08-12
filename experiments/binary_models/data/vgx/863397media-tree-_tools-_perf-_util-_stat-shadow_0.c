static double FUN1(int VAR1, int VAR2)
{
double VAR3 = (FUN2(VAR1, VAR2) +
FUN3(VAR1, VAR2) +
FUN4(VAR1, VAR2));
if (VAR3 == 0)
return 0;
return FUN5(1.0 - VAR3);
}