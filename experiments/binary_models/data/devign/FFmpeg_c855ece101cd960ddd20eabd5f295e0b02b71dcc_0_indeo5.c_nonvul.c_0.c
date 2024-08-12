static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    VAR19 *VAR20, *VAR21;
    int VAR22 = VAR4->VAR23 * VAR4->VAR24;
    VAR20 = VAR6->VAR25;
    VAR21 = VAR6->VAR26;
    VAR14 = VAR6->VAR27 * VAR4->VAR24 + VAR6->VAR28;
    if (!VAR21 && ((VAR4->VAR29 && VAR4->VAR30) || VAR4->VAR31))
        return VAR32;
    VAR16 = (VAR2->VAR33[0].VAR34[0].VAR23 >> 3) - (VAR4->VAR23 >> 3);
    VAR11 = VAR12 = 0;
    for (VAR10 = VAR6->VAR27; VAR10 < (VAR6->VAR27 + VAR6->VAR35); VAR10 += VAR4->VAR23)
    {
        VAR15 = VAR14;
        for (VAR9 = VAR6->VAR28; VAR9 < (VAR6->VAR28 + VAR6->VAR36); VAR9 += VAR4->VAR23)
        {
            VAR20->VAR28 = VAR9;
            VAR20->VAR27 = VAR10;
            VAR20->VAR37 = VAR15;
            if (FUN2(&VAR2->VAR38))
            {
                if (VAR2->VAR39 == VAR40)
                {
                    FUN3(VAR8, VAR41, "");
                    return -1;
                }
                VAR20->VAR42 = 1;
                VAR20->VAR43 = 0;
                VAR20->VAR44 = 0;
                if (!VAR4->VAR45 && !VAR4->VAR46 && (VAR2->VAR47 & 8))
                {
                    VAR20->VAR44 = FUN4(&VAR2->VAR38, VAR2->VAR48.VAR49->VAR50, VAR51, 1);
                    VAR20->VAR44 = FUN5(VAR20->VAR44);
                }
                VAR20->VAR11 = VAR20->VAR12 = 0;
                if (VAR4->VAR31 && VAR21)
                {
                    if (VAR16)
                    {
                        VAR20->VAR11 = FUN6(VAR21->VAR11, VAR16);
                        VAR20->VAR12 = FUN6(VAR21->VAR12, VAR16);
                    }
                    else
                    {
                        VAR20->VAR11 = VAR21->VAR11;
                        VAR20->VAR12 = VAR21->VAR12;
                    }
                }
            }
            else
            {
                if (VAR4->VAR31 && VAR21)
                {
                    VAR20->VAR42 = VAR21->VAR42;
                }
                else if (VAR2->VAR39 == VAR40)
                {
                    VAR20->VAR42 = 0;
                }
                else
                {
                    VAR20->VAR42 = FUN2(&VAR2->VAR38);
                }
                VAR17 = VAR4->VAR23 != VAR4->VAR52 ? 4 : 1;
                VAR20->VAR43 = FUN7(&VAR2->VAR38, VAR17);
                VAR20->VAR44 = 0;
                if (VAR4->VAR29)
                {
                    if (VAR4->VAR30)
                    {
                        if (VAR21)
                            VAR20->VAR44 = VAR21->VAR44;
                    }
                    else if (VAR20->VAR43 || (!VAR4->VAR45 && !VAR4->VAR46 && (VAR2->VAR47 & 8)))
                    {
                        VAR20->VAR44 = FUN4(&VAR2->VAR38, VAR2->VAR48.VAR49->VAR50, VAR51, 1);
                        VAR20->VAR44 = FUN5(VAR20->VAR44);
                    }
                }
                if (!VAR20->VAR42)
                {
                    VAR20->VAR11 = VAR20->VAR12 = 0;
                }
                else
                {
                    if (VAR4->VAR31 && VAR21)
                    {
                        if (VAR16)
                        {
                            VAR20->VAR11 = FUN6(VAR21->VAR11, VAR16);
                            VAR20->VAR12 = FUN6(VAR21->VAR12, VAR16);
                        }
                        else
                        {
                            VAR20->VAR11 = VAR21->VAR11;
                            VAR20->VAR12 = VAR21->VAR12;
                        }
                    }
                    else
                    {
                        VAR13 = FUN4(&VAR2->VAR38, VAR2->VAR48.VAR49->VAR50, VAR51, 1);
                        VAR12 += FUN5(VAR13);
                        VAR13 = FUN4(&VAR2->VAR38, VAR2->VAR48.VAR49->VAR50, VAR51, 1);
                        VAR11 += FUN5(VAR13);
                        VAR20->VAR11 = VAR11;
                        VAR20->VAR12 = VAR12;
                    }
                }
            }
            VAR18 = VAR4->VAR53;
            if (VAR20->VAR42)
                if (VAR9 + (VAR20->VAR11 >> VAR18) + (VAR10 + (VAR20->VAR12 >> VAR18)) * VAR4->VAR24 < 0 || VAR9 + ((VAR20->VAR11 + VAR18) >> VAR18) + VAR4->VAR23 - 1 + (VAR10 + VAR4->VAR23 - 1 + ((VAR20->VAR12 + VAR18) >> VAR18)) * VAR4->VAR24 > VAR4->VAR54 - 1)
                {
                    FUN3(VAR8, VAR41, "", VAR9 * VAR18 + VAR20->VAR11, VAR10 * VAR18 + VAR20->VAR12);
                    return VAR32;
                }
            VAR20++;
            if (VAR21)
                VAR21++;
            VAR15 += VAR4->VAR23;
        }
        VAR14 += VAR22;
    }
    FUN8(&VAR2->VAR38);
    return 0;
}