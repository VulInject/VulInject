static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    VAR18 *VAR19, *VAR20;
    int VAR21 = VAR4->VAR22 * VAR4->VAR23;
    VAR19 = VAR6->VAR24;
    VAR20 = VAR6->VAR25;
    VAR14 = VAR6->VAR26 * VAR4->VAR23 + VAR6->VAR27;
    if (!VAR20 && ((VAR4->VAR28 && VAR4->VAR29) || VAR4->VAR30))
        return VAR31;
    if (VAR6->VAR32 != FUN2(VAR6->VAR33, VAR6->VAR34, VAR4->VAR22))
    {
        FUN3(VAR8, VAR35, "", VAR6->VAR32, FUN2(VAR6->VAR33, VAR6->VAR34, VAR4->VAR22));
        return VAR31;
    }
    VAR16 = (VAR2->VAR36[0].VAR37[0].VAR22 >> 3) - (VAR4->VAR22 >> 3);
    VAR11 = VAR12 = 0;
    for (VAR10 = VAR6->VAR26; VAR10 < (VAR6->VAR26 + VAR6->VAR34); VAR10 += VAR4->VAR22)
    {
        VAR15 = VAR14;
        for (VAR9 = VAR6->VAR27; VAR9 < (VAR6->VAR27 + VAR6->VAR33); VAR9 += VAR4->VAR22)
        {
            VAR19->VAR27 = VAR9;
            VAR19->VAR26 = VAR10;
            VAR19->VAR38 = VAR15;
            if (FUN4(&VAR2->VAR39))
            {
                if (VAR2->VAR40 == VAR41)
                {
                    FUN3(VAR8, VAR35, "");
                    return -1;
                }
                VAR19->VAR42 = 1;
                VAR19->VAR43 = 0;
                VAR19->VAR44 = 0;
                if (!VAR4->VAR45 && !VAR4->VAR46 && (VAR2->VAR47 & 8))
                {
                    VAR19->VAR44 = FUN5(&VAR2->VAR39, VAR2->VAR48.VAR49->VAR50, VAR51, 1);
                    VAR19->VAR44 = FUN6(VAR19->VAR44);
                }
                VAR19->VAR11 = VAR19->VAR12 = 0;
                if (VAR4->VAR30)
                {
                    if (VAR16)
                    {
                        VAR19->VAR11 = FUN7(VAR20->VAR11, VAR16);
                        VAR19->VAR12 = FUN7(VAR20->VAR12, VAR16);
                    }
                    else
                    {
                        VAR19->VAR11 = VAR20->VAR11;
                        VAR19->VAR12 = VAR20->VAR12;
                    }
                }
            }
            else
            {
                if (VAR4->VAR30)
                {
                    VAR19->VAR42 = VAR20->VAR42;
                }
                else if (VAR2->VAR40 == VAR41)
                {
                    VAR19->VAR42 = 0;
                }
                else
                {
                    VAR19->VAR42 = FUN4(&VAR2->VAR39);
                }
                VAR17 = VAR4->VAR22 != VAR4->VAR52 ? 4 : 1;
                VAR19->VAR43 = FUN8(&VAR2->VAR39, VAR17);
                VAR19->VAR44 = 0;
                if (VAR4->VAR28)
                {
                    if (VAR4->VAR29)
                    {
                        if (VAR20)
                            VAR19->VAR44 = VAR20->VAR44;
                    }
                    else if (VAR19->VAR43 || (!VAR4->VAR45 && !VAR4->VAR46 && (VAR2->VAR47 & 8)))
                    {
                        VAR19->VAR44 = FUN5(&VAR2->VAR39, VAR2->VAR48.VAR49->VAR50, VAR51, 1);
                        VAR19->VAR44 = FUN6(VAR19->VAR44);
                    }
                }
                if (!VAR19->VAR42)
                {
                    VAR19->VAR11 = VAR19->VAR12 = 0;
                }
                else
                {
                    if (VAR4->VAR30)
                    {
                        if (VAR16)
                        {
                            VAR19->VAR11 = FUN7(VAR20->VAR11, VAR16);
                            VAR19->VAR12 = FUN7(VAR20->VAR12, VAR16);
                        }
                        else
                        {
                            VAR19->VAR11 = VAR20->VAR11;
                            VAR19->VAR12 = VAR20->VAR12;
                        }
                    }
                    else
                    {
                        VAR13 = FUN5(&VAR2->VAR39, VAR2->VAR48.VAR49->VAR50, VAR51, 1);
                        VAR12 += FUN6(VAR13);
                        VAR13 = FUN5(&VAR2->VAR39, VAR2->VAR48.VAR49->VAR50, VAR51, 1);
                        VAR11 += FUN6(VAR13);
                        VAR19->VAR11 = VAR11;
                        VAR19->VAR12 = VAR12;
                    }
                }
            }
            VAR19++;
            if (VAR20)
                VAR20++;
            VAR15 += VAR4->VAR22;
        }
        VAR14 += VAR21;
    }
    FUN9(&VAR2->VAR39);
    return 0;
}