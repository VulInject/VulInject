int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6 = 0, VAR7 = 10;
    int VAR8;
    if (!VAR2->VAR9)
    {
        return 0;
    }
    if (VAR2->VAR10 && VAR11 == VAR12)
    {
        return FUN2(VAR4);
    }
    while (VAR6 < VAR5)
    {
        do
        {
            VAR8 = VAR2->FUN3(VAR2, VAR4 + VAR6, VAR5 - VAR6);
            if (VAR8 == -1 && VAR13 == VAR14)
            {
                FUN4(100);
            }
        } while (VAR8 == -1 && VAR13 == VAR14);
        if (VAR8 == 0)
        {
            break;
        }
        if (VAR8 < 0)
        {
            if (VAR2->VAR10 && VAR11 == VAR15)
            {
                FUN5(VAR8);
            }
            return VAR8;
        }
        VAR6 += VAR8;
        if (!VAR7--)
        {
            break;
        }
    }
    if (VAR2->VAR10 && VAR11 == VAR15)
    {
        FUN6(VAR4, VAR6);
    }
    return VAR6;
}