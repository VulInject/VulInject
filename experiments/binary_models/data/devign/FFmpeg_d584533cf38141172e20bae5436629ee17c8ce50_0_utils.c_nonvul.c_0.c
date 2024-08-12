int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    const int VAR5 = VAR2->VAR6 & VAR7;
    int VAR8 = 0;
    if (!VAR5)
        return VAR2->VAR9->VAR10 ? FUN2(&VAR2->VAR9->VAR10, &VAR2->VAR9->VAR11, VAR4) : FUN3(VAR2, VAR4);
    for (;;)
    {
        int VAR12;
        VAR13 *VAR14 = VAR2->VAR9->VAR10;
        if (VAR14)
        {
            VAR3 *VAR15 = &VAR14->VAR4;
            if (VAR15->VAR16 != VAR17)
            {
                int VAR18 = VAR2->VAR19[VAR15->VAR20]->VAR21;
                while (VAR14 && VAR15->VAR22 == VAR17)
                {
                    if (VAR14->VAR4.VAR20 == VAR15->VAR20 && (FUN4(VAR15->VAR16, VAR14->VAR4.VAR16, 2LL << (VAR18 - 1)) < 0) && FUN4(VAR14->VAR4.VAR22, VAR14->VAR4.VAR16, 2LL << (VAR18 - 1)))
                    {
                        VAR15->VAR22 = VAR14->VAR4.VAR16;
                    }
                    VAR14 = VAR14->VAR23;
                }
                VAR14 = VAR2->VAR9->VAR10;
            }
            if (!(VAR15->VAR22 == VAR17 && VAR15->VAR16 != VAR17 && !VAR8))
                return FUN2(&VAR2->VAR9->VAR10, &VAR2->VAR9->VAR11, VAR4);
        }
        VAR12 = FUN3(VAR2, VAR4);
        if (VAR12 < 0)
        {
            if (VAR14 && VAR12 != FUN5(VAR24))
            {
                VAR8 = 1;
                continue;
            }
            else
                return VAR12;
        }
        VAR12 = FUN6(&VAR2->VAR9->VAR10, VAR4, &VAR2->VAR9->VAR11, 1);
        if (VAR12 < 0)
            return VAR12;
    }
}