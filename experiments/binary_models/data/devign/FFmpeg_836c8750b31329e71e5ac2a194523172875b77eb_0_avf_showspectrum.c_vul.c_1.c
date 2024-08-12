static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    VAR1 *VAR9 = VAR4->VAR10[0];
    int VAR11;
    VAR11 = FUN2(VAR9);
    if (VAR11 == VAR12 && VAR7->VAR13)
    {
        int VAR14 = FUN3(VAR7->VAR15);
        int VAR16 = 0;
        int VAR17, VAR18 = 0, VAR19 = VAR7->VAR20 == VAR21 ? VAR7->VAR22 : VAR7->VAR23;
        int VAR24, VAR25, VAR26;
        VAR27 *VAR28;
        VAR25 = VAR7->VAR29 * (VAR14 / ((VAR7->VAR29 * VAR19) * FUN4(VAR14 / (float)(VAR7->VAR29 * VAR19))));
        VAR26 = (VAR14 / (VAR25 * VAR19)) * VAR25;
        VAR28 = FUN5(VAR9, VAR7->VAR29);
        if (!VAR28)
            return FUN6(VAR30);
        while (VAR18 < VAR19)
        {
            VAR11 = FUN7(VAR7->VAR15, (void **)VAR28->VAR31, VAR7->VAR29);
            if (VAR11 < 0)
            {
                FUN8(&VAR28);
                return VAR11;
            }
            FUN9(VAR7->VAR15, VAR25);
            if (VAR11 < VAR7->VAR29)
            {
                for (VAR24 = 0; VAR24 < VAR7->VAR32; VAR24++)
                {
                    memset(VAR28->VAR31[VAR24] + VAR11 * sizeof(float), 0, (VAR7->VAR29 - VAR11) * sizeof(float));
                }
            }
            VAR4->VAR33->FUN10(VAR4, VAR34, VAR28, NULL, VAR7->VAR32);
            FUN11(VAR7);
            VAR16 += VAR25;
            if (VAR16 >= VAR26)
            {
                int VAR23 = VAR7->VAR20 == VAR21 ? VAR7->VAR23 : VAR7->VAR22;
                FUN12(VAR7, 1. / (VAR16 / VAR25));
                FUN13(VAR9, VAR28);
                VAR16 = 0;
                VAR18++;
                for (VAR24 = 0; VAR24 < VAR7->VAR32; VAR24++)
                    memset(VAR7->VAR35[VAR24], 0, VAR23 * sizeof(float));
            }
        }
        FUN8(&VAR28);
        VAR7->VAR13->VAR36 = 0;
        if (VAR7->VAR37)
        {
            int VAR38 = (VAR7->VAR39 == VAR40 && VAR7->VAR41 == VAR42);
            float VAR43 = VAR14 / (float)VAR19;
            VAR44 *VAR45;
            FUN14(VAR7->VAR13, 2, VAR2->VAR23 - 10, "", 0);
            VAR45 = VAR7->VAR13->VAR46[0] + (VAR7->VAR47 - 1) * VAR7->VAR13->VAR48[0] + VAR7->VAR49 - 1;
            for (VAR18 = 0; VAR18 < VAR7->VAR22 + 1; VAR18++)
                VAR45[VAR18] = 200;
            VAR45 = VAR7->VAR13->VAR46[0] + (VAR7->VAR47 + VAR7->VAR23) * VAR7->VAR13->VAR48[0] + VAR7->VAR49 - 1;
            for (VAR18 = 0; VAR18 < VAR7->VAR22 + 1; VAR18++)
                VAR45[VAR18] = 200;
            for (VAR17 = 0; VAR17 < VAR7->VAR23 + 2; VAR17++)
            {
                VAR45 = VAR7->VAR13->VAR46[0] + (VAR17 + VAR7->VAR47 - 1) * VAR7->VAR13->VAR48[0];
                VAR45[VAR7->VAR49 - 1] = 200;
                VAR45[VAR7->VAR49 + VAR7->VAR22] = 200;
            }
            if (VAR7->VAR20 == VAR21)
            {
                int VAR23 = VAR7->VAR39 == VAR40 ? VAR7->VAR23 / VAR7->VAR32 : VAR7->VAR23;
                for (VAR24 = 0; VAR24 < (VAR7->VAR39 == VAR40 ? VAR7->VAR32 : 1); VAR24++)
                {
                    for (VAR17 = 0; VAR17 < VAR23; VAR17 += 20)
                    {
                        VAR45 = VAR7->VAR13->VAR46[0] + (VAR7->VAR47 + VAR23 * (VAR24 + 1) - VAR17 - 1) * VAR7->VAR13->VAR48[0];
                        VAR45[VAR7->VAR49 - 2] = 200;
                        VAR45[VAR7->VAR49 + VAR7->VAR22 + 1] = 200;
                    }
                    for (VAR17 = 0; VAR17 < VAR23; VAR17 += 40)
                    {
                        VAR45 = VAR7->VAR13->VAR46[0] + (VAR7->VAR47 + VAR23 * (VAR24 + 1) - VAR17 - 1) * VAR7->VAR13->VAR48[0];
                        VAR45[VAR7->VAR49 - 3] = 200;
                        VAR45[VAR7->VAR49 + VAR7->VAR22 + 2] = 200;
                    }
                    VAR45 = VAR7->VAR13->VAR46[0] + (VAR7->VAR47 - 2) * VAR7->VAR13->VAR48[0] + VAR7->VAR49;
                    for (VAR18 = 0; VAR18 < VAR7->VAR22; VAR18 += 40)
                        VAR45[VAR18] = 200;
                    VAR45 = VAR7->VAR13->VAR46[0] + (VAR7->VAR47 - 3) * VAR7->VAR13->VAR48[0] + VAR7->VAR49;
                    for (VAR18 = 0; VAR18 < VAR7->VAR22; VAR18 += 80)
                        VAR45[VAR18] = 200;
                    VAR45 = VAR7->VAR13->VAR46[0] + (VAR7->VAR23 + VAR7->VAR47 + 1) * VAR7->VAR13->VAR48[0] + VAR7->VAR49;
                    for (VAR18 = 0; VAR18 < VAR7->VAR22; VAR18 += 40)
                    {
                        VAR45[VAR18] = 200;
                    }
                    VAR45 = VAR7->VAR13->VAR46[0] + (VAR7->VAR23 + VAR7->VAR47 + 2) * VAR7->VAR13->VAR48[0] + VAR7->VAR49;
                    for (VAR18 = 0; VAR18 < VAR7->VAR22; VAR18 += 80)
                    {
                        VAR45[VAR18] = 200;
                    }
                    for (VAR17 = 0; VAR17 < VAR23; VAR17 += 40)
                    {
                        float VAR50 = VAR17 * (VAR9->VAR51 / 2) / (float)(1 << (int)FUN4(FUN15(VAR23)));
                        char *VAR52;
                        if (VAR50 == 0)
                            VAR52 = FUN16("");
                        else
                            VAR52 = FUN16("", VAR50);
                        if (!VAR52)
                            return FUN6(VAR30);
                        FUN14(VAR7->VAR13, VAR7->VAR49 - 8 * strlen(VAR52) - 4, VAR23 * (VAR24 + 1) + VAR7->VAR47 - VAR17 - 4, VAR52, 0);
                        FUN17(VAR52);
                    }
                }
                for (VAR18 = 0; VAR18 < VAR7->VAR22; VAR18 += 80)
                {
                    float VAR53 = VAR18 * VAR43 / VAR9->VAR51;
                    char *VAR52;
                    if (VAR18 == 0)
                        VAR52 = FUN16("");
                    else if (FUN18(VAR53) > 6)
                        VAR52 = FUN16("", VAR53 / (60 * 60));
                    else if (FUN18(VAR53) > 3)
                        VAR52 = FUN16("", VAR53 / 60);
                    else
                        VAR52 = FUN16("", VAR53);
                    if (!VAR52)
                        return FUN6(VAR30);
                    FUN14(VAR7->VAR13, VAR7->VAR49 + VAR18 - 4 * strlen(VAR52), VAR7->VAR23 + VAR7->VAR47 + 6, VAR52, 0);
                    FUN14(VAR7->VAR13, VAR7->VAR49 + VAR18 - 4 * strlen(VAR52), VAR7->VAR47 - 12, VAR52, 0);
                    FUN17(VAR52);
                }
                FUN14(VAR7->VAR13, VAR2->VAR22 / 2 - 4 * 4, VAR2->VAR23 - VAR7->VAR47 / 2, "", 0);
                FUN14(VAR7->VAR13, VAR7->VAR49 / 7, VAR2->VAR23 / 2 - 14 * 4, "", 1);
            }
            else
            {
                int VAR22 = VAR7->VAR39 == VAR40 ? VAR7->VAR22 / VAR7->VAR32 : VAR7->VAR22;
                for (VAR17 = 0; VAR17 < VAR7->VAR23; VAR17 += 20)
                {
                    VAR45 = VAR7->VAR13->VAR46[0] + (VAR7->VAR47 + VAR17) * VAR7->VAR13->VAR48[0];
                    VAR45[VAR7->VAR49 - 2] = 200;
                    VAR45[VAR7->VAR49 + VAR7->VAR22 + 1] = 200;
                }
                for (VAR17 = 0; VAR17 < VAR7->VAR23; VAR17 += 40)
                {
                    VAR45 = VAR7->VAR13->VAR46[0] + (VAR7->VAR47 + VAR17) * VAR7->VAR13->VAR48[0];
                    VAR45[VAR7->VAR49 - 3] = 200;
                    VAR45[VAR7->VAR49 + VAR7->VAR22 + 2] = 200;
                }
                for (VAR24 = 0; VAR24 < (VAR7->VAR39 == VAR40 ? VAR7->VAR32 : 1); VAR24++)
                {
                    VAR45 = VAR7->VAR13->VAR46[0] + (VAR7->VAR47 - 2) * VAR7->VAR13->VAR48[0] + VAR7->VAR49 + VAR22 * VAR24;
                    for (VAR18 = 0; VAR18 < VAR22; VAR18 += 40)
                        VAR45[VAR18] = 200;
                    VAR45 = VAR7->VAR13->VAR46[0] + (VAR7->VAR47 - 3) * VAR7->VAR13->VAR48[0] + VAR7->VAR49 + VAR22 * VAR24;
                    for (VAR18 = 0; VAR18 < VAR22; VAR18 += 80)
                        VAR45[VAR18] = 200;
                    VAR45 = VAR7->VAR13->VAR46[0] + (VAR7->VAR23 + VAR7->VAR47 + 1) * VAR7->VAR13->VAR48[0] + VAR7->VAR49 + VAR22 * VAR24;
                    for (VAR18 = 0; VAR18 < VAR22; VAR18 += 40)
                    {
                        VAR45[VAR18] = 200;
                    }
                    VAR45 = VAR7->VAR13->VAR46[0] + (VAR7->VAR23 + VAR7->VAR47 + 2) * VAR7->VAR13->VAR48[0] + VAR7->VAR49 + VAR22 * VAR24;
                    for (VAR18 = 0; VAR18 < VAR22; VAR18 += 80)
                    {
                        VAR45[VAR18] = 200;
                    }
                    for (VAR18 = 0; VAR18 < VAR22; VAR18 += 80)
                    {
                        float VAR50 = VAR18 * (VAR9->VAR51 / 2) / (float)(1 << (int)FUN4(FUN15(VAR22)));
                        char *VAR52;
                        if (VAR50 == 0)
                            VAR52 = FUN16("");
                        else
                            VAR52 = FUN16("", VAR50);
                        if (!VAR52)
                            return FUN6(VAR30);
                        FUN14(VAR7->VAR13, VAR7->VAR49 - 4 * strlen(VAR52) + VAR18 + VAR22 * VAR24, VAR7->VAR47 - 12, VAR52, 0);
                        FUN14(VAR7->VAR13, VAR7->VAR49 - 4 * strlen(VAR52) + VAR18 + VAR22 * VAR24, VAR7->VAR23 + VAR7->VAR47 + 6, VAR52, 0);
                        FUN17(VAR52);
                    }
                }
                for (VAR17 = 0; VAR17 < VAR7->VAR23; VAR17 += 40)
                {
                    float VAR53 = VAR17 * VAR43 / VAR9->VAR51;
                    char *VAR52;
                    if (VAR18 == 0)
                        VAR52 = FUN16("");
                    else if (FUN18(VAR53) > 6)
                        VAR52 = FUN16("", VAR53 / (60 * 60));
                    else if (FUN18(VAR53) > 3)
                        VAR52 = FUN16("", VAR53 / 60);
                    else
                        VAR52 = FUN16("", VAR53);
                    if (!VAR52)
                        return FUN6(VAR30);
                    FUN14(VAR7->VAR13, VAR7->VAR49 - 8 * strlen(VAR52) - 4, VAR7->VAR47 + VAR17 - 4, VAR52, 0);
                    FUN17(VAR52);
                }
                FUN14(VAR7->VAR13, VAR7->VAR49 / 7, VAR2->VAR23 / 2 - 4 * 4, "", 1);
                FUN14(VAR7->VAR13, VAR2->VAR22 / 2 - 14 * 4, VAR2->VAR23 - VAR7->VAR47 / 2, "", 0);
            }
            for (VAR24 = 0; VAR24 < (VAR38 ? VAR7->VAR32 : 1); VAR24++)
            {
                int VAR23 = VAR38 ? VAR7->VAR23 / VAR7->VAR32 : VAR7->VAR23;
                for (VAR17 = 0; VAR17 < VAR23; VAR17++)
                {
                    float VAR54[3] = {0., 127.5, 127.5};
                    int VAR55;
                    for (VAR55 = 0; VAR55 < (VAR7->VAR39 == VAR40 ? 1 : VAR7->VAR32); VAR55++)
                    {
                        float VAR56, VAR57, VAR58;
                        int VAR59 = (VAR38) ? VAR7->VAR32 - VAR24 - 1 : VAR55;
                        float VAR60[3];
                        FUN19(VAR7, VAR59, &VAR56, &VAR57, &VAR58);
                        FUN20(VAR7, VAR56, VAR57, VAR58, VAR17 / (float)VAR23, VAR60);
                        VAR54[0] += VAR60[0];
                        VAR54[1] += VAR60[1];
                        VAR54[2] += VAR60[2];
                    }
                    memset(VAR7->VAR13->VAR46[0] + (VAR7->VAR47 + VAR23 * (VAR24 + 1) - VAR17 - 1) * VAR7->VAR13->VAR48[0] + VAR7->VAR22 + VAR7->VAR49 + 20, FUN21(VAR54[0]), 10);
                    memset(VAR7->VAR13->VAR46[1] + (VAR7->VAR47 + VAR23 * (VAR24 + 1) - VAR17 - 1) * VAR7->VAR13->VAR48[1] + VAR7->VAR22 + VAR7->VAR49 + 20, FUN21(VAR54[1]), 10);
                    memset(VAR7->VAR13->VAR46[2] + (VAR7->VAR47 + VAR23 * (VAR24 + 1) - VAR17 - 1) * VAR7->VAR13->VAR48[2] + VAR7->VAR22 + VAR7->VAR49 + 20, FUN21(VAR54[2]), 10);
                }
                for (VAR17 = 0; VAR24 == 0 && VAR17 < VAR23; VAR17 += VAR23 / 10)
                {
                    float VAR61 = 120.0 * FUN18(1. - VAR17 / (float)VAR23);
                    char *VAR62;
                    if (VAR61 < -120)
                        break;
                    VAR62 = FUN16("", VAR61);
                    if (!VAR62)
                        continue;
                    FUN14(VAR7->VAR13, VAR7->VAR22 + VAR7->VAR49 + 35, VAR7->VAR47 + VAR17 - 5, VAR62, 0);
                    FUN17(VAR62);
                }
            }
        }
        VAR11 = FUN22(VAR2, VAR7->VAR13);
        VAR7->VAR13 = NULL;
    }
    return VAR11;
}