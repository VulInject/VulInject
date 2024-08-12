static double FUN1(double VAR1)
{
    if ((VAR1 > VAR2) && (VAR1 < (1.0 - VAR2)))
    {
        double VAR3 = VAR1;
        double VAR4 = 1.0;
        while (VAR4 > VAR2)
        {
            while ((FUN2((VAR3 + VAR4) * (FUN3(1) << 63)) > FUN2(VAR3 * (FUN3(1) << 63))) && (FUN4(VAR3 + VAR4, 1.0) <= VAR1))
            {
                VAR3 += VAR4;
            }
            VAR4 /= 2.0;
        }
        return VAR3;
    }
    else
    {
        return VAR1;
    }
}