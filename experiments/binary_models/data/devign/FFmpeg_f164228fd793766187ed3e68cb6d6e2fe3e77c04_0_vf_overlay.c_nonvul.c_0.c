static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    const int VAR17 = VAR5->VAR18->VAR19;
    const int VAR20 = VAR5->VAR18->VAR21;
    const int VAR22 = VAR4->VAR18->VAR19;
    const int VAR23 = VAR4->VAR18->VAR21;
    if (VAR6 >= VAR22 || VAR6 + VAR22 < 0 || VAR7 >= VAR23 || VAR7 + VAR23 < 0)
        return;
    if (VAR9->VAR24)
    {
        uint8_t VAR25;
        const int VAR26 = VAR9->VAR27[VAR28];
        const int VAR29 = VAR9->VAR27[VAR30];
        const int VAR31 = VAR9->VAR27[VAR32];
        const int VAR33 = VAR9->VAR27[VAR34];
        const int VAR35 = VAR9->VAR36[0];
        const int VAR37 = VAR9->VAR38[VAR28];
        const int VAR39 = VAR9->VAR38[VAR30];
        const int VAR40 = VAR9->VAR38[VAR32];
        const int VAR41 = VAR9->VAR38[VAR34];
        const int VAR42 = VAR9->VAR43[0];
        const int VAR44 = VAR9->VAR44;
        VAR45 *VAR46, *VAR47, *VAR48, *VAR49;
        VAR11 = FUN2(-VAR7, 0);
        VAR47 = VAR5->VAR50[0] + VAR11 * VAR5->VAR51[0];
        VAR49 = VAR4->VAR50[0] + (VAR7 + VAR11) * VAR4->VAR51[0];
        for (VAR12 = FUN3(-VAR7 + VAR23, VAR20); VAR11 < VAR12; VAR11++)
        {
            VAR13 = FUN2(-VAR6, 0);
            VAR46 = VAR47 + VAR13 * VAR42;
            VAR48 = VAR49 + (VAR6 + VAR13) * VAR35;
            for (VAR14 = FUN3(-VAR6 + VAR22, VAR17); VAR13 < VAR14; VAR13++)
            {
                VAR25 = VAR46[VAR41];
                if (VAR44 && VAR25 != 0 && VAR25 != 255)
                {
                    uint8_t VAR52 = VAR48[VAR33];
                    VAR25 = FUN4(VAR25, VAR52);
                }
                switch (VAR25)
                {
                case 0:
                    break;
                case 255:
                    VAR48[VAR26] = VAR46[VAR37];
                    VAR48[VAR29] = VAR46[VAR39];
                    VAR48[VAR31] = VAR46[VAR40];
                    break;
                default:
                    VAR48[VAR26] = FUN5(VAR48[VAR26] * (255 - VAR25) + VAR46[VAR37] * VAR25);
                    VAR48[VAR29] = FUN5(VAR48[VAR29] * (255 - VAR25) + VAR46[VAR39] * VAR25);
                    VAR48[VAR31] = FUN5(VAR48[VAR31] * (255 - VAR25) + VAR46[VAR40] * VAR25);
                }
                if (VAR44)
                {
                    switch (VAR25)
                    {
                    case 0:
                        break;
                    case 255:
                        VAR48[VAR33] = VAR46[VAR41];
                        break;
                    default:
                        VAR48[VAR33] += FUN5((255 - VAR48[VAR33]) * VAR46[VAR41]);
                    }
                }
                VAR48 += VAR35;
                VAR46 += VAR42;
            }
            VAR49 += VAR4->VAR51[0];
            VAR47 += VAR5->VAR51[0];
        }
    }
    else
    {
        const int VAR44 = VAR9->VAR44;
        if (VAR44)
        {
            uint8_t VAR25;
            VAR45 *VAR46, *VAR41, *VAR48, *VAR33;
            VAR11 = FUN2(-VAR7, 0);
            VAR41 = VAR5->VAR50[3] + VAR11 * VAR5->VAR51[3];
            VAR33 = VAR4->VAR50[3] + (VAR7 + VAR11) * VAR4->VAR51[3];
            for (VAR12 = FUN3(-VAR7 + VAR23, VAR20); VAR11 < VAR12; VAR11++)
            {
                VAR13 = FUN2(-VAR6, 0);
                VAR46 = VAR41 + VAR13;
                VAR48 = VAR33 + VAR6 + VAR13;
                for (VAR14 = FUN3(-VAR6 + VAR22, VAR17); VAR13 < VAR14; VAR13++)
                {
                    VAR25 = *VAR46;
                    if (VAR25 != 0 && VAR25 != 255)
                    {
                        uint8_t VAR52 = *VAR48;
                        VAR25 = FUN4(VAR25, VAR52);
                    }
                    switch (VAR25)
                    {
                    case 0:
                        break;
                    case 255:
                        *VAR48 = *VAR46;
                        break;
                    default:
                        *VAR48 += FUN5((255 - *VAR48) * *VAR46);
                    }
                    VAR48 += 1;
                    VAR46 += 1;
                }
                VAR33 += VAR4->VAR51[3];
                VAR41 += VAR5->VAR51[3];
            }
        }
        for (VAR11 = 0; VAR11 < 3; VAR11++)
        {
            int VAR53 = VAR11 ? VAR9->VAR53 : 0;
            int VAR54 = VAR11 ? VAR9->VAR54 : 0;
            int VAR55 = FUN6(VAR17, 1 << VAR53) >> VAR53;
            int VAR56 = FUN6(VAR20, 1 << VAR54) >> VAR54;
            int VAR57 = FUN6(VAR22, 1 << VAR53) >> VAR53;
            int VAR58 = FUN6(VAR23, 1 << VAR54) >> VAR54;
            int VAR59 = VAR7 >> VAR54;
            int VAR60 = VAR6 >> VAR53;
            VAR45 *VAR46, *VAR47, *VAR48, *VAR49, *VAR61, *VAR62;
            VAR13 = FUN2(-VAR59, 0);
            VAR47 = VAR5->VAR50[VAR11] + VAR13 * VAR5->VAR51[VAR11];
            VAR49 = VAR4->VAR50[VAR11] + (VAR59 + VAR13) * VAR4->VAR51[VAR11];
            VAR62 = VAR5->VAR50[3] + (VAR13 << VAR54) * VAR5->VAR51[3];
            for (VAR14 = FUN3(-VAR59 + VAR58, VAR56); VAR13 < VAR14; VAR13++)
            {
                VAR15 = FUN2(-VAR60, 0);
                VAR48 = VAR49 + VAR60 + VAR15;
                VAR46 = VAR47 + VAR15;
                VAR61 = VAR62 + (VAR15 << VAR53);
                for (VAR16 = FUN3(-VAR60 + VAR57, VAR55); VAR15 < VAR16; VAR15++)
                {
                    int VAR63, VAR64, VAR25;
                    if (VAR53 && VAR54 && VAR13 + 1 < VAR56 && VAR15 + 1 < VAR55)
                    {
                        VAR25 = (VAR61[0] + VAR61[VAR5->VAR51[3]] + VAR61[1] + VAR61[VAR5->VAR51[3] + 1]) >> 2;
                    }
                    else if (VAR53 || VAR54)
                    {
                        VAR64 = VAR53 && VAR15 + 1 < VAR55 ? (VAR61[0] + VAR61[1]) >> 1 : VAR61[0];
                        VAR63 = VAR54 && VAR13 + 1 < VAR56 ? (VAR61[0] + VAR61[VAR5->VAR51[3]]) >> 1 : VAR61[0];
                        VAR25 = (VAR63 + VAR64) >> 1;
                    }
                    else
                        VAR25 = VAR61[0];
                    if (VAR44 && VAR25 != 0 && VAR25 != 255)
                    {
                        uint8_t VAR52;
                        if (VAR53 && VAR54 && VAR13 + 1 < VAR56 && VAR15 + 1 < VAR55)
                        {
                            VAR52 = (VAR48[0] + VAR48[VAR5->VAR51[3]] + VAR48[1] + VAR48[VAR5->VAR51[3] + 1]) >> 2;
                        }
                        else if (VAR53 || VAR54)
                        {
                            VAR64 = VAR53 && VAR15 + 1 < VAR55 ? (VAR48[0] + VAR48[1]) >> 1 : VAR48[0];
                            VAR63 = VAR54 && VAR13 + 1 < VAR56 ? (VAR48[0] + VAR48[VAR5->VAR51[3]]) >> 1 : VAR48[0];
                            VAR52 = (VAR63 + VAR64) >> 1;
                        }
                        else
                            VAR52 = VAR48[0];
                        VAR25 = FUN4(VAR25, VAR52);
                    }
                    *VAR48 = FUN5(*VAR48 * (255 - VAR25) + *VAR46 * VAR25);
                    VAR46++;
                    VAR48++;
                    VAR61 += 1 << VAR53;
                }
                VAR49 += VAR4->VAR51[VAR11];
                VAR47 += VAR5->VAR51[VAR11];
                VAR62 += (1 << VAR54) * VAR5->VAR51[3];
            }
        }
    }
}