static void FUN1(VAR1 *VAR2, offset_t VAR3)
{
    AVPacket VAR4, *VAR5 = &VAR4;
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10;
    int64_t VAR11;
    int64_t VAR12, VAR13, VAR14;
    if (VAR2->VAR15 && VAR2->VAR15->VAR16)
        FUN2(&VAR2->VAR17);
    VAR2->VAR15 = NULL;
    FUN3(VAR2);
    for (VAR9 = 0; VAR9 < VAR2->VAR18; VAR9++)
    {
        VAR7 = VAR2->VAR19[VAR9];
        if (VAR7->VAR16)
        {
            FUN4(VAR7->VAR16);
            VAR7->VAR16 = NULL;
        }
    }
    FUN5(&VAR2->VAR20, 0, VAR21);
    VAR8 = 0;
    for (;;)
    {
        if (VAR8 >= VAR22)
            break;
        for (VAR9 = 0; VAR9 < VAR2->VAR18; VAR9++)
        {
            VAR7 = VAR2->VAR19[VAR9];
            if (VAR7->VAR23 == VAR24)
                break;
        }
        if (VAR9 == VAR2->VAR18)
            break;
        VAR10 = FUN6(VAR2, VAR5);
        if (VAR10 != 0)
            break;
        VAR8 += VAR5->VAR25;
        VAR7 = VAR2->VAR19[VAR5->VAR26];
        if (VAR5->VAR27 != VAR24)
        {
            if (VAR7->VAR23 == VAR24)
                VAR7->VAR23 = VAR5->VAR27;
        }
        FUN2(VAR5);
    }
    VAR12 = VAR2->VAR28;
    VAR13 = VAR12 - VAR22;
    if (VAR13 < 0)
        VAR13 = 0;
    FUN5(&VAR2->VAR20, VAR13, VAR21);
    VAR8 = 0;
    for (;;)
    {
        if (VAR8 >= VAR22)
            break;
        VAR10 = FUN6(VAR2, VAR5);
        if (VAR10 != 0)
            break;
        VAR8 += VAR5->VAR25;
        VAR7 = VAR2->VAR19[VAR5->VAR26];
        if (VAR5->VAR27 != VAR24 && VAR7->VAR23 != VAR24)
        {
            VAR11 = VAR5->VAR27;
            VAR14 = VAR11 - VAR7->VAR23;
            if (VAR14 > 0)
            {
                if (VAR7->VAR14 == VAR24 || VAR7->VAR14 < VAR14)
                    VAR7->VAR14 = VAR14;
            }
        }
        FUN2(VAR5);
    }
    FUN7(VAR2);
    FUN5(&VAR2->VAR20, VAR3, VAR21);
    for (VAR9 = 0; VAR9 < VAR2->VAR18; VAR9++)
    {
        VAR7 = VAR2->VAR19[VAR9];
        VAR7->VAR29 = VAR7->VAR30;
    }