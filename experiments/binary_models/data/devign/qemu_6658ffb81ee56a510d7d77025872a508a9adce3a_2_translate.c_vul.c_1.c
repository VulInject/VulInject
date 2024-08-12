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
    VAR7->VAR25 = (VAR2->VAR26 & 0x1f) == VAR27;
    VAR13 = (VAR12 & VAR28) + VAR29;
    VAR30 = 0;
    VAR11 = -1;
    do
    {
        if (VAR2->VAR31 > 0)
        {
            for (VAR10 = 0; VAR10 < VAR2->VAR31; VAR10++)
            {
                if (VAR2->VAR32[VAR10] == VAR7->VAR14)
                {
                    FUN2((long)VAR7->VAR14);
                    VAR33[0][15]();
                    FUN3();
                    VAR7->VAR20 = VAR34;
                    break;
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
                    VAR35[VAR11++] = 0;
            }
            VAR36[VAR11] = VAR7->VAR14;
            VAR35[VAR11] = 1;
        }
        if (VAR2->VAR24)
            FUN4(VAR7);
        else
            FUN5(VAR2, VAR7);
        if (VAR7->VAR23 && !VAR7->VAR20)
        {
            FUN6(VAR7->VAR37);
            VAR7->VAR23 = 0;
        }
        if (VAR7->VAR38 && VAR2->VAR39)
            break;
    } while (!VAR7->VAR20 && VAR15 < VAR9 && !VAR2->VAR22 && VAR7->VAR14 < VAR13);
    if (FUN7(VAR2->VAR22, 0))
    {
        if (VAR7->VAR23)
        {
            FUN3();
            FUN6(VAR7->VAR37);
        }
        if (VAR7->VAR23 || !VAR7->VAR20)
        {
            FUN2((long)VAR7->VAR14);
            VAR33[0][15]();
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
            break;
        default:
        case VAR34:
        case VAR40:
            FUN9();
            FUN10();
            break;
        case VAR41:
            break;
        }
        if (VAR7->VAR23)
        {
            FUN6(VAR7->VAR37);
            FUN8(VAR7, 1, VAR7->VAR14);
            VAR7->VAR23 = 0;
        }
    }
    *VAR15 = VAR42;
    if (VAR43 & VAR44)
    {
        fprintf(VAR45, "");
        fprintf(VAR45, "", FUN11(VAR12));
        FUN12(VAR45, VAR12, VAR7->VAR14 - VAR12, VAR2->VAR24);
        fprintf(VAR45, "");
        if (VAR43 & (VAR46))
        {
            fprintf(VAR45, "");
            FUN13(VAR16, VAR19);
            fprintf(VAR45, "");
        }
    }
    if (VAR5)
    {
        VAR10 = VAR15 - VAR16;
        VAR11++;
        while (VAR11 <= VAR10)
            VAR35[VAR11++] = 0;
        VAR4->VAR47 = 0;
    }
    else
    {
        VAR4->VAR47 = VAR7->VAR14 - VAR12;
    }
    return 0;