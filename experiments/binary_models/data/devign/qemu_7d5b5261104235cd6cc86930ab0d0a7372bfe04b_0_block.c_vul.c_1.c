static int FUN1(VAR1 *VAR2, bool VAR3)
{
    VAR4 *VAR5, *VAR6;
    int VAR7;
    if (!VAR3 && VAR2->VAR8->VAR9)
    {
        VAR7 = VAR2->VAR8->FUN2(VAR2);
        if (VAR7 < 0)
        {
            return VAR7;
        }
    }
    if (VAR3)
    {
        uint64_t VAR10, VAR11;
        VAR2->VAR12 |= VAR13;
        FUN3(VAR6, &VAR2->VAR14, VAR15)
        {
            if (VAR6->VAR16->VAR17)
            {
                VAR7 = VAR6->VAR16->FUN4(VAR6);
                if (VAR7 < 0)
                {
                    VAR2->VAR12 &= ~VAR13;
                    return VAR7;
                }
            }
        }
        FUN5(VAR2, &VAR10, &VAR11);
        FUN6(VAR2, VAR10, VAR11, NULL, &VAR18);
        FUN7(VAR2, VAR10, VAR11);
    }
    FUN3(VAR5, &VAR2->VAR19, VAR20)
    {
        VAR7 = FUN1(VAR5->VAR2, VAR3);
        if (VAR7 < 0)
        {
            return VAR7;
        }
    }
    FUN8(VAR2);
    return 0;
}