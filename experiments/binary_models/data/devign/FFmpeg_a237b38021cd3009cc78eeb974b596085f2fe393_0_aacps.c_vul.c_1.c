int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    int VAR8;
    int VAR9 = FUN2(VAR4);
    int VAR10;
    int VAR11;
    GetBitContext VAR12 = *VAR4, *VAR13 = &VAR12;
    VAR10 = FUN3(VAR13);
    if (VAR10)
    {
        VAR6->VAR14 = FUN3(VAR13);
        if (VAR6->VAR14)
        {
            int VAR15 = FUN4(VAR13, 3);
            if (VAR15 > 5)
            {
                FUN5(VAR2, VAR16, "", VAR15);
                goto VAR17;
            }
            VAR6->VAR18 = VAR19[VAR15];
            VAR6->VAR20 = VAR15 > 2;
            VAR6->VAR21 = VAR22[VAR15];
        }
        VAR6->VAR23 = FUN3(VAR13);
        if (VAR6->VAR23)
        {
            VAR6->VAR24 = FUN4(VAR13, 3);
            if (VAR6->VAR24 > 5)
            {
                FUN5(VAR2, VAR16, "", VAR6->VAR24);
                goto VAR17;
            }
            VAR6->VAR25 = VAR19[VAR6->VAR24];
        }
        VAR6->VAR26 = FUN3(VAR13);
    }
    VAR6->VAR27 = FUN3(VAR13);
    VAR6->VAR28 = VAR6->VAR29;
    VAR6->VAR29 = VAR30[VAR6->VAR27][FUN4(VAR13, 2)];
    VAR6->VAR31[0] = -1;
    if (VAR6->VAR27)
    {
        for (VAR8 = 1; VAR8 <= VAR6->VAR29; VAR8++)
            VAR6->VAR31[VAR8] = FUN4(VAR13, 5);
    }
    else
        for (VAR8 = 1; VAR8 <= VAR6->VAR29; VAR8++)
            VAR6->VAR31[VAR8] = (VAR8 * VAR32 >> VAR33[VAR6->VAR29]) - 1;
    if (VAR6->VAR14)
    {
        for (VAR8 = 0; VAR8 < VAR6->VAR29; VAR8++)
        {
            int VAR34 = FUN3(VAR13);
            if (FUN6(VAR2, VAR13, VAR6, VAR6->VAR35, VAR36[2 * VAR34 + VAR6->VAR20], VAR8, VAR34))
                goto VAR17;
        }
    }
    else if (VAR6->VAR23)
        for (VAR8 = 0; VAR8 < VAR6->VAR29; VAR8++)
        {
            int VAR34 = FUN3(VAR13);
            if (FUN7(VAR2, VAR13, VAR6, VAR6->VAR37, VAR34 ? VAR38 : VAR39, VAR8, VAR34))
                goto VAR17;
        }
    else if (VAR6->VAR26)
    {
        int VAR40 = FUN4(VAR13, 4);
        if (VAR40 == 15)
        {
            VAR40 += FUN4(VAR13, 8);
        }
        VAR40 *= 8;
        while (VAR40 > 7)
        {
            int VAR41 = FUN4(VAR13, 2);
            VAR40 -= 2 + FUN8(VAR13, VAR6, VAR41);
        }
        if (VAR40 < 0)
        {
            FUN5(VAR2, VAR16, "", VAR40);
            goto VAR17;
        }
        FUN9(VAR13, VAR40);
    }
    VAR6->VAR42 &= !VAR43;
    if (!VAR6->VAR29 || VAR6->VAR31[VAR6->VAR29] < VAR32 - 1)
    {
        int VAR44 = VAR6->VAR29 ? VAR6->VAR29 - 1 : VAR6->VAR28 - 1;
        if (VAR44 >= 0 && VAR44 != VAR6->VAR29)
        {
            if (VAR6->VAR14)
            {
                memcpy(VAR6->VAR35 + VAR6->VAR29, VAR6->VAR35 + VAR44, sizeof(VAR6->VAR35[0]));
            }
            if (VAR6->VAR23)
            {
                memcpy(VAR6->VAR37 + VAR6->VAR29, VAR6->VAR37 + VAR44, sizeof(VAR6->VAR37[0]));
            }
            if (VAR6->VAR42)
            {
                memcpy(VAR6->VAR45 + VAR6->VAR29, VAR6->VAR45 + VAR44, sizeof(VAR6->VAR45[0]));
                memcpy(VAR6->VAR46 + VAR6->VAR29, VAR6->VAR46 + VAR44, sizeof(VAR6->VAR46[0]));
            }
        }
        VAR6->VAR29++;
        VAR6->VAR31[VAR6->VAR29] = VAR32 - 1;
    }
    VAR6->VAR47 = VAR6->VAR48;
    if (!VAR43 && (VAR6->VAR14 || VAR6->VAR23))
        VAR6->VAR48 = (VAR6->VAR14 && VAR6->VAR18 == 34) || (VAR6->VAR23 && VAR6->VAR25 == 34);
    if (!VAR6->VAR42)
    {
    }
    if (VAR10)
        VAR6->VAR49 = 1;
    VAR11 = FUN2(VAR13) - VAR9;
    if (VAR11 <= VAR7)
    {
        FUN10(VAR4, VAR11);
        return VAR11;
    }
    FUN5(VAR2, VAR16, "", VAR7, VAR11);
VAR17:
    VAR6->VAR49 = 0;
    FUN10(VAR4, VAR7);
    return VAR7;