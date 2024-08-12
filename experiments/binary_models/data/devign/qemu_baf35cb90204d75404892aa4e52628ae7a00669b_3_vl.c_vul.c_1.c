void FUN1(int VAR1)
{
    VAR2 *VAR3;
    fd_set VAR4, VAR5, VAR6;
    int VAR7, VAR8;
    int VAR9, VAR10;
    struct timeval VAR11;
    VAR12 *VAR13;
    VAR7 = 0;
    for (VAR13 = VAR14; VAR13 != NULL; VAR13 = VAR13->VAR15)
    {
        VAR7 |= VAR13->FUN2(VAR13->VAR16);
    }
    if (VAR7 == 0)
    {
        int VAR17;
        VAR18 *VAR19 = &VAR20;
        VAR7 = FUN3(VAR19->VAR21, VAR19->VAR22, VAR23, VAR1);
        if (VAR24 + 0 <= VAR7 && VAR7 <= VAR24 + VAR19->VAR21 - 1)
        {
            if (VAR19->VAR25[VAR7 - VAR24])
                VAR19->VAR25[VAR7 - VAR24](VAR19->VAR16[VAR7 - VAR24]);
            for (VAR10 = (VAR7 - VAR24 + 1); VAR10 < VAR19->VAR21; VAR10++)
            {
                VAR9 = FUN4(VAR19->VAR22[VAR10], 0);
                if (VAR9 == VAR24)
                {
                    if (VAR19->VAR25[VAR10])
                        VAR19->VAR25[VAR10](VAR19->VAR16[VAR10]);
                }
                else if (VAR9 == VAR26)
                {
                }
                else
                {
                    VAR17 = FUN5();
                    fprintf(VAR27, "", VAR10, VAR17);
                }
            }
        }
        else if (VAR7 == VAR26)
        {
        }
        else
        {
            VAR17 = FUN5();
            fprintf(VAR27, "", VAR7, VAR17);
        }
    }
    VAR8 = -1;
    FUN6(&VAR4);
    FUN6(&VAR5);
    FUN6(&VAR6);
    for (VAR3 = VAR28; VAR3 != NULL; VAR3 = VAR3->VAR15)
    {
        if (VAR3->VAR29)
            continue;
        if (VAR3->VAR30 && (!VAR3->VAR31 || VAR3->FUN7(VAR3->VAR16) != 0))
        {
            FUN8(VAR3->VAR32, &VAR4);
            if (VAR3->VAR32 > VAR8)
                VAR8 = VAR3->VAR32;
        }
        if (VAR3->VAR33)
        {
            FUN8(VAR3->VAR32, &VAR5);
            if (VAR3->VAR32 > VAR8)
                VAR8 = VAR3->VAR32;
        }
    }
    VAR11.VAR34 = 0;
    VAR11.VAR35 = 0;
    VAR11.VAR35 = VAR1 * 1000;
    if (VAR36)
    {
        FUN9(&VAR8, &VAR4, &VAR5, &VAR6);
    }
    VAR7 = FUN10(VAR8 + 1, &VAR4, &VAR5, &VAR6, &VAR11);
    if (VAR7 > 0)
    {
        VAR2 **VAR37;
        for (VAR3 = VAR28; VAR3 != NULL; VAR3 = VAR3->VAR15)
        {
            if (!VAR3->VAR29 && VAR3->VAR30 && FUN11(VAR3->VAR32, &VAR4))
            {
                VAR3->FUN12(VAR3->VAR16);
            }
            if (!VAR3->VAR29 && VAR3->VAR33 && FUN11(VAR3->VAR32, &VAR5))
            {
                VAR3->FUN13(VAR3->VAR16);
            }
        }
        VAR37 = &VAR28;
        while (*VAR37)
        {
            VAR3 = *VAR37;
            if (VAR3->VAR29)
            {
                *VAR37 = VAR3->VAR15;
                FUN14(VAR3);
            }
            else
                VAR37 = &VAR3->VAR15;
        }
    }
    if (VAR36)
    {
        if (VAR7 < 0)
        {
            FUN6(&VAR4);
            FUN6(&VAR5);
            FUN6(&VAR6);
        }
        FUN15(&VAR4, &VAR5, &VAR6);
    }
    FUN16();
    if (VAR38)
    {
        if (FUN17(!(VAR39->VAR40 & VAR41)))
            FUN18(&VAR42[VAR43], FUN19(VAR44));
        FUN20();
    }
    FUN18(&VAR42[VAR45], FUN19(VAR46));
    if (VAR47->VAR48 & VAR49)
    {
        VAR47->VAR48 &= ~(VAR49);
        FUN21(VAR47);
    }
    FUN22();
}