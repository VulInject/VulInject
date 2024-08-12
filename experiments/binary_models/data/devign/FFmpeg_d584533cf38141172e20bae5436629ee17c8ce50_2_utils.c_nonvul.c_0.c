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
    while (VAR13 > 0 || (VAR4 == &VAR7 && VAR15))
    {
        int VAR16;
        FUN2(&VAR6);
        VAR16 = FUN3(VAR9->VAR17, VAR9->VAR18, &VAR6.VAR12, &VAR6.VAR13, VAR12, VAR13, VAR4->VAR19, VAR4->VAR20, VAR4->VAR21);
        VAR4->VAR19 = VAR4->VAR20 = VAR22;
        VAR12 += VAR16;
        VAR13 -= VAR16;
        VAR15 = !!VAR6.VAR13;
        if (!VAR6.VAR13)
            continue;
        if (VAR4->VAR23)
        {
            VAR6.VAR23 = VAR4->VAR23;
            VAR6.VAR24 = VAR4->VAR24;
            VAR4->VAR23 = NULL;
            VAR4->VAR24 = 0;
        }
        VAR6.VAR25 = 0;
        if (VAR9->VAR18->VAR26 == VAR27)
        {
            if (VAR9->VAR18->VAR28 > 0)
            {
                VAR6.VAR25 = FUN4(VAR9->VAR17->VAR25, (VAR29){1, VAR9->VAR18->VAR28}, VAR9->VAR30, VAR31);
            }
        }
        VAR6.VAR5 = VAR9->VAR32;
        VAR6.VAR19 = VAR9->VAR17->VAR19;
        VAR6.VAR20 = VAR9->VAR17->VAR20;
        VAR6.VAR21 = VAR9->VAR17->VAR21;
        if (VAR9->VAR17->VAR33 == 1 || (VAR9->VAR17->VAR33 == -1 && VAR9->VAR17->VAR34 == VAR35))
            VAR6.VAR36 |= VAR37;
        FUN5(VAR2, VAR9, VAR9->VAR17, &VAR6);
        if ((VAR2->VAR38->VAR36 & VAR39) && VAR6.VAR36 & VAR37)
        {
            FUN6(VAR2, VAR9->VAR32);
            FUN7(VAR9, VAR9->VAR17->VAR40, VAR6.VAR20, 0, 0, VAR41);
        }
        if ((VAR14 = FUN8(&VAR2->VAR42->VAR43, &VAR6, &VAR2->VAR42->VAR44, 1)))
        {
            FUN9(&VAR6);
            goto VAR45;
        }
    }
    if (VAR4 == &VAR7)
    {
        FUN10(VAR9->VAR17);
        VAR9->VAR17 = NULL;
    }
VAR45:
    FUN9(VAR4);
    return VAR14;
}