int FUN1(VAR1)(VAR2 *VAR3, VAR4 *VAR5, VAR6 *VAR7, int VAR8)
{
    int VAR9;
    int VAR10 = FUN2(VAR5);
    int VAR11;
    int VAR12;
    GetBitContext VAR13 = *VAR5, *VAR14 = &VAR13;
    VAR11 = FUN3(VAR14);
    if (VAR11)
    {
        VAR7->VAR15 = FUN3(VAR14);
        if (VAR7->VAR15)
        {
            int VAR16 = FUN4(VAR14, 3);
            if (VAR16 > 5)
            {
                FUN5(VAR3, VAR17, "", VAR16);
                goto VAR18;
            }
            VAR7->VAR19 = VAR20[VAR16];
            VAR7->VAR21 = VAR16 > 2;
            VAR7->VAR22 = VAR23[VAR16];
        }
        VAR7->VAR24 = FUN3(VAR14);
        if (VAR7->VAR24)
        {
            VAR7->VAR25 = FUN4(VAR14, 3);
            if (VAR7->VAR25 > 5)
            {
                FUN5(VAR3, VAR17, "", VAR7->VAR25);
                goto VAR18;
            }
            VAR7->VAR26 = VAR20[VAR7->VAR25];
        }
        VAR7->VAR27 = FUN3(VAR14);
    }
    VAR7->VAR28 = FUN3(VAR14);
    VAR7->VAR29 = VAR7->VAR30;
    VAR7->VAR30 = VAR31[VAR7->VAR28][FUN4(VAR14, 2)];
    VAR7->VAR32[0] = -1;
    if (VAR7->VAR28)
    {
        for (VAR9 = 1; VAR9 <= VAR7->VAR30; VAR9++)
            VAR7->VAR32[VAR9] = FUN4(VAR14, 5);
    }
    else
        for (VAR9 = 1; VAR9 <= VAR7->VAR30; VAR9++)
            VAR7->VAR32[VAR9] = (VAR9 * VAR33 >> VAR34[VAR7->VAR30]) - 1;
    if (VAR7->VAR15)
    {
        for (VAR9 = 0; VAR9 < VAR7->VAR30; VAR9++)
        {
            int VAR35 = FUN3(VAR14);
            if (FUN6(VAR3, VAR14, VAR7, VAR7->VAR36, VAR37[2 * VAR35 + VAR7->VAR21], VAR9, VAR35))
                goto VAR18;
        }
    }
    else
        memset(VAR7->VAR36, 0, sizeof(VAR7->VAR36));
    if (VAR7->VAR24)
        for (VAR9 = 0; VAR9 < VAR7->VAR30; VAR9++)
        {
            int VAR35 = FUN3(VAR14);
            if (FUN7(VAR3, VAR14, VAR7, VAR7->VAR38, VAR35 ? VAR39 : VAR40, VAR9, VAR35))
                goto VAR18;
        }
    else
        memset(VAR7->VAR38, 0, sizeof(VAR7->VAR38));
    if (VAR7->VAR27)
    {
        int VAR41 = FUN4(VAR14, 4);
        if (VAR41 == 15)
        {
            VAR41 += FUN4(VAR14, 8);
        }
        VAR41 *= 8;
        while (VAR41 > 7)
        {
            int VAR42 = FUN4(VAR14, 2);
            VAR41 -= 2 + FUN8(VAR14, VAR7, VAR42);
        }
        if (VAR41 < 0)
        {
            FUN5(VAR3, VAR17, "", VAR41);
            goto VAR18;
        }
        FUN9(VAR14, VAR41);
    }
    VAR7->VAR43 &= !VAR44;
    if (!VAR7->VAR30 || VAR7->VAR32[VAR7->VAR30] < VAR33 - 1)
    {
        int VAR45 = VAR7->VAR30 ? VAR7->VAR30 - 1 : VAR7->VAR29 - 1;
        int VAR46;
        if (VAR45 >= 0 && VAR45 != VAR7->VAR30)
        {
            if (VAR7->VAR15)
            {
                memcpy(VAR7->VAR36 + VAR7->VAR30, VAR7->VAR36 + VAR45, sizeof(VAR7->VAR36[0]));
            }
            if (VAR7->VAR24)
            {
                memcpy(VAR7->VAR38 + VAR7->VAR30, VAR7->VAR38 + VAR45, sizeof(VAR7->VAR38[0]));
            }
            if (VAR7->VAR43)
            {
                memcpy(VAR7->VAR47 + VAR7->VAR30, VAR7->VAR47 + VAR45, sizeof(VAR7->VAR47[0]));
                memcpy(VAR7->VAR48 + VAR7->VAR30, VAR7->VAR48 + VAR45, sizeof(VAR7->VAR48[0]));
            }
        }
        if (VAR7->VAR15)
        {
            for (VAR46 = 0; VAR46 < VAR7->VAR19; VAR46++)
            {
                if (FUN10(VAR7->VAR36[VAR7->VAR30][VAR46]) > 7 + 8 * VAR7->VAR21)
                {
                    FUN5(VAR3, VAR17, "");
                    goto VAR18;
                }
            }
        }
        if (VAR7->VAR24)
        {
            for (VAR46 = 0; VAR46 < VAR7->VAR19; VAR46++)
            {
                if (VAR7->VAR38[VAR7->VAR30][VAR46] > 7U)
                {
                    FUN5(VAR3, VAR17, "");
                    goto VAR18;
                }
            }
        }
        VAR7->VAR30++;
        VAR7->VAR32[VAR7->VAR30] = VAR33 - 1;
    }
    VAR7->VAR49 = VAR7->VAR50;
    if (!VAR44 && (VAR7->VAR15 || VAR7->VAR24))
        VAR7->VAR50 = (VAR7->VAR15 && VAR7->VAR19 == 34) || (VAR7->VAR24 && VAR7->VAR26 == 34);
    if (!VAR7->VAR43)
    {
        memset(VAR7->VAR47, 0, sizeof(VAR7->VAR47));
        memset(VAR7->VAR48, 0, sizeof(VAR7->VAR48));
    }
    if (VAR11)
        VAR7->VAR51 = 1;
    VAR12 = FUN2(VAR14) - VAR10;
    if (VAR12 <= VAR8)
    {
        FUN11(VAR5, VAR12);
        return VAR12;
    }
    FUN5(VAR3, VAR17, "", VAR8, VAR12);
VAR18:
    VAR7->VAR51 = 0;
    FUN11(VAR5, VAR8);
    memset(VAR7->VAR36, 0, sizeof(VAR7->VAR36));
    memset(VAR7->VAR38, 0, sizeof(VAR7->VAR38));
    memset(VAR7->VAR47, 0, sizeof(VAR7->VAR47));
    memset(VAR7->VAR48, 0, sizeof(VAR7->VAR48));
    return VAR8;
}