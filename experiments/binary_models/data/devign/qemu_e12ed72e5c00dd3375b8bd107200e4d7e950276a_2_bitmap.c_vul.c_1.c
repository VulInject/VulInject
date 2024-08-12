bool FUN1(unsigned long *VAR1, long VAR2, long VAR3)
{
    unsigned long *VAR4 = VAR1 + FUN2(VAR2);
    const long VAR5 = VAR2 + VAR3;
    int VAR6 = VAR7 - (VAR2 % VAR7);
    unsigned long VAR8 = FUN3(VAR2);
    unsigned long VAR9 = 0;
    unsigned long VAR10;
    if (VAR3 - VAR6 > 0)
    {
        VAR10 = FUN4(VAR4, ~VAR8);
        VAR9 |= VAR10 & VAR8;
        VAR3 -= VAR6;
        VAR6 = VAR7;
        VAR8 = ~0UL;
        VAR4++;
    }
    if (VAR6 == VAR7)
    {
        while (VAR3 >= VAR7)
        {
            if (*VAR4)
            {
                VAR10 = FUN5(VAR4, 0);
                VAR9 |= VAR10;
            }
            VAR3 -= VAR7;
            VAR4++;
        }
    }
    if (VAR3)
    {
        VAR8 &= FUN6(VAR5);
        VAR10 = FUN4(VAR4, ~VAR8);
        VAR9 |= VAR10 & VAR8;
    }
    else
    {
        if (!VAR9)
        {
            FUN7();
        }
    }
    return VAR9 != 0;