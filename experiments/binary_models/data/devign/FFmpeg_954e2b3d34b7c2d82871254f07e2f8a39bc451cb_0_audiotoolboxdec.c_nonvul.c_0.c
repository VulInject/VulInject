static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    int VAR12 = VAR6->VAR13;
    AVPacket VAR14 = {0};
    OSStatus VAR15;
    AudioBufferList VAR16;
    if (VAR2->VAR17 == VAR18 && VAR6->VAR13 > 2 && (FUN2(VAR6->VAR3) & 0xfff0) == 0xfff0)
    {
        AVPacket VAR19 = {0};
        if (!VAR8->VAR20)
        {
            const VAR21 *VAR20 = FUN3("");
            if (!VAR20)
                return VAR22;
            if ((VAR15 = FUN4(VAR20, &VAR8->VAR20)))
                return VAR15;
            if (((VAR15 = FUN5(VAR8->VAR20->VAR23, VAR2)) < 0) || ((VAR15 = FUN6(VAR8->VAR20)) < 0))
            {
                FUN7(&VAR8->VAR20);
                return VAR15;
            }
        }
        if ((VAR15 = FUN8(&VAR19, VAR6)) < 0)
            return VAR15;
        if ((VAR15 = FUN9(VAR8->VAR20, &VAR19)) < 0)
        {
            FUN10(&VAR19);
            return VAR15;
        }
        if ((VAR15 = FUN11(VAR8->VAR20, &VAR14)) < 0)
            return VAR15;
        if (!VAR8->VAR24)
        {
            VAR25 *VAR26;
            int VAR27 = 0;
            VAR26 = FUN12(&VAR14, VAR28, &VAR27);
            if (VAR27)
            {
                VAR8->VAR29 = FUN13(VAR27 + VAR30);
                if (!VAR8->VAR29)
                    return FUN14(VAR31);
                VAR8->VAR24 = VAR27;
                memcpy(VAR8->VAR29, VAR26, VAR27);
            }
        }
        VAR6 = &VAR14;
    }
    if (!VAR8->VAR32)
    {
        if ((VAR15 = FUN15(VAR2, VAR6)) < 0)
        {
            FUN10(&VAR14);
            return VAR15;
        }
    }
    VAR16 = (VAR33){.VAR34 = 1, .VAR35 = {{
                                                             .VAR36 = VAR2->VAR37,
                                                             .VAR38 = FUN16(VAR2->VAR39) * VAR2->VAR40 * VAR2->VAR37,
                                                         }}};
    FUN10(&VAR8->VAR41);
    if (VAR6->VAR13)
    {
        if (VAR14.VAR3)
        {
            VAR8->VAR41 = VAR14;
        }
        else if ((VAR15 = FUN8(&VAR8->VAR41, VAR6)) < 0)
        {
            return VAR15;
        }
    }
    else
    {
        VAR8->VAR42 = 1;
    }
    VAR11->VAR43 = VAR2->VAR43;
    VAR11->VAR44 = VAR2->VAR40;
    VAR16.VAR35[0].VAR45 = VAR8->VAR46;
    VAR15 = FUN17(VAR8->VAR32, VAR47, VAR2, &VAR11->VAR44, &VAR16, NULL);
    if ((!VAR15 || VAR15 == 1) && VAR11->VAR44)
    {
        if ((VAR15 = FUN18(VAR2, VAR11, 0)) < 0)
            return VAR15;
        FUN19(VAR2, VAR11);
        *VAR4 = 1;
        if (VAR8->VAR48 != VAR49)
        {
            VAR11->VAR50 = VAR8->VAR48;
            FF_DISABLE_DEPRECATION_WARNINGS VAR11->VAR51 = VAR8->VAR48;
            FF_ENABLE_DEPRECATION_WARNINGS VAR8->VAR48 = VAR6->VAR50;
        }
    }
    else if (VAR15 && VAR15 != 1)
    {
        FUN20(VAR2, VAR52, "", VAR15);
    }
    else
    {
        VAR8->VAR48 = VAR6->VAR50;
    }
    return VAR12;
}