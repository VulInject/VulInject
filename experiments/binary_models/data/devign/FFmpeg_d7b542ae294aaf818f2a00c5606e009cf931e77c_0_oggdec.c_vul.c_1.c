static int FUN1(VAR1 *VAR2, int *VAR3, int *VAR4, int *VAR5, VAR6 *VAR7)
{
    struct VAR8 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12;
    struct VAR13 *VAR14;
    int VAR15 = 0;
    int VAR16 = 0, VAR17 = 0;
    FUN2(VAR2, "", VAR8->VAR18);
    do
    {
        VAR10 = VAR8->VAR18;
        while (VAR10 < 0)
        {
            VAR12 = FUN3(VAR2, &VAR10);
            if (VAR12 < 0)
                return VAR12;
        }
        VAR14 = VAR8->VAR19 + VAR10;
        FUN2(VAR2, "", VAR10, VAR14->VAR20, VAR14->VAR17, VAR14->VAR16, VAR14->VAR21);
        if (!VAR14->VAR22)
        {
            if (VAR14->VAR23 < 0)
            {
                VAR14->VAR22 = FUN4(VAR14->VAR24, VAR14->VAR25);
                if (!VAR14->VAR22)
                {
                    FUN5(VAR2, VAR26, "");
                    VAR14->VAR23 = 0;
                    return 0;
                }
            }
            else
            {
                return 0;
            }
        }
        VAR16 = VAR14->VAR16;
        VAR17 = VAR14->VAR17;
        while (VAR14->VAR16 < VAR14->VAR21)
        {
            int VAR27 = VAR14->VAR28[VAR14->VAR16++];
            VAR14->VAR17 += VAR27;
            if (VAR27 < 255)
            {
                VAR15 = 1;
                break;
            }
        }
        if (!VAR15 && VAR14->VAR16 == VAR14->VAR21)
        {
            VAR8->VAR18 = -1;
            VAR14->VAR29 = 1;
        }
    } while (!VAR15);
    if (VAR14->VAR30 == -1)
        FUN5(VAR2, VAR26, "" VAR31 "", VAR14->VAR32);
    VAR8->VAR18 = VAR10;
    VAR14->VAR29 = 0;
    if (VAR14->VAR23)
    {
        VAR14->VAR23 = VAR14->VAR22->FUN6(VAR2, VAR10);
        if (!VAR14->VAR23)
        {
            VAR14->VAR16 = VAR16;
            VAR14->VAR17 = VAR17;
            VAR8->VAR33 = 1;
            if (!VAR2->VAR34)
                VAR2->VAR34 = VAR14->VAR35;
            for (VAR11 = 0; VAR11 < VAR8->VAR36; VAR11++)
            {
                struct VAR13 *VAR37 = VAR8->VAR19 + VAR11;
                if (VAR37->VAR29)
                    VAR2->VAR34 = FUN7(VAR2->VAR34, VAR37->VAR35);
            }
        }
        else
        {
            VAR14->VAR20 += VAR14->VAR17;
            VAR14->VAR17 = 0;
        }
    }
    else
    {
        VAR14->VAR38 = 0;
        VAR14->VAR39 = 0;
        if (VAR14->VAR22 && VAR14->VAR22->VAR40)
            VAR14->VAR22->FUN8(VAR2, VAR10);
        if (VAR3)
            *VAR3 = VAR10;
        if (VAR4)
            *VAR4 = VAR14->VAR20;
        if (VAR5)
            *VAR5 = VAR14->VAR17;
        if (VAR7)
            *VAR7 = VAR14->VAR35;
        VAR14->VAR20 += VAR14->VAR17;
        VAR14->VAR17 = 0;
        if (VAR14->VAR20 == VAR14->VAR25)
            VAR14->VAR25 = VAR14->VAR20 = 0;
        VAR14->VAR35 = VAR14->VAR32;
    }
    VAR14->VAR41 = 1;
    for (VAR11 = VAR14->VAR16; VAR11 < VAR14->VAR21; VAR11++)
        if (VAR14->VAR28[VAR11] < 255)
        {
            VAR14->VAR41 = 0;
            break;
        }
    if (VAR14->VAR16 == VAR14->VAR21)
        VAR8->VAR18 = -1;
    return 0;
}