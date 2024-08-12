static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    AVPacket VAR6 = {0}, VAR7 = {0};
    VAR8 *VAR9 = VAR2->VAR10[VAR5];
    VAR11 *VAR12 = VAR4 ? VAR4->VAR12 : NULL;
    int VAR13 = VAR4 ? VAR4->VAR13 : 0;
    int VAR14 = 0, VAR15 = 0;
    if (!VAR4)
    {
        FUN2(&VAR7);
        VAR4 = &VAR7;
        VAR15 = 1;
    }
    else if (!VAR13 && VAR9->VAR16->VAR17 & VAR18)
    {
        FUN3(VAR2, VAR9, VAR9->VAR16, VAR4, VAR19, VAR19);
    }
    while (VAR13 > 0 || (VAR4 == &VAR7 && VAR15))
    {
        int VAR20;
        int64_t VAR21 = VAR4->VAR22;
        int64_t VAR23 = VAR4->VAR24;
        FUN2(&VAR6);
        VAR20 = FUN4(VAR9->VAR16, VAR9->VAR25, &VAR6.VAR12, &VAR6.VAR13, VAR12, VAR13, VAR4->VAR22, VAR4->VAR24, VAR4->VAR26);
        VAR4->VAR22 = VAR4->VAR24 = VAR19;
        VAR4->VAR26 = -1;
        VAR12 += VAR20;
        VAR13 -= VAR20;
        VAR15 = !!VAR6.VAR13;
        if (!VAR6.VAR13)
            continue;
        if (VAR4->VAR27)
        {
            VAR6.VAR27 = VAR4->VAR27;
            VAR6.VAR28 = VAR4->VAR28;
            VAR4->VAR27 = NULL;
            VAR4->VAR28 = 0;
        }
        VAR6.VAR29 = (VAR9->VAR16->VAR17 & VAR18) ? VAR4->VAR29 : 0;
        if (VAR9->VAR25->VAR30 == VAR31)
        {
            if (VAR9->VAR25->VAR32 > 0)
            {
                VAR6.VAR29 = FUN5(VAR9->VAR16->VAR29, (VAR33){1, VAR9->VAR25->VAR32}, VAR9->VAR34, VAR35);
            }
        }
        VAR6.VAR5 = VAR9->VAR36;
        VAR6.VAR22 = VAR9->VAR16->VAR22;
        VAR6.VAR24 = VAR9->VAR16->VAR24;
        VAR6.VAR26 = VAR9->VAR16->VAR26;
        if (VAR9->VAR37 == VAR38)
            VAR6.VAR26 = VAR9->VAR16->VAR39;
        if (VAR9->VAR16->VAR40 == 1 || (VAR9->VAR16->VAR40 == -1 && VAR9->VAR16->VAR41 == VAR42))
            VAR6.VAR17 |= VAR43;
        if (VAR9->VAR16->VAR40 == -1 && VAR9->VAR16->VAR41 == VAR44 && (VAR4->VAR17 & VAR43))
            VAR6.VAR17 |= VAR43;
        FUN3(VAR2, VAR9, VAR9->VAR16, &VAR6, VAR23, VAR21);
        if ((VAR14 = FUN6(&VAR2->VAR45->VAR46, &VAR6, &VAR2->VAR45->VAR47, 1)))
        {
            FUN7(&VAR6);
            goto VAR48;
        }
    }
    if (VAR4 == &VAR7)
    {
        FUN8(VAR9->VAR16);
        VAR9->VAR16 = NULL;
    }
VAR48:
    FUN7(VAR4);
    return VAR14;
}