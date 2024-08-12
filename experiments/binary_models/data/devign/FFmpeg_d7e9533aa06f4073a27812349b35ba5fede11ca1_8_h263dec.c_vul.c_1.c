static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    VAR12 *VAR13 = VAR3;
    FUN2("", VAR2->VAR14, VAR7);
    FUN2("", VAR6[0], VAR6[1], VAR6[2], VAR6[3]);
    if (VAR7 == 0)
    {
        *VAR4 = 0;
        return 0;
    }
    if (VAR9->VAR15)
        FUN3(&VAR9->VAR16, VAR9->VAR17, VAR9->VAR15);
    else
        FUN3(&VAR9->VAR16, VAR6, VAR7);
    if (VAR9->VAR18)
    {
        VAR11 = FUN4(VAR9);
    }
    else if (VAR9->VAR19)
    {
        VAR11 = FUN5(VAR9);
        VAR9->VAR20 = !VAR9->VAR21;
    }
    else if (VAR9->VAR22)
    {
        VAR11 = FUN6(VAR9);
    }
    else
    {
        VAR11 = FUN7(VAR9);
    }
    if (!VAR9->VAR23)
    {
        VAR2->VAR24 = VAR9->VAR24;
        VAR2->VAR25 = VAR9->VAR25;
        VAR2->VAR26 = VAR9->VAR26;
        if (FUN8(VAR9) < 0)
            return -1;
    }
    else if (VAR9->VAR24 != VAR2->VAR24 || VAR9->VAR25 != VAR2->VAR25)
    {
        FUN9(VAR9);
        if (FUN8(VAR9) < 0)
            return -1;
    }
    if (VAR11 == VAR27)
        return 0;
    if (VAR11 < 0)
        return -1;
    if (VAR9->VAR28 < 2 && VAR9->VAR29 == VAR30)
        return 0;
    FUN10(VAR9);
    FUN2("", VAR9->VAR31);
    VAR9->VAR32[0] = VAR9->VAR32[1] = VAR9->VAR32[2] = VAR9->VAR32[3] = VAR9->VAR33 * 2 + 2;
    VAR9->VAR32[4] = VAR9->VAR32[5] = VAR9->VAR33 + 2;
    for (VAR9->VAR34 = 0; VAR9->VAR34 < VAR9->VAR35; VAR9->VAR34++)
    {
        if (VAR9->VAR34 && !VAR9->VAR19)
        {
            VAR9->VAR36 = FUN11(VAR9);
        }
        VAR9->VAR37[0] = VAR9->VAR32[0] * (VAR9->VAR34 * 2 + 1) - 1;
        VAR9->VAR37[1] = VAR9->VAR32[0] * (VAR9->VAR34 * 2 + 1);
        VAR9->VAR37[2] = VAR9->VAR32[0] * (VAR9->VAR34 * 2 + 2) - 1;
        VAR9->VAR37[3] = VAR9->VAR32[0] * (VAR9->VAR34 * 2 + 2);
        VAR9->VAR37[4] = VAR9->VAR32[4] * (VAR9->VAR34 + 1) + VAR9->VAR32[0] * (VAR9->VAR35 * 2 + 2);
        VAR9->VAR37[5] = VAR9->VAR32[4] * (VAR9->VAR34 + 1 + VAR9->VAR35 + 2) + VAR9->VAR32[0] * (VAR9->VAR35 * 2 + 2);
        for (VAR9->VAR38 = 0; VAR9->VAR38 < VAR9->VAR33; VAR9->VAR38++)
        {
            VAR9->VAR37[0] += 2;
            VAR9->VAR37[1] += 2;
            VAR9->VAR37[2] += 2;
            VAR9->VAR37[3] += 2;
            VAR9->VAR37[4]++;
            VAR9->VAR37[5]++;
            FUN2("", VAR9->VAR38, VAR9->VAR34);
            if (VAR9->VAR18)
            {
                FUN12(VAR9);
            }
            else if (VAR9->VAR19)
            {
                FUN13(VAR9);
            }
            else
            {
                VAR9->VAR39 = 8;
                VAR9->VAR40 = 8;
            }
            FUN14(VAR9->VAR41[0]);
            VAR9->VAR42 = VAR43;
            VAR9->VAR44 = VAR45;
            if (VAR9->VAR18)
            {
                if (FUN15(VAR9, VAR9->VAR41) < 0)
                {
                    fprintf(VAR46, "", (VAR9->VAR34 * VAR9->VAR33) + VAR9->VAR38);
                    return -1;
                }
            }
            else
            {
                if (FUN16(VAR9, VAR9->VAR41) < 0)
                {
                    fprintf(VAR46, "", (VAR9->VAR34 * VAR9->VAR33) + VAR9->VAR38);
                    return -1;
                }
            }
            FUN17(VAR9, VAR9->VAR41);
        }
        if (VAR2->VAR47 && (VAR9->VAR28 >= 1 || (!VAR9->VAR20)))
        {
            VAR5 *VAR48[3];
            int VAR49, VAR50, VAR51;
            VAR49 = VAR9->VAR34 * 16;
            VAR50 = VAR9->VAR25 - VAR49;
            if (VAR50 > 16)
                VAR50 = 16;
            VAR51 = VAR49 * VAR9->VAR52;
            if (VAR9->VAR29 == VAR30 || (!VAR9->VAR20))
            {
                VAR48[0] = VAR9->VAR53[0] + VAR51;
                VAR48[1] = VAR9->VAR53[1] + (VAR51 >> 2);
                VAR48[2] = VAR9->VAR53[2] + (VAR51 >> 2);
            }
            else
            {
                VAR48[0] = VAR9->VAR54[0] + VAR51;
                VAR48[1] = VAR9->VAR54[1] + (VAR51 >> 2);
                VAR48[2] = VAR9->VAR54[2] + (VAR51 >> 2);
            }
            VAR2->FUN18(VAR2, VAR48, VAR9->VAR52, VAR49, VAR9->VAR24, VAR50);
        }
    }
    if (VAR9->VAR18 && VAR9->VAR55 < 4 && VAR9->VAR29 == VAR56)
        if (FUN19(VAR9, VAR7) < 0)
            return -1;
    if (VAR9->VAR19 && VAR9->VAR15 == 0)
    {
        int VAR57 = FUN20(&VAR9->VAR16) / 8;
        if (VAR7 - VAR57 > 5 && VAR7 - VAR57 < VAR58)
        {
            memcpy(VAR9->VAR17, VAR6 + VAR57, VAR7 - VAR57);
            VAR9->VAR15 = VAR7 - VAR57;
        }
    }
    else
        VAR9->VAR15 = 0;
    FUN21(VAR9);
    if (VAR9->VAR29 == VAR30 || (!VAR9->VAR20))
    {
        VAR13->VAR3[0] = VAR9->VAR53[0];
        VAR13->VAR3[1] = VAR9->VAR53[1];
        VAR13->VAR3[2] = VAR9->VAR53[2];
    }
    else
    {
        VAR13->VAR3[0] = VAR9->VAR54[0];
        VAR13->VAR3[1] = VAR9->VAR54[1];
        VAR13->VAR3[2] = VAR9->VAR54[2];
    }
    VAR13->VAR52[0] = VAR9->VAR52;
    VAR13->VAR52[1] = VAR9->VAR52 / 2;
    VAR13->VAR52[2] = VAR9->VAR52 / 2;
    VAR2->VAR59 = VAR9->VAR31;
    VAR2->VAR14 = VAR9->VAR60 - 1;
    if (VAR9->VAR28 >= 2 || (!VAR9->VAR20))
        *VAR4 = sizeof(VAR12);
    return VAR7;
}