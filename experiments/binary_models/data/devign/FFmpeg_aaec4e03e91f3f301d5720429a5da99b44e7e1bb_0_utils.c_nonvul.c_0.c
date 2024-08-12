static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    int VAR6, VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR9 = VAR2->VAR12[VAR3];
    VAR6 = FUN2(VAR9, VAR4, VAR5);
    if (VAR6 < 0 || VAR6 == VAR9->VAR13 - 1)
    {
        int VAR14;
        AVPacket VAR15;
        if (VAR9->VAR13)
        {
            assert(VAR9->VAR16);
            VAR11 = &VAR9->VAR16[VAR9->VAR13 - 1];
            if ((VAR7 = FUN3(VAR2->VAR17, VAR11->VAR18, VAR19)) < 0)
                return VAR7;
            FUN4(VAR2, VAR9, VAR11->VAR4);
        }
        else
        {
            if ((VAR7 = FUN3(VAR2->VAR17, 0, VAR19)) < 0)
                return VAR7;
        }
        for (VAR14 = 0;; VAR14++)
        {
            int VAR7 = FUN5(VAR2, &VAR15);
            if (VAR7 < 0)
                break;
            FUN6(&VAR15);
            if (VAR3 == VAR15.VAR3)
            {
                if ((VAR15.VAR5 & VAR20) && VAR15.VAR21 > VAR4)
                    break;
            }
        }
        VAR6 = FUN2(VAR9, VAR4, VAR5);
    }
    if (VAR6 < 0)
        return -1;
    FUN7(VAR2);
    if (VAR2->VAR22->VAR23)
    {
        if (VAR2->VAR22->FUN8(VAR2, VAR3, VAR4, VAR5) >= 0)
            return 0;
    }
    VAR11 = &VAR9->VAR16[VAR6];
    if ((VAR7 = FUN3(VAR2->VAR17, VAR11->VAR18, VAR19)) < 0)
        return VAR7;
    FUN4(VAR2, VAR9, VAR11->VAR4);
    return 0;
}