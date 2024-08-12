static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6 = &VAR4->VAR6;
    int VAR7;
    int VAR8 = VAR4->VAR9 + VAR4->VAR10 * VAR4->VAR11;
    int VAR12 = 0;
    int VAR13, VAR14;
    int VAR15 = VAR2->VAR16;
    int VAR17 = 0;
    int VAR18, VAR19;
    int VAR20, VAR21;
    int VAR22 = 1;
    int VAR23, VAR24;
    int VAR25, VAR26;
    int VAR27[2], VAR28[2];
    int VAR29 = VAR30;
    vc1_idct_func VAR31;
    VAR14 = VAR2->VAR32;
    VAR4->VAR33 = 0;
    if (VAR2->VAR34)
        VAR26 = FUN2(VAR6);
    else
        VAR26 = VAR2->VAR35[VAR8];
    if (VAR2->VAR36)
        VAR25 = FUN2(VAR6);
    else
        VAR25 = VAR2->VAR4.VAR37[VAR8];
    VAR27[0] = VAR27[1] = VAR28[0] = VAR28[1] = 0;
    for (VAR7 = 0; VAR7 < 6; VAR7++)
    {
        VAR2->VAR38[0][VAR4->VAR39[VAR7]] = 0;
        VAR4->VAR40[0][VAR4->VAR39[VAR7]] = 0;
    }
    VAR4->VAR41.VAR42[VAR8] = 0;
    if (!VAR26)
    {
        if (!VAR25)
        {
            FUN3(VAR27[0], VAR28[0]);
            VAR27[1] = VAR27[0];
            VAR28[1] = VAR28[0];
        }
        if (VAR25 || !VAR4->VAR33)
        {
            VAR29 = FUN4(VAR6);
            switch (VAR29)
            {
            case 0:
                VAR29 = (VAR2->VAR43 >= (VAR44 / 2)) ? VAR30 : VAR45;
                break;
            case 1:
                VAR29 = (VAR2->VAR43 >= (VAR44 / 2)) ? VAR45 : VAR30;
                break;
            case 2:
                VAR29 = VAR46;
                VAR27[0] = VAR28[0] = 0;
            }
        }
    }
    for (VAR7 = 0; VAR7 < 6; VAR7++)
        VAR2->VAR38[0][VAR4->VAR39[VAR7]] = VAR4->VAR33;
    if (VAR25)
    {
        if (VAR26)
            VAR29 = VAR46;
        FUN5(VAR2, VAR27, VAR28, VAR26, VAR29);
        FUN6(VAR2, VAR27, VAR28, VAR26, VAR29);
        return;
    }
    if (VAR26)
    {
        VAR12 = FUN7(&VAR2->VAR4.VAR6, VAR2->VAR47->VAR48, VAR49, 2);
        FUN8();
        VAR4->VAR33 = 0;
        VAR4->VAR41.VAR42[VAR8] = VAR14;
        if (!VAR2->VAR50)
            VAR15 = FUN7(VAR6, VAR51[VAR2->VAR52].VAR48, VAR53, 2);
        VAR27[0] = VAR28[0] = VAR27[1] = VAR28[1] = 0;
        FUN5(VAR2, VAR27, VAR28, VAR26, VAR29);
        FUN6(VAR2, VAR27, VAR28, VAR26, VAR29);
    }
    else
    {
        if (!VAR17 && !VAR4->VAR33)
        {
            FUN5(VAR2, VAR27, VAR28, VAR26, VAR29);
            FUN6(VAR2, VAR27, VAR28, VAR26, VAR29);
            return;
        }
        if (VAR4->VAR33 && !VAR17)
        {
            FUN8();
            VAR4->VAR41.VAR42[VAR8] = VAR14;
            VAR4->VAR54 = FUN2(VAR6);
            VAR12 = 0;
            FUN5(VAR2, VAR27, VAR28, VAR26, VAR29);
        }
        else
        {
            if (VAR29 == VAR46)
            {
                FUN3(VAR27[0], VAR28[0]);
                if (!VAR17)
                {
                    FUN5(VAR2, VAR27, VAR28, VAR26, VAR29);
                    FUN6(VAR2, VAR27, VAR28, VAR26, VAR29);
                    return;
                }
            }
            FUN5(VAR2, VAR27, VAR28, VAR26, VAR29);
            if (!VAR4->VAR33)
            {
                FUN6(VAR2, VAR27, VAR28, VAR26, VAR29);
            }
            if (VAR4->VAR33)
                VAR4->VAR54 = FUN2(VAR6);
            VAR12 = FUN7(&VAR2->VAR4.VAR6, VAR2->VAR47->VAR48, VAR49, 2);
            FUN8();
            VAR4->VAR41.VAR42[VAR8] = VAR14;
            if (!VAR2->VAR50 && !VAR4->VAR33 && VAR17)
                VAR15 = FUN7(VAR6, VAR51[VAR2->VAR52].VAR48, VAR53, 2);
        }
    }
    VAR23 = 0;
    VAR31 = VAR2->VAR55.VAR56[!!VAR2->VAR57];
    for (VAR7 = 0; VAR7 < 6; VAR7++)
    {
        VAR4->VAR40[0][VAR4->VAR39[VAR7]] = 0;
        VAR23 += VAR7 >> 2;
        VAR20 = ((VAR12 >> (5 - VAR7)) & 1);
        VAR24 = (VAR7 & 4) ? 0 : ((VAR7 & 1) * 8 + (VAR7 & 2) * 4 * VAR4->VAR58);
        VAR2->VAR38[0][VAR4->VAR39[VAR7]] = VAR4->VAR33;
        if (VAR4->VAR33)
        {
            VAR2->VAR59 = VAR2->VAR60 = 0;
            if (VAR7 == 2 || VAR7 == 3 || !VAR4->VAR61)
                VAR2->VAR59 = VAR2->VAR38[0][VAR4->VAR39[VAR7] - VAR4->VAR62[VAR7]];
            if (VAR7 == 1 || VAR7 == 3 || VAR4->VAR9)
                VAR2->VAR60 = VAR2->VAR38[0][VAR4->VAR39[VAR7] - 1];
            FUN9(VAR2, VAR4->VAR63[VAR7], VAR7, VAR20, VAR14, (VAR7 & 4) ? VAR2->VAR64 : VAR2->VAR65);
            if ((VAR7 > 3) && (VAR4->VAR66 & VAR67))
                continue;
            FUN10(VAR4->VAR68[VAR23] + VAR24, VAR7 & 4 ? VAR4->VAR69 : VAR4->VAR58, VAR4->VAR63[VAR7]);
        }
        else if (VAR20)
        {
            FUN11(VAR2, VAR4->VAR63[VAR7], VAR7, VAR14, VAR15, VAR22, VAR4->VAR68[VAR23] + VAR24, (VAR7 & 4) ? VAR4->VAR69 : VAR4->VAR58, (VAR7 & 4) && (VAR4->VAR66 & VAR67), 0, 0, 0);
            if (!VAR2->VAR50 && VAR15 < 8)
                VAR15 = -1;
            VAR22 = 0;
        }
    }
}