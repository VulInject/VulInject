VAR1 FUN1(VAR2 *VAR3)
{
    double VAR4;
    double VAR5;
    double VAR6;
    if (!VAR3->VAR7)
    {
        return 0;
    }
    if (!VAR3->VAR8)
    {
        VAR5 = (double)VAR3->VAR7 / 10;
        VAR6 = 0;
    }
    else
    {
        VAR5 = VAR3->VAR8 * VAR3->VAR9;
        VAR6 = (double)VAR3->VAR8 / 10;
    }
    VAR4 = VAR3->VAR10 - VAR5;
    if (VAR4 > 0)
    {
        return FUN2(VAR3->VAR7, VAR4);
    }
    if (VAR3->VAR9 > 1)
    {
        VAR4 = VAR3->VAR11 - VAR6;
        if (VAR4 > 0)
        {
            return FUN2(VAR3->VAR8, VAR4);
        }
    }
    return 0;