static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7, VAR8, VAR9;
    FUN2(VAR4);
    for (;;)
    {
        VAR6 = VAR2->VAR10;
        if (VAR6)
        {
            if (!VAR6->VAR11 || !VAR6->VAR12)
            {
                *VAR4 = VAR6->VAR13;
                VAR6->VAR13.VAR14 = NULL;
                FUN3(VAR2, VAR6, NULL, VAR4);
                VAR2->VAR10 = NULL;
                if ((VAR2->VAR15->VAR16 & VAR17) && (VAR4->VAR16 & VAR18) && VAR4->VAR19 != VAR20)
                {
                    FUN4(VAR2, VAR6->VAR21);
                    FUN5(VAR6, VAR4->VAR22, VAR4->VAR19, 0, 0, VAR23);
                }
                break;
            }
            else if (VAR6->VAR24 > 0 && VAR6->VAR25 < VAR26)
            {
                VAR7 = FUN6(VAR6->VAR12, VAR6->VAR27, &VAR4->VAR14, &VAR4->VAR28, VAR6->VAR29, VAR6->VAR24, VAR6->VAR13.VAR30, VAR6->VAR13.VAR19, VAR6->VAR13.VAR22);
                VAR6->VAR13.VAR30 = VAR20;
                VAR6->VAR13.VAR19 = VAR20;
                VAR6->VAR29 += VAR7;
                VAR6->VAR24 -= VAR7;
                if (VAR4->VAR28)
                {
                VAR31:
                    VAR4->VAR32 = 0;
                    VAR4->VAR33 = VAR6->VAR21;
                    VAR4->VAR30 = VAR6->VAR12->VAR30;
                    VAR4->VAR19 = VAR6->VAR12->VAR19;
                    VAR4->VAR22 = VAR6->VAR12->VAR22;
                    if (VAR4->VAR14 == VAR6->VAR13.VAR14 && VAR4->VAR28 == VAR6->VAR13.VAR28)
                    {
                        VAR2->VAR10 = NULL;
                        VAR4->VAR34 = VAR6->VAR13.VAR34;
                        VAR6->VAR13.VAR34 = NULL;
                        VAR6->VAR13.VAR14 = NULL;
                        assert(VAR6->VAR24 == 0);
                    }
                    else
                    {
                        VAR4->VAR34 = NULL;
                    }
                    FUN3(VAR2, VAR6, VAR6->VAR12, VAR4);
                    if ((VAR2->VAR15->VAR16 & VAR17) && VAR4->VAR16 & VAR18)
                    {
                        int64_t VAR22 = (VAR6->VAR12->VAR16 & VAR35) ? VAR4->VAR22 : VAR6->VAR12->VAR36;
                        FUN4(VAR2, VAR6->VAR21);
                        FUN5(VAR6, VAR22, VAR4->VAR19, 0, 0, VAR23);
                    }
                    break;
                }
            }
            else
            {
                FUN7(&VAR6->VAR13);
                VAR2->VAR10 = NULL;
            }
        }
        else
        {
            AVPacket VAR13;
            VAR8 = FUN8(VAR2, &VAR13);
            if (VAR8 < 0)
            {
                if (VAR8 == FUN9(VAR37))
                    return VAR8;
                for (VAR9 = 0; VAR9 < VAR2->VAR38; VAR9++)
                {
                    VAR6 = VAR2->VAR39[VAR9];
                    if (VAR6->VAR12 && VAR6->VAR11)
                    {
                        FUN6(VAR6->VAR12, VAR6->VAR27, &VAR4->VAR14, &VAR4->VAR28, NULL, 0, VAR20, VAR20, VAR20);
                        if (VAR4->VAR28)
                            goto VAR31;
                    }
                }
                return VAR8;
            }
            VAR6 = VAR2->VAR39[VAR13.VAR33];
            VAR6->VAR13 = VAR13;
            if (VAR6->VAR13.VAR30 != VAR20 && VAR6->VAR13.VAR19 != VAR20 && VAR6->VAR13.VAR30 < VAR6->VAR13.VAR19)
            {
                FUN10(VAR2, VAR40, "" VAR41 "" VAR41 "", VAR6->VAR13.VAR33, VAR6->VAR13.VAR30, VAR6->VAR13.VAR19, VAR6->VAR13.VAR28);
            }
            if (VAR2->VAR42 & VAR43)
                FUN10(VAR2, VAR44, "" VAR41 "" VAR41 "", VAR6->VAR13.VAR33, VAR6->VAR13.VAR30, VAR6->VAR13.VAR19, VAR6->VAR13.VAR28, VAR6->VAR13.VAR32, VAR6->VAR13.VAR16);
            VAR2->VAR10 = VAR6;
            VAR6->VAR29 = VAR6->VAR13.VAR14;
            VAR6->VAR24 = VAR6->VAR13.VAR28;
            if (VAR6->VAR11 && !VAR6->VAR12 && !(VAR2->VAR16 & VAR45))
            {
                VAR6->VAR12 = FUN11(VAR6->VAR27->VAR46);
                if (!VAR6->VAR12)
                {
                    FUN10(VAR2, VAR40, ""
                                              "",
                           FUN12(VAR6->VAR27->VAR46));
                    VAR6->VAR11 = VAR47;
                }
                else if (VAR6->VAR11 == VAR48)
                {
                    VAR6->VAR12->VAR16 |= VAR35;
                }
                else if (VAR6->VAR11 == VAR49)
                {
                    VAR6->VAR12->VAR16 |= VAR50;
                }
            }
        }
    }
    if (VAR2->VAR42 & VAR43)
        FUN10(VAR2, VAR44, "" VAR41 "" VAR41 "", VAR4->VAR33, VAR4->VAR30, VAR4->VAR19, VAR4->VAR28, VAR4->VAR32, VAR4->VAR16);
    return 0;
}