static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR6->VAR10[VAR4->VAR11];
    VAR12 *VAR13 = VAR9->VAR13;
    int64_t VAR14 = 0;
    int VAR15 = VAR4->VAR15;
    if (VAR6->VAR16 & VAR17)
    {
        int VAR18;
        for (VAR18 = 0; VAR18 < VAR2->VAR19; VAR18++)
            VAR6->VAR10[VAR18].VAR20 = 1;
        VAR6->VAR16 &= ~VAR17;
    }
    if (!VAR4->VAR15)
    {
        if (VAR9->VAR21 == VAR22 && VAR9->VAR20)
        {
            VAR9->VAR21 = VAR4->VAR23;
            if (VAR4->VAR24 != VAR22)
                VAR9->VAR25 = VAR4->VAR24 - VAR4->VAR23;
            else
                VAR9->VAR25 = 0;
        }
        if (VAR9->VAR13->VAR26 == VAR27)
        {
            int VAR28 = 0;
            VAR29 *VAR30 = FUN2(VAR4, VAR31, &VAR28);
            if (VAR30 && VAR28 > 0 && (VAR28 != VAR13->VAR32 || memcmp(VAR30, VAR13->VAR33, VAR28)))
            {
                void *VAR34 = FUN3(VAR28 + VAR35);
                if (!VAR34)
                    return FUN4(VAR36);
                FUN5(VAR13->VAR33);
                VAR13->VAR33 = VAR34;
                memcpy(VAR13->VAR33, VAR30, VAR28);
                VAR13->VAR32 = VAR28;
                VAR6->VAR37 = 1;
            }
        }
        return 0;
    }
    if (VAR9->VAR38 && VAR4->VAR11 < VAR2->VAR19)
        VAR14 = FUN6(VAR4->VAR23 - VAR9->VAR39[0].VAR23, VAR2->VAR40[VAR4->VAR11]->VAR41, VAR42);
    if ((VAR6->VAR43 && VAR14 >= VAR6->VAR43) || (VAR6->VAR44 && VAR6->VAR45 + VAR15 >= VAR6->VAR44) || (VAR6->VAR16 & VAR46 && VAR13->VAR47 == VAR48 && VAR9->VAR38 && VAR4->VAR16 & VAR49))
    {
        if (VAR14 >= VAR6->VAR50)
        {
            VAR9->VAR51 = VAR4->VAR23 - VAR9->VAR21;
            if (VAR4->VAR24 != VAR22)
                VAR9->VAR52 = VAR4->VAR24;
            else
                VAR9->VAR52 = VAR4->VAR23;
            VAR9->VAR53 = 1;
            FUN7(VAR2, 0);
        }
    }
    return FUN8(VAR2, VAR4);