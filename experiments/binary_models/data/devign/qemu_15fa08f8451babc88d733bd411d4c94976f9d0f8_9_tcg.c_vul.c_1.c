static bool FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR2->VAR3;
    int VAR4, VAR5, VAR6, VAR7;
    bool VAR8 = false;
    for (VAR5 = 0; VAR5 < VAR3; ++VAR5)
    {
        VAR9 *VAR10 = &VAR2->VAR11[VAR5];
        if (VAR10->VAR12)
        {
            VAR9 *VAR13 = FUN2(VAR2);
            VAR13->VAR14 = VAR10->VAR14;
            VAR13->VAR15 = VAR10->VAR15;
            VAR10->VAR16 = VAR13;
        }
        else
        {
            VAR10->VAR16 = NULL;
        }
        VAR10->VAR17 = VAR18;
    }
    for (VAR4 = VAR2->VAR4; VAR5 < VAR4; ++VAR5)
    {
        VAR9 *VAR10 = &VAR2->VAR11[VAR5];
        VAR10->VAR16 = NULL;
        VAR10->VAR17 = VAR18;
    }
    for (VAR6 = VAR2->VAR19[0].VAR20; VAR6 != 0; VAR6 = VAR7)
    {
        VAR21 *VAR22 = &VAR2->VAR19[VAR6];
        TCGOpcode VAR23 = VAR22->VAR23;
        const VAR24 *VAR25 = &VAR26[VAR23];
        TCGLifeData VAR27 = VAR22->VAR28;
        int VAR29, VAR30, VAR31;
        VAR9 *VAR32, *VAR33;
        VAR7 = VAR22->VAR20;
        if (VAR23 == VAR34)
        {
            VAR30 = VAR22->VAR35;
            VAR29 = VAR22->VAR36;
            VAR31 = VAR22->VAR37[VAR30 + VAR29 + 1];
        }
        else
        {
            VAR29 = VAR25->VAR29;
            VAR30 = VAR25->VAR30;
            if (VAR25->VAR38 & VAR39)
            {
                VAR31 = 0;
            }
            else if (VAR25->VAR38 & VAR40)
            {
                VAR31 = VAR41;
            }
            else
            {
                VAR31 = (VAR42 | VAR41);
            }
        }
        for (VAR5 = VAR30; VAR5 < VAR29 + VAR30; VAR5++)
        {
            VAR32 = FUN3(VAR22->VAR37[VAR5]);
            if (VAR32)
            {
                VAR33 = VAR32->VAR16;
                if (VAR33 && VAR32->VAR17 == VAR18)
                {
                    TCGOpcode VAR43 = (VAR32->VAR14 == VAR44 ? VAR45 : VAR46);
                    VAR21 *VAR47 = FUN4(VAR2, VAR22, VAR43, 3);
                    VAR47->VAR37[0] = FUN5(VAR33);
                    VAR47->VAR37[1] = FUN5(VAR32->VAR48);
                    VAR47->VAR37[2] = VAR32->VAR49;
                    VAR32->VAR17 = VAR50;
                }
            }
        }
        for (VAR5 = VAR30; VAR5 < VAR29 + VAR30; VAR5++)
        {
            VAR32 = FUN3(VAR22->VAR37[VAR5]);
            if (VAR32)
            {
                VAR33 = VAR32->VAR16;
                if (VAR33)
                {
                    VAR22->VAR37[VAR5] = FUN5(VAR33);
                    VAR8 = true;
                    if (FUN6(VAR5))
                    {
                        VAR32->VAR17 = VAR18;
                    }
                }
            }
        }
        if (VAR31 & VAR42)
        {
        }
        else if (VAR31 & VAR41)
        {
            for (VAR5 = 0; VAR5 < VAR3; ++VAR5)
            {
                VAR32 = &VAR2->VAR11[VAR5];
                FUN7(VAR32->VAR16 == 0 || VAR32->VAR17 != 0);
            }
        }
        else
        {
            for (VAR5 = 0; VAR5 < VAR3; ++VAR5)
            {
                VAR32 = &VAR2->VAR11[VAR5];
                FUN7(VAR32->VAR16 == 0 || VAR32->VAR17 == VAR18);
            }
        }
        for (VAR5 = 0; VAR5 < VAR30; VAR5++)
        {
            VAR32 = FUN3(VAR22->VAR37[VAR5]);
            VAR33 = VAR32->VAR16;
            if (!VAR33)
            {
                continue;
            }
            VAR22->VAR37[VAR5] = FUN5(VAR33);
            VAR8 = true;
            VAR32->VAR17 = 0;
            if (FUN8(VAR5))
            {
                TCGOpcode VAR51 = (VAR32->VAR14 == VAR44 ? VAR52 : VAR53);
                VAR21 *VAR54 = FUN9(VAR2, VAR22, VAR51, 3);
                VAR54->VAR37[0] = FUN5(VAR33);
                VAR54->VAR37[1] = FUN5(VAR32->VAR48);
                VAR54->VAR37[2] = VAR32->VAR49;
                VAR32->VAR17 = VAR50;
            }
            if (FUN6(VAR5))
            {
                VAR32->VAR17 = VAR18;
            }
        }
    }
    return VAR8;
}