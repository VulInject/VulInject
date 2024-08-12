static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    struct VAR9 *VAR10 = NULL;
    int VAR11, VAR12;
    int64_t VAR13;
    if ((VAR5 & VAR14) || !VAR7->VAR15[0]->VAR16[0]->VAR17)
        return FUN2(VAR18);
    VAR13 = FUN3(VAR4, VAR19, VAR2->VAR20[VAR3]->VAR21.VAR22, VAR5 & VAR23 ? VAR24 : VAR25);
    if (VAR2->VAR26 < VAR13)
        return FUN2(VAR27);
    for (VAR11 = 0; VAR11 < VAR7->VAR28; VAR11++)
    {
        struct VAR9 *VAR29 = VAR7->VAR16[VAR11];
        if (VAR3 >= VAR29->VAR30 && VAR3 - VAR29->VAR30 < VAR29->VAR31->VAR32)
        {
            VAR10 = VAR29;
            break;
        }
    }
    if (!VAR10 || !FUN4(VAR7, VAR10, VAR13, &VAR12))
        return FUN2(VAR27);
    VAR10->VAR33 = VAR12;
    VAR10->VAR34 = VAR3 - VAR10->VAR30;
    for (VAR11 = 0; VAR11 < VAR7->VAR28; VAR11++)
    {
        struct VAR9 *VAR29 = VAR7->VAR16[VAR11];
        if (VAR29->VAR35)
        {
            FUN5(VAR29->VAR35);
            VAR29->VAR35 = NULL;
        }
        FUN6(&VAR29->VAR36);
        FUN7(&VAR29->VAR36);
        VAR29->VAR37.VAR38 = 0;
        VAR29->VAR37.VAR39 = VAR29->VAR37.VAR40 = VAR29->VAR37.VAR41;
        VAR29->VAR37.VAR42 = 0;
        VAR29->VAR13 = VAR13;
        VAR29->VAR43 = VAR5;
        if (VAR29 != VAR10)
        {
            FUN4(VAR7, VAR29, VAR13, &VAR29->VAR33);
            VAR29->VAR34 = -1;
            VAR29->VAR43 |= VAR44;
        }
    }
    VAR7->VAR45 = VAR13;
    return 0;
}