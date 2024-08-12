static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR6->VAR10[VAR4->VAR11];
    VAR12 *VAR13 = VAR9->VAR13;
    int64_t VAR14 = 0;
    int VAR15 = VAR4->VAR15;
    int VAR16 = FUN2(VAR2, VAR4);
    if (VAR16 < 0)
        return VAR16;
    if (VAR6->VAR17 & VAR18)
    {
        int VAR19;
        for (VAR19 = 0; VAR19 < VAR2->VAR20; VAR19++)
            VAR6->VAR10[VAR19].VAR21 = 1;
        VAR6->VAR17 &= ~VAR18;
    }
    if (VAR9->VAR13->VAR22 == VAR23 || VAR9->VAR13->VAR22 == VAR24 || VAR9->VAR13->VAR22 == VAR25)
    {
        int VAR26 = 0;
        VAR27 *VAR28 = FUN3(VAR4, VAR29, &VAR26);
        if (VAR28 && VAR26 > 0 && (VAR26 != VAR13->VAR30 || memcmp(VAR28, VAR13->VAR31, VAR26)))
        {
            void *VAR32 = FUN4(VAR26 + VAR33);
            if (!VAR32)
                return FUN5(VAR34);
            FUN6(VAR13->VAR31);
            VAR13->VAR31 = VAR32;
            memcpy(VAR13->VAR31, VAR28, VAR26);
            VAR13->VAR30 = VAR26;
            if (!VAR4->VAR15)
                VAR6->VAR35 = 1;
        }
    }
    if (!VAR4->VAR15)
    {
        if (VAR9->VAR36 == VAR37 && VAR9->VAR21)
        {
            VAR9->VAR36 = VAR4->VAR38;
            if (VAR4->VAR39 != VAR37)
                VAR9->VAR40 = VAR4->VAR39 - VAR4->VAR38;
            else
                VAR9->VAR40 = 0;
        }
        return 0;
    }
    if (VAR9->VAR41 && VAR4->VAR11 < VAR2->VAR20)
        VAR14 = FUN7(VAR4->VAR38 - VAR9->VAR42[0].VAR38, VAR2->VAR43[VAR4->VAR11]->VAR44, VAR45);
    if ((VAR6->VAR46 && VAR14 >= VAR6->VAR46) || (VAR6->VAR47 && VAR6->VAR48 + VAR15 >= VAR6->VAR47) || (VAR6->VAR17 & VAR49 && VAR13->VAR50 == VAR51 && VAR9->VAR41 && VAR4->VAR17 & VAR52))
    {
        if (VAR14 >= VAR6->VAR53)
        {
            VAR9->VAR54 = VAR4->VAR38 - VAR9->VAR36;
            if (VAR4->VAR39 != VAR37)
                VAR9->VAR55 = VAR4->VAR39;
            else
                VAR9->VAR55 = VAR4->VAR38;
            VAR9->VAR56 = 1;
            FUN8(VAR2, 0);
        }
    }
    return FUN9(VAR2, VAR4);
}