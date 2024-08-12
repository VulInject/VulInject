static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (FUN2(VAR2, true))
    {
        return 0;
    }
    VAR2->VAR4 &= ~VAR5;
    VAR2->VAR6 = &VAR2->VAR7[0];
    VAR2->VAR8 = &VAR2->VAR7[0];
    if (VAR2->VAR4 & VAR9)
    {
        if (VAR2->VAR4 & VAR10)
        {
            VAR2->VAR11 = 8;
        }
        else
        {
            VAR2->VAR11 = 8 * 8 * VAR2->VAR12;
        }
        VAR2->VAR13 = VAR2->VAR11;
    }
    else
    {
        if (VAR2->VAR4 & VAR10)
        {
            VAR3 = VAR2->VAR14 / VAR2->VAR12;
            if (VAR2->VAR15 & VAR16)
                VAR2->VAR11 = ((VAR3 + 31) >> 5);
            else
                VAR2->VAR11 = ((VAR3 + 7) >> 3);
        }
        else
        {
            VAR2->VAR11 = (VAR2->VAR14 + 3) & ~3;
        }
        VAR2->VAR13 = VAR2->VAR11 * VAR2->VAR17;
    }
    VAR2->VAR6 = VAR2->VAR7;
    VAR2->VAR8 = VAR2->VAR7 + VAR2->VAR11;
    FUN3(VAR2);
    return 1;