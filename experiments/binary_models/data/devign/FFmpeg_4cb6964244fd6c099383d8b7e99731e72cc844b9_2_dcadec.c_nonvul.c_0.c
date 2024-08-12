static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5, VAR6;
    int VAR7 = VAR2->VAR8;
    const float *VAR9;
    float(*VAR10)[VAR11][8] = VAR2->VAR10[VAR4];
    FUN2(VAR12, VAR13, [8 * VAR11]);
    if (VAR2->VAR14 == 0x1f)
        VAR9 = VAR15;
    else
        VAR9 = VAR16;
    for (VAR5 = VAR3; VAR5 < VAR2->VAR17; VAR5++)
    {
        float VAR18[VAR11];
        if (FUN3(&VAR2->VAR19) < 0)
            return VAR20;
        for (VAR6 = 0; VAR6 < VAR2->VAR21[VAR5]; VAR6++)
        {
            int VAR22;
            int VAR23 = VAR2->VAR24[VAR5][VAR6];
            float VAR25 = VAR9[VAR23];
            int VAR26 = VAR2->VAR27[VAR5][VAR23];
            if (!VAR23)
            {
                VAR18[VAR6] = 0;
                memset(VAR13 + 8 * VAR6, 0, 8 * sizeof(VAR13[0]));
            }
            else
            {
                int VAR28 = VAR2->VAR29[VAR5][VAR6] && VAR7 >= VAR2->VAR29[VAR5][VAR6];
                VAR18[VAR6] = VAR25 * VAR2->VAR30[VAR5][VAR6][VAR28] * VAR2->VAR31[VAR5][VAR26];
                if (VAR23 >= 11 || !VAR32[VAR23].VAR33[VAR26].VAR34)
                {
                    if (VAR23 <= 7)
                    {
                        int VAR35, VAR36, VAR37, VAR38, VAR39;
                        VAR37 = VAR40[VAR23 - 1];
                        VAR38 = VAR41[VAR23 - 1];
                        VAR35 = FUN4(&VAR2->VAR19, VAR37);
                        VAR36 = FUN4(&VAR2->VAR19, VAR37);
                        VAR39 = FUN5(VAR35, VAR36, VAR38, VAR13 + 8 * VAR6);
                        if (VAR39)
                        {
                            FUN6(VAR2->VAR42, VAR43, "");
                            return VAR20;
                        }
                    }
                    else
                    {
                        for (VAR22 = 0; VAR22 < 8; VAR22++)
                            VAR13[8 * VAR6 + VAR22] = FUN7(&VAR2->VAR19, VAR23 - 3);
                    }
                }
                else
                {
                    for (VAR22 = 0; VAR22 < 8; VAR22++)
                        VAR13[8 * VAR6 + VAR22] = FUN8(&VAR2->VAR19, &VAR32[VAR23], VAR26);
                }
            }
        }
        VAR2->VAR44.FUN9(&VAR2->VAR44, VAR10[VAR5][0], VAR13, VAR18, 8 * VAR2->VAR21[VAR5]);
        for (VAR6 = 0; VAR6 < VAR2->VAR21[VAR5]; VAR6++)
        {
            int VAR22;
            if (VAR2->VAR45[VAR5][VAR6])
            {
                int VAR46;
                if (VAR2->VAR47)
                    VAR10[VAR5][VAR6][0] += (VAR48[VAR2->VAR49[VAR5][VAR6]][0] * VAR2->VAR50[VAR5][VAR6][3] + VAR48[VAR2->VAR49[VAR5][VAR6]][1] * VAR2->VAR50[VAR5][VAR6][2] + VAR48[VAR2->VAR49[VAR5][VAR6]][2] * VAR2->VAR50[VAR5][VAR6][1] + VAR48[VAR2->VAR49[VAR5][VAR6]][3] * VAR2->VAR50[VAR5][VAR6][0]) * (1.0f / 8192);
                for (VAR22 = 1; VAR22 < 8; VAR22++)
                {
                    float VAR51 = VAR48[VAR2->VAR49[VAR5][VAR6]][0] * VAR10[VAR5][VAR6][VAR22 - 1];
                    for (VAR46 = 2; VAR46 <= 4; VAR46++)
                        if (VAR22 >= VAR46)
                            VAR51 += VAR48[VAR2->VAR49[VAR5][VAR6]][VAR46 - 1] * VAR10[VAR5][VAR6][VAR22 - VAR46];
                        else if (VAR2->VAR47)
                            VAR51 += VAR48[VAR2->VAR49[VAR5][VAR6]][VAR46 - 1] * VAR2->VAR50[VAR5][VAR6][VAR22 - VAR46 + 4];
                    VAR10[VAR5][VAR6][VAR22] += VAR51 * 1.0f / 8192;
                }
            }
        }
        if (VAR2->VAR52[VAR5] > VAR2->VAR21[VAR5])
        {
            if (!VAR2->VAR53 & 0x01)
            {
                FUN6(VAR2->VAR42, VAR54, "");
                VAR2->VAR53 |= 0x01;
            }
            VAR2->VAR55.FUN10(VAR10[VAR5], VAR2->VAR56[VAR5], VAR56, VAR7 * 8, VAR2->VAR30[VAR5], VAR2->VAR21[VAR5], VAR2->VAR52[VAR5]);
        }
    }
    if (VAR2->VAR57 || VAR7 == VAR2->VAR58[VAR2->VAR59] - 1)
    {
        if (0xFFFF == FUN4(&VAR2->VAR19, 16))
        {
            FUN6(VAR2->VAR42, VAR54, "");
        }
        else
        {
            FUN6(VAR2->VAR42, VAR43, "");
            return VAR20;
        }
    }
    for (VAR5 = VAR3; VAR5 < VAR2->VAR17; VAR5++)
        for (VAR6 = 0; VAR6 < VAR2->VAR21[VAR5]; VAR6++)
            FUN11(VAR2->VAR50[VAR5][VAR6], &VAR10[VAR5][VAR6][4]);
    return 0;
}