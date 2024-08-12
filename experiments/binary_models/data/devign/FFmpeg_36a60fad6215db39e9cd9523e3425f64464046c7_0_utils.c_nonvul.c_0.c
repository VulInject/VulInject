static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    int VAR6;
    int64_t VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR9 = VAR2->VAR12[VAR3];
    VAR6 = FUN2(VAR9, VAR4, VAR5);
    if (VAR6 < 0 && VAR9->VAR13 && VAR4 < VAR9->VAR14[0].VAR4)
        return -1;
    if (VAR6 < 0 || VAR6 == VAR9->VAR13 - 1)
    {
        AVPacket VAR15;
        int VAR16 = 0;
        if (VAR9->VAR13)
        {
            assert(VAR9->VAR14);
            VAR11 = &VAR9->VAR14[VAR9->VAR13 - 1];
            if ((VAR7 = FUN3(VAR2->VAR17, VAR11->VAR18, VAR19)) < 0)
                return VAR7;
            FUN4(VAR2, VAR9, VAR11->VAR4);
        }
        else
        {
            if ((VAR7 = FUN3(VAR2->VAR17, VAR2->VAR20, VAR19)) < 0)
                return VAR7;
        }
        for (;;)
        {
            int VAR21;
            do
            {
                VAR21 = FUN5(VAR2, &VAR15);
            } while (VAR21 == FUN6(VAR22));
            if (VAR21 < 0)
                break;
            FUN7(&VAR15);
            if (VAR3 == VAR15.VAR3 && VAR15.VAR23 > VAR4)
            {
                if (VAR15.VAR5 & VAR24)
                    break;
                if (VAR16++ > 1000 && VAR9->VAR25->VAR26 != VAR27)
                {
                    FUN8(VAR2, VAR28, "", VAR16);
                    break;
                }
            }
        }
        VAR6 = FUN2(VAR9, VAR4, VAR5);
    }
    if (VAR6 < 0)
        return -1;
    FUN9(VAR2);
    FUN10(if (VAR2->VAR29->VAR30)
                         {
                             if (VAR2->VAR29->FUN11(VAR2, VAR3, VAR4, VAR5) >= 0)
                                 return 0;
                         })
    VAR11 = &VAR9->VAR14[VAR6];
    if ((VAR7 = FUN3(VAR2->VAR17, VAR11->VAR18, VAR19)) < 0)
        return VAR7;
    FUN4(VAR2, VAR9, VAR11->VAR4);
    return 0;
}