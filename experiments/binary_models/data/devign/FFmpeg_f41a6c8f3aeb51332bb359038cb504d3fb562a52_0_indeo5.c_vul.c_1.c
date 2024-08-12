static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    VAR18 *VAR19, *VAR20;
    int VAR21 = VAR4->VAR22 * VAR4->VAR23;
    VAR19 = VAR6->VAR24;
    VAR20 = VAR6->VAR25;
    VAR14 = VAR6->VAR26 * VAR4->VAR23 + VAR6->VAR27;
    VAR16 = (VAR2->VAR28[0].VAR29[0].VAR22 >> 3) - (VAR4->VAR22 >> 3);
    VAR11 = VAR12 = 0;
    for (VAR10 = VAR6->VAR26; VAR10 < (VAR6->VAR26 + VAR6->VAR30); VAR10 += VAR4->VAR22)
    {
        VAR15 = VAR14;
        for (VAR9 = VAR6->VAR27; VAR9 < (VAR6->VAR27 + VAR6->VAR31); VAR9 += VAR4->VAR22)
        {
            VAR19->VAR27 = VAR9;
            VAR19->VAR26 = VAR10;
            VAR19->VAR32 = VAR15;
            if (FUN2(&VAR2->VAR33))
            {
                if (VAR2->VAR34 == VAR35)
                {
                    FUN3(VAR8, VAR36, "");
                    return -1;
                }
                VAR19->VAR37 = 1;
                VAR19->VAR38 = 0;
                VAR19->VAR39 = 0;
                if (!VAR4->VAR40 && !VAR4->VAR41 && (VAR2->VAR42 & 8))
                {
                    VAR19->VAR39 = FUN4(&VAR2->VAR33, VAR2->VAR43.VAR44->VAR45, VAR46, 1);
                    VAR19->VAR39 = FUN5(VAR19->VAR39);
                }
                VAR19->VAR11 = VAR19->VAR12 = 0;
                if (VAR4->VAR47)
                {
                    if (VAR16)
                    {
                        VAR19->VAR11 = FUN6(VAR20->VAR11, VAR16);
                        VAR19->VAR12 = FUN6(VAR20->VAR12, VAR16);
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
                if (VAR4->VAR47)
                {
                    VAR19->VAR37 = VAR20->VAR37;
                }
                else if (VAR2->VAR34 == VAR35)
                {
                    VAR19->VAR37 = 0;
                }
                else
                {
                    VAR19->VAR37 = FUN2(&VAR2->VAR33);
                }
                VAR17 = VAR4->VAR22 != VAR4->VAR48 ? 4 : 1;
                VAR19->VAR38 = FUN7(&VAR2->VAR33, VAR17);
                VAR19->VAR39 = 0;
                if (VAR4->VAR49)
                {
                    if (VAR4->VAR50)
                    {
                        if (VAR20)
                            VAR19->VAR39 = VAR20->VAR39;
                    }
                    else if (VAR19->VAR38 || (!VAR4->VAR40 && !VAR4->VAR41 && (VAR2->VAR42 & 8)))
                    {
                        VAR19->VAR39 = FUN4(&VAR2->VAR33, VAR2->VAR43.VAR44->VAR45, VAR46, 1);
                        VAR19->VAR39 = FUN5(VAR19->VAR39);
                    }
                }
                if (!VAR19->VAR37)
                {
                    VAR19->VAR11 = VAR19->VAR12 = 0;
                }
                else
                {
                    if (VAR4->VAR47)
                    {
                        if (VAR16)
                        {
                            VAR19->VAR11 = FUN6(VAR20->VAR11, VAR16);
                            VAR19->VAR12 = FUN6(VAR20->VAR12, VAR16);
                        }
                        else
                        {
                            VAR19->VAR11 = VAR20->VAR11;
                            VAR19->VAR12 = VAR20->VAR12;
                        }
                    }
                    else
                    {
                        VAR13 = FUN4(&VAR2->VAR33, VAR2->VAR43.VAR44->VAR45, VAR46, 1);
                        VAR12 += FUN5(VAR13);
                        VAR13 = FUN4(&VAR2->VAR33, VAR2->VAR43.VAR44->VAR45, VAR46, 1);
                        VAR11 += FUN5(VAR13);
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
    FUN8(&VAR2->VAR33);
    return 0;
}