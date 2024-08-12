static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    DisasContext VAR6, *VAR7 = &VAR6;
    VAR8 *VAR9;
    int VAR10, VAR11;
    target_ulong VAR12;
    uint32_t VAR13;
    VAR12 = VAR4->VAR14;
    VAR7->VAR4 = VAR4;
    VAR15 = VAR16;
    VAR9 = VAR16 + VAR17;
    VAR18 = VAR19;
    VAR7->VAR20 = VAR21;
    VAR7->VAR14 = VAR12;
    VAR7->VAR22 = VAR2->VAR22;
    VAR7->VAR23 = 0;
    VAR7->VAR24 = VAR2->VAR24;
    VAR7->VAR25 = 0;
    VAR7->VAR26 = (VAR2->VAR27 & 0x1f) == VAR28;
    VAR13 = (VAR12 & VAR29) + VAR30;
    VAR31 = 0;
    VAR11 = -1;
    do
    {
        if (VAR2->VAR32 > 0)
        {
            for (VAR10 = 0; VAR10 < VAR2->VAR32; VAR10++)
            {
                if (VAR2->VAR33[VAR10] == VAR7->VAR14)
                {
                    FUN2((long)VAR7->VAR14);
                    VAR34[0][15]();
                    FUN3();
                    VAR7->VAR20 = VAR35;
                }
            }
        }
        if (VAR5)
        {
            VAR10 = VAR15 - VAR16;
            if (VAR11 < VAR10)
            {
                VAR11++;
                while (VAR11 < VAR10)
                    VAR36[VAR11++] = 0;
            }
            VAR37[VAR11] = VAR7->VAR14;
            VAR36[VAR11] = 1;
        }
        if (VAR2->VAR24)
            FUN4(VAR7);
        else
            FUN5(VAR2, VAR7);
        if (VAR7->VAR23 && !VAR7->VAR20)
        {
            FUN6(VAR7->VAR38);
            VAR7->VAR23 = 0;
        }
    } while (!VAR7->VAR20 && VAR15 < VAR9 && !VAR2->VAR22 && VAR7->VAR14 < VAR13);
    if (FUN7(VAR2->VAR22, 0))
    {
        if (VAR7->VAR23)
        {
            FUN3();
            FUN6(VAR7->VAR38);
        }
        if (VAR7->VAR23 || !VAR7->VAR20)
        {
            FUN2((long)VAR7->VAR14);
            VAR34[0][15]();
            VAR7->VAR23 = 0;
        }
        FUN3();
    }
    else
    {
        switch (VAR7->VAR20)
        {
        case VAR21:
            FUN8(VAR7, 1, VAR7->VAR14);
        default:
        case VAR35:
        case VAR39:
            FUN9();
            FUN10();
        case VAR40:
        }
        if (VAR7->VAR23)
        {
            FUN6(VAR7->VAR38);
            FUN8(VAR7, 1, VAR7->VAR14);
            VAR7->VAR23 = 0;
        }
    }
    *VAR15 = VAR41;
    if (VAR42 & VAR43)
    {
        fprintf(VAR44, "");
        fprintf(VAR44, "", FUN11(VAR12));
        FUN12(VAR44, VAR12, VAR7->VAR14 - VAR12, VAR2->VAR24);
        fprintf(VAR44, "");
        if (VAR42 & (VAR45))
        {
            fprintf(VAR44, "");
            FUN13(VAR16, VAR19);
            fprintf(VAR44, "");
        }
    }
    if (VAR5)
    {
        VAR10 = VAR15 - VAR16;
        VAR11++;
        while (VAR11 <= VAR10)
            VAR36[VAR11++] = 0;
        VAR4->VAR46 = 0;
    }
    else
    {
        VAR4->VAR46 = VAR7->VAR14 - VAR12;
    }
    return 0;