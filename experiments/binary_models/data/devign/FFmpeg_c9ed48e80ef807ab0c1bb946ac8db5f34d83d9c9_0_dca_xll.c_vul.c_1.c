int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    struct VAR7
    {
        int VAR8;
        int VAR9[16];
        int VAR10[16];
        int VAR11[16];
        int VAR12[16];
        int VAR13[16];
    } VAR14[16];
    VAR15 *VAR16 = &VAR2->VAR17.VAR16;
    int *VAR18;
    FUN2(&VAR2->VAR19, &VAR2->VAR20, (VAR2->VAR21 + VAR22) * VAR2->VAR23 * sizeof(*VAR2->VAR19));
    if (!VAR2->VAR19)
        return FUN3(VAR24);
    VAR18 = VAR2->VAR19 + VAR2->VAR21 * VAR2->VAR23;
    for (VAR5 = 0; VAR5 < VAR2->VAR25; VAR5++)
    {
        unsigned VAR26;
        for (VAR6 = VAR26 = 0; VAR6 < VAR2->VAR27; VAR6++)
        {
            int VAR28 = FUN4(VAR16) + 8 * VAR2->VAR17.VAR29[0][VAR5][VAR6];
            int VAR30, VAR31;
            struct VAR7 *VAR32 = &VAR14[VAR6];
            int VAR33;
            VAR34 *VAR35 = &VAR2->VAR36[VAR6];
            if (VAR26 >= VAR2->VAR37->VAR38)
                goto VAR39;
            if (VAR2->VAR37->VAR40 != VAR35->VAR41)
            {
                FUN5(VAR2->VAR37, VAR42, "", VAR35->VAR41, VAR2->VAR37->VAR40);
                goto VAR39;
            }
            if (VAR5 != 0)
                VAR33 = FUN6(VAR16, 1);
            else
                VAR33 = 0;
            if (!VAR33)
            {
                int VAR43, VAR30;
                unsigned VAR44;
                VAR32->VAR8 = FUN6(VAR16, 1);
                VAR43 = VAR32->VAR8 ? 1 : VAR35->VAR38;
                if (VAR35->VAR45 > 16)
                {
                    VAR44 = 5;
                }
                else
                {
                    if (VAR35->VAR45 > 8)
                        VAR44 = 4;
                    else
                        VAR44 = 3;
                    if (VAR2->VAR27 > 1)
                        VAR44++;
                }
                for (VAR30 = 0; VAR30 < VAR43; VAR30++)
                {
                    VAR32->VAR9[VAR30] = FUN6(VAR16, 1);
                    if (!VAR32->VAR8 && VAR32->VAR9[VAR30] && FUN6(VAR16, 1))
                        VAR32->VAR10[VAR30] = FUN6(VAR16, VAR44) + 1;
                    else
                        VAR32->VAR10[VAR30] = 0;
                }
                for (VAR30 = 0; VAR30 < VAR43; VAR30++)
                {
                    if (!VAR5)
                    {
                        VAR32->VAR11[VAR30] = FUN6(VAR16, VAR44);
                        if (VAR32->VAR9[VAR30] == 0 && VAR32->VAR11[VAR30] > 0)
                            VAR32->VAR11[VAR30]++;
                        if (VAR32->VAR8 == 0)
                            VAR32->VAR13[VAR30] = VAR35->VAR46[0][VAR30];
                        else
                            VAR32->VAR13[VAR30] = VAR35->VAR47[0];
                    }
                    else
                        VAR32->VAR13[VAR30] = 0;
                    VAR32->VAR12[VAR30] = FUN6(VAR16, VAR44);
                    if (VAR32->VAR9[VAR30] == 0 && VAR32->VAR12[VAR30] > 0)
                        VAR32->VAR12[VAR30]++;
                }
            }
            for (VAR30 = 0; VAR30 < VAR35->VAR38; VAR30++)
            {
                int VAR48 = VAR32->VAR8 ? 0 : VAR30;
                int VAR49 = VAR32->VAR11[VAR48];
                int VAR50 = VAR32->VAR13[VAR48];
                int *VAR51 = VAR2->VAR19 + (VAR26 + VAR30) * VAR2->VAR21;
                if (!VAR32->VAR9[VAR48])
                {
                    if (VAR49)
                        for (VAR31 = 0; VAR31 < VAR50; VAR31++)
                            VAR51[VAR31] = FUN7(VAR16, VAR49);
                    else
                        memset(VAR51, 0, VAR50 * sizeof(VAR51[0]));
                    VAR49 = VAR32->VAR12[VAR48];
                    if (VAR49)
                        for (VAR31 = VAR50; VAR31 < VAR2->VAR21; VAR31++)
                            VAR51[VAR31] = FUN7(VAR16, VAR49);
                    else
                        memset(VAR51 + VAR50, 0, (VAR2->VAR21 - VAR50) * sizeof(VAR51[0]));
                }
                else
                {
                    int VAR52 = VAR32->VAR10[VAR48];
                    for (VAR31 = 0; VAR31 < VAR50; VAR31++)
                    {
                        int VAR53 = FUN8(VAR16, 1, 33) << VAR49;
                        if (VAR49)
                            VAR53 |= FUN6(VAR16, VAR49);
                        VAR51[VAR31] = (VAR53 & 1) ? -(VAR53 >> 1) - 1 : (VAR53 >> 1);
                    }
                    VAR49 = VAR32->VAR12[VAR48];
                    memset(VAR51 + VAR50, 0, (VAR2->VAR21 - VAR50) * sizeof(VAR51[0]));
                    if (VAR52 > 0)
                    {
                        int VAR54 = FUN6(VAR16, VAR2->VAR55);
                        FUN5(VAR2->VAR37, VAR56, "", VAR54, VAR2->VAR55);
                        for (VAR31 = 0; VAR31 < VAR54; VAR31++)
                            VAR51[FUN6(VAR16, VAR2->VAR55)] = 1;
                    }
                    for (VAR31 = VAR50; VAR31 < VAR2->VAR21; VAR31++)
                    {
                        if (!VAR51[VAR31])
                        {
                            int VAR53 = FUN8(VAR16, 1, 33);
                            if (VAR49)
                                VAR53 = (VAR53 << VAR49) | FUN6(VAR16, VAR49);
                            VAR51[VAR31] = (VAR53 & 1) ? -(VAR53 >> 1) - 1 : (VAR53 >> 1);
                        }
                        else
                            VAR51[VAR31] = FUN7(VAR16, VAR52);
                    }
                }
            }
            for (VAR30 = 0; VAR30 < VAR35->VAR38; VAR30++)
            {
                unsigned VAR46 = VAR35->VAR46[0][VAR30];
                int *VAR51 = VAR2->VAR19 + (VAR26 + VAR30) * VAR2->VAR21;
                int *VAR57 = VAR18 + (VAR26 + VAR30) * VAR22;
                if (!VAR46)
                {
                    unsigned VAR58;
                    for (VAR58 = VAR35->VAR59[0][VAR30]; VAR58 > 0; VAR58--)
                    {
                        unsigned VAR31;
                        for (VAR31 = 1; VAR31 < VAR2->VAR21; VAR31++)
                            VAR51[VAR31] += VAR51[VAR31 - 1];
                    }
                }
                else
                    FUN9(VAR51, VAR2->VAR21, VAR46, VAR5 ? VAR57 : NULL, VAR35->VAR60[0][VAR30]);
                memcpy(VAR57, VAR51 + VAR2->VAR21 - VAR22, VAR22 * sizeof(*VAR57));
            }
            for (VAR30 = 1; VAR30 < VAR35->VAR38; VAR30 += 2)
            {
                int VAR61 = VAR35->VAR62[0][VAR30 / 2];
                if (VAR61 != 0)
                {
                    int *VAR51 = VAR2->VAR19 + (VAR26 + VAR30) * VAR2->VAR21;
                    int *VAR57 = VAR51 - VAR2->VAR21;
                    unsigned VAR31;
                    for (VAR31 = 0; VAR31 < VAR2->VAR21; VAR31++)
                        VAR51[VAR31] += ((VAR63)VAR61 * VAR57[VAR31] + 4) >> 3;
                }
            }
            if (VAR2->VAR64)
            {
                int VAR65 = VAR28 - 8 * VAR35->VAR66[0] - 8 * (VAR2->VAR67 & 2);
                int VAR68;
                VAR30 = FUN4(VAR16);
                if (VAR30 > VAR65)
                {
                    FUN5(VAR2->VAR37, VAR69, "", VAR28, VAR65, VAR30);
                    return VAR70;
                }
                if (VAR30 < VAR65)
                    FUN10(VAR16, VAR65 - VAR30);
                for (VAR30 = VAR68 = 0; VAR30 < VAR35->VAR38; VAR30++)
                {
                    int VAR49 = VAR35->VAR71[0][VAR30];
                    if (VAR49 > 0)
                    {
                        unsigned VAR72 = VAR35->VAR73[0][VAR30];
                        int *VAR51 = VAR2->VAR19 + (VAR26 + VAR72) * VAR2->VAR21;
                        int VAR74 = VAR35->VAR75[0][VAR30];
                        int VAR76 = VAR49;
                        unsigned VAR31;
                        if (VAR74 > 0)
                            VAR76 += VAR74 - 1;
                        for (VAR31 = 0; VAR31 < VAR2->VAR21; VAR31++)
                            VAR51[VAR31] = (VAR51[VAR31] << VAR76) + (FUN6(VAR16, VAR49) << VAR74);
                        VAR68 += VAR49 * VAR2->VAR21;
                    }
                }
                if (VAR68 > 8 * VAR35->VAR66[0])
                {
                    FUN5(VAR2->VAR37, VAR69, "");
                    return VAR70;
                }
            }
            for (VAR30 = 0; VAR30 < VAR35->VAR38; VAR30++)
            {
                int *VAR51 = VAR2->VAR19 + (VAR26 + VAR30) * VAR2->VAR21;
                int VAR77 = 1 - VAR35->VAR78;
                int VAR79 = VAR35->VAR80[0][VAR30];
                float *VAR81;
                if (VAR35->VAR82 && (VAR35->VAR83 & 7) == 7 && VAR79 < 3)
                    VAR79 = VAR79 ? VAR79 - 1 : 2;
                VAR79 += VAR26;
                if (VAR79 >= VAR2->VAR37->VAR38)
                    continue;
                VAR81 = (float *)VAR4->VAR84[VAR79];
                VAR81 += VAR5 * VAR2->VAR21;
                if ((VAR35->VAR85 >> VAR30) & 1)
                {
                    for (VAR31 = 0; VAR31 < VAR2->VAR21; VAR31++)
                        VAR81[VAR31] = FUN11(VAR51[VAR31], VAR77);
                }
                else
                {
                    for (VAR31 = 0; VAR31 < VAR2->VAR21; VAR31++)
                        VAR81[VAR31] += FUN11(VAR51[VAR31], VAR77);
                }
            }
            if (VAR35->VAR86 && !VAR35->VAR87 && VAR35->VAR88)
            {
                unsigned VAR89;
                for (VAR89 = 0; VAR89 < VAR26; VAR89++)
                {
                    float *VAR90;
                    const int *VAR91;
                    float VAR61;
                    unsigned VAR92;
                    if (VAR35->VAR82 && (VAR35->VAR83 & 7) == 7 && VAR89 < 3)
                        VAR90 = (float *)VAR4->VAR84[VAR89 ? VAR89 - 1 : 2];
                    else
                        VAR90 = (float *)VAR4->VAR84[VAR89];
                    VAR90 += VAR5 * VAR2->VAR21;
                    VAR91 = &VAR35->VAR93[VAR89 * (VAR35->VAR38 + 1)];
                    VAR61 = FUN11(VAR91[0], -16);
                    for (VAR31 = 0; VAR31 < VAR2->VAR21; VAR31++)
                        VAR90[VAR31] *= VAR61;
                    for (VAR92 = 0; VAR92 < VAR35->VAR38 && VAR26 + VAR92 < VAR2->VAR37->VAR38; VAR92++)
                        if (VAR91[VAR92 + 1])
                        {
                            const float *VAR94 = (const float *)VAR4->VAR84[VAR26 + VAR92];
                            VAR94 += VAR5 * VAR2->VAR21;
                            VAR61 = FUN11(VAR91[VAR92 + 1], -15);
                            for (VAR31 = 0; VAR31 < VAR2->VAR21; VAR31++)
                                VAR90[VAR31] -= VAR61 * VAR94[VAR31];
                        }
                }
            }
        VAR39:
            VAR26 += VAR35->VAR38;
            VAR30 = FUN4(VAR16);
            if (VAR30 > VAR28)
            {
                FUN5(VAR2->VAR37, VAR69, "");
                return VAR70;
            }
            if (VAR30 < VAR28)
                FUN10(VAR16, VAR28 - VAR30);
        }
    }
    return 0;
}