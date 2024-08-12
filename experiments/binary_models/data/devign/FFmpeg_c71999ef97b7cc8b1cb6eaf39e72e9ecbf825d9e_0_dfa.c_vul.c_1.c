static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    uint32_t VAR7;
    int VAR8, VAR9 = 1;
    if (FUN2(VAR6))
        return VAR10;
    if (FUN3(VAR6, VAR4, 12) != 12)
        return FUN4(VAR11);
    while (!FUN2(VAR6))
    {
        if (!VAR9)
        {
            VAR8 = FUN5(VAR6, VAR4, 12);
            if (VAR8 < 0)
            {
                return VAR8;
            }
        }
        else
            VAR9 = 0;
        VAR7 = FUN6(VAR4->VAR12 + VAR4->VAR13 - 8);
        if (VAR7 > VAR14 - 4)
        {
            FUN7(VAR2, VAR15, "" VAR16 "", VAR7);
            return FUN4(VAR11);
        }
        if (FUN6(VAR4->VAR12 + VAR4->VAR13 - 12) == FUN8('', '', '', ''))
        {
            if (VAR7)
            {
                FUN7(VAR2, VAR17, "" VAR16 "", VAR7);
                FUN9(VAR6, VAR7);
            }
            return 0;
        }
        VAR8 = FUN5(VAR6, VAR4, VAR7);
        if (VAR8 < 0)
        {
            return VAR8;
        }
    }
    return 0;