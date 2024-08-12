static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12;
    int VAR13, VAR14, VAR15;
    x264_picture_t VAR16;
    FUN2(&VAR9->VAR17);
    VAR9->VAR17.VAR18.VAR19 = VAR9->VAR20.VAR19;
    if (VAR21 > 8)
        VAR9->VAR17.VAR18.VAR19 |= VAR22;
    VAR9->VAR17.VAR18.VAR23 = FUN3(VAR2->VAR24);
    if (VAR6)
    {
        for (VAR14 = 0; VAR14 < VAR9->VAR17.VAR18.VAR23; VAR14++)
        {
            VAR9->VAR17.VAR18.VAR25[VAR14] = VAR6->VAR26[VAR14];
            VAR9->VAR17.VAR18.VAR27[VAR14] = VAR6->VAR28[VAR14];
        }
        VAR9->VAR17.VAR29 = VAR6->VAR30;
        VAR9->VAR17.VAR31 = VAR6->VAR32 == VAR33 ? VAR34 : VAR6->VAR32 == VAR35 ? VAR36
                                                                                  : VAR6->VAR32 == VAR37   ? VAR38
                                                                                                                            : VAR39;
        if (VAR9->VAR20.VAR40 && VAR9->VAR20.VAR41 != VAR6->VAR42)
        {
            VAR9->VAR20.VAR41 = VAR6->VAR42;
            FUN4(VAR9->VAR43, &VAR9->VAR20);
        }
        if (VAR9->VAR20.VAR44.VAR45 != VAR2->VAR46.VAR47 || VAR9->VAR20.VAR44.VAR48 != VAR2->VAR46.VAR49)
        {
            VAR9->VAR20.VAR44.VAR45 = VAR2->VAR46.VAR47;
            VAR9->VAR20.VAR44.VAR48 = VAR2->VAR46.VAR49;
            FUN4(VAR9->VAR43, &VAR9->VAR20);
        }
    }
    do
    {
        if (FUN5(VAR9->VAR43, &VAR12, &VAR13, VAR6 ? &VAR9->VAR17 : NULL, &VAR16) < 0)
            return -1;
        VAR15 = FUN6(VAR2, VAR4, VAR12, VAR13);
        if (VAR15 < 0)
            return -1;
    } while (!VAR15 && !VAR6 && FUN7(VAR9->VAR43));
    VAR4->VAR30 = VAR16.VAR29;
    VAR4->VAR50 = VAR16.VAR51;
    switch (VAR16.VAR31)
    {
    case VAR52:
    case VAR53:
        VAR9->VAR54.VAR32 = VAR33;
        break;
    case VAR36:
        VAR9->VAR54.VAR32 = VAR35;
        break;
    case VAR38:
    case VAR55:
        VAR9->VAR54.VAR32 = VAR37;
        break;
    }
    VAR4->VAR56 |= VAR57 * VAR16.VAR58;
    if (VAR15)
        VAR9->VAR54.VAR59 = (VAR16.VAR60 - 1) * VAR61;
    *VAR7 = VAR15;
    return 0;
}