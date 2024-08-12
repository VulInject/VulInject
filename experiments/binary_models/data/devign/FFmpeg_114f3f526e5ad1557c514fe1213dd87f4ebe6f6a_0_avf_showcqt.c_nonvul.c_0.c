static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    VAR1 *VAR9 = VAR4->VAR10[0];
    int VAR11 = 1 << VAR7->VAR12;
    FFTSample VAR13[VAR14][4];
    int VAR15, VAR16, VAR17 = 0;
    int VAR18 = VAR7->VAR19->VAR18[0];
    int VAR20 = VAR7->VAR21 ? 2 : 1;
    int VAR22 = (VAR14 / 2) * VAR20;
    int VAR23 = (VAR24 / 2) * VAR20;
    int VAR25 = (VAR26 / 2) * VAR20;
    int VAR27 = (VAR28 / 2) * VAR20;
    memcpy(VAR7->VAR29, VAR7->VAR30, VAR11 * sizeof(*VAR7->VAR30));
    FUN2(VAR7->VAR31, VAR7->VAR29);
    FUN3(VAR7->VAR31, VAR7->VAR29);
    VAR7->VAR29[VAR11] = VAR7->VAR29[0];
    for (VAR15 = 0; VAR15 < VAR14; VAR15++)
    {
        int VAR32;
        FFTComplex VAR33 = {0, 0};
        FFTComplex VAR34 = {0, 0};
        FFTComplex VAR35, VAR36;
        for (VAR32 = 0; VAR32 < VAR7->VAR37[VAR15].VAR38; VAR32++)
        {
            FFTSample VAR39 = VAR7->VAR37[VAR15].VAR40[VAR32];
            int VAR41 = VAR7->VAR37[VAR15].VAR42 + VAR32;
            VAR33.VAR43 += VAR39 * VAR7->VAR29[VAR41].VAR43;
            VAR33.VAR44 += VAR39 * VAR7->VAR29[VAR41].VAR44;
            VAR34.VAR43 += VAR39 * VAR7->VAR29[VAR11 - VAR41].VAR43;
            VAR34.VAR44 += VAR39 * VAR7->VAR29[VAR11 - VAR41].VAR44;
        }
        VAR35.VAR43 = VAR33.VAR43 + VAR34.VAR43;
        VAR35.VAR44 = VAR33.VAR44 - VAR34.VAR44;
        VAR36.VAR43 = VAR34.VAR44 + VAR33.VAR44;
        VAR36.VAR44 = VAR34.VAR43 - VAR33.VAR43;
        VAR13[VAR15][0] = VAR35.VAR43 * VAR35.VAR43 + VAR35.VAR44 * VAR35.VAR44;
        VAR13[VAR15][2] = VAR36.VAR43 * VAR36.VAR43 + VAR36.VAR44 * VAR36.VAR44;
        VAR13[VAR15][1] = 0.5f * (VAR13[VAR15][0] + VAR13[VAR15][2]);
        if (VAR7->VAR45 == 1.0f)
            VAR13[VAR15][3] = VAR13[VAR15][1];
        else if (VAR7->VAR45 == 2.0f)
            VAR13[VAR15][3] = FUN4(VAR13[VAR15][1]);
        else if (VAR7->VAR45 == 3.0f)
            VAR13[VAR15][3] = FUN5(VAR13[VAR15][1]);
        else if (VAR7->VAR45 == 4.0f)
            VAR13[VAR15][3] = FUN4(FUN4(VAR13[VAR15][1]));
        else
            VAR13[VAR15][3] = FUN6(FUN7(VAR13[VAR15][1]) * (1.0f / VAR7->VAR45));
        VAR13[VAR15][0] = FUN8(1.0f, VAR13[VAR15][0]);
        VAR13[VAR15][1] = FUN8(1.0f, VAR13[VAR15][1]);
        VAR13[VAR15][2] = FUN8(1.0f, VAR13[VAR15][2]);
        if (VAR7->VAR46 == 1.0f)
        {
            VAR13[VAR15][0] = 255.0f * VAR13[VAR15][0];
            VAR13[VAR15][1] = 255.0f * VAR13[VAR15][1];
            VAR13[VAR15][2] = 255.0f * VAR13[VAR15][2];
        }
        else if (VAR7->VAR46 == 2.0f)
        {
            VAR13[VAR15][0] = 255.0f * FUN4(VAR13[VAR15][0]);
            VAR13[VAR15][1] = 255.0f * FUN4(VAR13[VAR15][1]);
            VAR13[VAR15][2] = 255.0f * FUN4(VAR13[VAR15][2]);
        }
        else if (VAR7->VAR46 == 3.0f)
        {
            VAR13[VAR15][0] = 255.0f * FUN5(VAR13[VAR15][0]);
            VAR13[VAR15][1] = 255.0f * FUN5(VAR13[VAR15][1]);
            VAR13[VAR15][2] = 255.0f * FUN5(VAR13[VAR15][2]);
        }
        else if (VAR7->VAR46 == 4.0f)
        {
            VAR13[VAR15][0] = 255.0f * FUN4(FUN4(VAR13[VAR15][0]));
            VAR13[VAR15][1] = 255.0f * FUN4(FUN4(VAR13[VAR15][1]));
            VAR13[VAR15][2] = 255.0f * FUN4(FUN4(VAR13[VAR15][2]));
        }
        else
        {
            VAR13[VAR15][0] = 255.0f * FUN6(FUN7(VAR13[VAR15][0]) * (1.0f / VAR7->VAR46));
            VAR13[VAR15][1] = 255.0f * FUN6(FUN7(VAR13[VAR15][1]) * (1.0f / VAR7->VAR46));
            VAR13[VAR15][2] = 255.0f * FUN6(FUN7(VAR13[VAR15][2]) * (1.0f / VAR7->VAR46));
        }
    }
    if (!VAR7->VAR21)
    {
        for (VAR15 = 0; VAR15 < VAR22; VAR15++)
        {
            VAR13[VAR15][0] = 0.5f * (VAR13[2 * VAR15][0] + VAR13[2 * VAR15 + 1][0]);
            VAR13[VAR15][1] = 0.5f * (VAR13[2 * VAR15][1] + VAR13[2 * VAR15 + 1][1]);
            VAR13[VAR15][2] = 0.5f * (VAR13[2 * VAR15][2] + VAR13[2 * VAR15 + 1][2]);
            VAR13[VAR15][3] = 0.5f * (VAR13[2 * VAR15][3] + VAR13[2 * VAR15 + 1][3]);
        }
    }
    for (VAR15 = 0; VAR15 < VAR22; VAR15++)
    {
        VAR7->VAR47[VAR7->VAR48 * VAR18 + 3 * VAR15] = VAR13[VAR15][0] + 0.5f;
        VAR7->VAR47[VAR7->VAR48 * VAR18 + 3 * VAR15 + 1] = VAR13[VAR15][1] + 0.5f;
        VAR7->VAR47[VAR7->VAR48 * VAR18 + 3 * VAR15 + 2] = VAR13[VAR15][2] + 0.5f;
    }
    if (!VAR7->VAR49)
    {
        VAR50 *VAR51 = (VAR50 *)VAR7->VAR19->VAR51[0];
        float VAR52[VAR14];
        int VAR53 = VAR18 * VAR23;
        int VAR54 = VAR18 * VAR7->VAR48;
        for (VAR15 = 0; VAR15 < VAR22; VAR15++)
            VAR52[VAR15] = 1.0f / (VAR13[VAR15][3] + 0.0001f);
        for (VAR16 = 0; VAR16 < VAR23; VAR16++)
        {
            float VAR55 = (VAR23 - VAR16) * (1.0f / VAR23);
            VAR50 *VAR56 = VAR51 + VAR16 * VAR18;
            for (VAR15 = 0; VAR15 < VAR22; VAR15++)
            {
                float VAR57;
                if (VAR13[VAR15][3] <= VAR55)
                {
                    *VAR56++ = 0;
                    *VAR56++ = 0;
                    *VAR56++ = 0;
                }
                else
                {
                    VAR57 = (VAR13[VAR15][3] - VAR55) * VAR52[VAR15];
                    *VAR56++ = VAR57 * VAR13[VAR15][0] + 0.5f;
                    *VAR56++ = VAR57 * VAR13[VAR15][1] + 0.5f;
                    *VAR56++ = VAR57 * VAR13[VAR15][2] + 0.5f;
                }
            }
        }
        if (VAR7->VAR58 && VAR7->VAR59)
        {
            for (VAR16 = 0; VAR16 < VAR27; VAR16++)
            {
                VAR50 *VAR56 = VAR51 + (VAR23 + VAR16) * VAR18;
                VAR50 *VAR60 = VAR7->VAR47 + VAR7->VAR48 * VAR18;
                VAR50 *VAR61 = VAR7->VAR61;
                for (VAR15 = 0; VAR15 < VAR22; VAR15++)
                {
                    uint8_t VAR62 = VAR7->VAR58[VAR16 * VAR22 + VAR15];
                    VAR56[3 * VAR15] = (VAR60[3 * VAR15] * (255 - VAR62) + VAR61[0] * VAR62 + 255) >> 8;
                    VAR56[3 * VAR15 + 1] = (VAR60[3 * VAR15 + 1] * (255 - VAR62) + VAR61[1] * VAR62 + 255) >> 8;
                    VAR56[3 * VAR15 + 2] = (VAR60[3 * VAR15 + 2] * (255 - VAR62) + VAR61[2] * VAR62 + 255) >> 8;
                    VAR61 += 3;
                }
            }
        }
        else if (VAR7->VAR59)
        {
            for (VAR16 = 0; VAR16 < VAR27; VAR16++)
            {
                VAR50 *VAR56 = VAR51 + (VAR23 + VAR16) * VAR18;
                memcpy(VAR56, VAR7->VAR47 + VAR7->VAR48 * VAR18, VAR22 * 3);
            }
            for (VAR15 = 0; VAR15 < VAR22; VAR15 += VAR22 / 10)
            {
                int VAR32;
                static const char VAR63[] = "";
                VAR50 *VAR64 = VAR51 + VAR23 * VAR18 + VAR15 * 3;
                for (VAR32 = 0; VAR63[VAR32]; VAR32++)
                {
                    int VAR33;
                    for (VAR33 = 0; VAR33 < 16; VAR33++)
                    {
                        VAR50 *VAR65 = VAR64 + VAR33 * VAR18 * VAR20 + 8 * 3 * VAR32 * VAR20;
                        int VAR66 = VAR15 + 8 * VAR32 * VAR20;
                        int VAR67;
                        for (VAR67 = 0x80; VAR67; VAR67 >>= 1)
                        {
                            if (VAR67 & VAR68[VAR63[VAR32] * 16 + VAR33])
                            {
                                VAR65[0] = VAR7->VAR61[3 * VAR66];
                                VAR65[1] = VAR7->VAR61[3 * VAR66 + 1];
                                VAR65[2] = VAR7->VAR61[3 * VAR66 + 2];
                                if (VAR20 == 2)
                                {
                                    VAR65[VAR18] = VAR65[0];
                                    VAR65[VAR18 + 1] = VAR65[1];
                                    VAR65[VAR18 + 2] = VAR65[2];
                                    VAR65[3] = VAR65[VAR18 + 3] = VAR7->VAR61[3 * VAR66 + 3];
                                    VAR65[4] = VAR65[VAR18 + 4] = VAR7->VAR61[3 * VAR66 + 4];
                                    VAR65[5] = VAR65[VAR18 + 5] = VAR7->VAR61[3 * VAR66 + 5];
                                }
                            }
                            VAR65 += 3 * VAR20;
                            VAR66 += VAR20;
                        }
                    }
                }
            }
        }
        else
        {
            for (VAR16 = 0; VAR16 < VAR27; VAR16++)
            {
                VAR50 *VAR56 = VAR51 + (VAR23 + VAR16) * VAR18;
                VAR50 *VAR60 = VAR7->VAR47 + VAR7->VAR48 * VAR18;
                for (VAR15 = 0; VAR15 < VAR22; VAR15++)
                {
                    VAR56[3 * VAR15] = VAR60[3 * VAR15];
                    VAR56[3 * VAR15 + 1] = VAR60[3 * VAR15 + 1];
                    VAR56[3 * VAR15 + 2] = VAR60[3 * VAR15 + 2];
                }
            }
        }
        VAR51 += VAR25 * VAR18;
        memcpy(VAR51, VAR7->VAR47 + VAR7->VAR48 * VAR18, VAR53 - VAR54);
        VAR51 += VAR53 - VAR54;
        if (VAR54)
            memcpy(VAR51, VAR7->VAR47, VAR54);
        VAR7->VAR19->VAR69 = VAR7->VAR70;
        VAR17 = FUN9(VAR9, FUN10(VAR7->VAR19));
        VAR7->VAR70++;
    }
    VAR7->VAR49 = (VAR7->VAR49 + 1) % VAR7->VAR71;
    VAR7->VAR48 = (VAR7->VAR48 + VAR23 - 1) % VAR23;
    return VAR17;
}