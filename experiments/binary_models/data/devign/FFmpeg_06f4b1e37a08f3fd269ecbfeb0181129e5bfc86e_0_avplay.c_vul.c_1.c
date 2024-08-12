static double FUN1(double VAR1, VAR2 *VAR3)
{
    double VAR4, VAR5, VAR6;
    VAR4 = VAR1 - VAR3->VAR7;
    if (VAR4 <= 0 || VAR4 >= 10.0)
    {
        VAR4 = VAR3->VAR8;
    }
    else
    {
        VAR3->VAR8 = VAR4;
    }
    VAR3->VAR7 = VAR1;
    if (((VAR3->VAR9 == VAR10 && VAR3->VAR11) || VAR3->VAR9 == VAR12))
    {
        VAR6 = FUN2(VAR3) - FUN3(VAR3);
        VAR5 = FUN4(VAR13, VAR4);
        if (FUN5(VAR6) < VAR14)
        {
            if (VAR6 <= -VAR5)
                VAR4 = 0;
            else if (VAR6 >= VAR5)
                VAR4 = 2 * VAR4;
        }
    }
    VAR3->VAR15 += VAR4;
    FUN6(NULL, VAR16, "", VAR4, VAR1, -VAR6);
    return VAR3->VAR15;
}