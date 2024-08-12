static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    const VAR12 *VAR13 = VAR6->VAR3;
    int VAR14 = VAR6->VAR15;
    int VAR16 = VAR13[0] & 3;
    PPFParam VAR17[VAR18];
    int16_t VAR19[VAR20];
    int16_t VAR21[VAR18 * VAR20];
    int16_t VAR22[VAR23];
    VAR24 *VAR25;
    int VAR26 = 0, VAR27, VAR28, VAR29;
    VAR24 *VAR30 = VAR8->VAR30;
    if (VAR14 < VAR31[VAR16])
    {
        if (VAR14)
            FUN2(VAR2, VAR32, "", VAR31[VAR16], VAR14);
        *VAR4 = 0;
        return VAR14;
    }
    if (FUN3(VAR8, VAR13, VAR14) < 0)
    {
        VAR26 = 1;
        if (VAR8->VAR33 == VAR34)
            VAR8->VAR35 = VAR34;
        else
            VAR8->VAR35 = VAR36;
    }
    VAR11->VAR37 = VAR38;
    if ((VAR29 = FUN4(VAR2, VAR11, 0)) < 0)
        return VAR29;
    VAR25 = (VAR24 *)VAR11->VAR3[0];
    if (VAR8->VAR35 == VAR34)
    {
        if (!VAR26)
            VAR8->VAR39 = 0;
        else if (VAR8->VAR39 != 3)
            VAR8->VAR39++;
        FUN5(VAR19, VAR8->VAR40, VAR8->VAR41, VAR26);
        FUN6(VAR21, VAR19, VAR8->VAR40);
        memcpy(VAR8->VAR40, VAR19, VAR20 * sizeof(*VAR8->VAR40));
        memcpy(VAR8->VAR42, VAR8->VAR43, VAR44 * sizeof(*VAR8->VAR42));
        if (!VAR8->VAR39)
        {
            VAR24 *VAR45 = VAR8->VAR42 + VAR44;
            VAR8->VAR46 = VAR47[(VAR8->VAR48[2].VAR49 + VAR8->VAR48[3].VAR49) >> 1];
            for (VAR27 = 0; VAR27 < VAR18; VAR27++)
            {
                FUN7(VAR45, &VAR8->VAR48[VAR27], VAR8->VAR50, VAR8->VAR51[VAR27 >> 1], VAR27);
                FUN8(VAR22, &VAR8->VAR42[VAR23 * VAR27], VAR8->VAR51[VAR27 >> 1], &VAR8->VAR48[VAR27], VAR8->VAR50);
                for (VAR28 = 0; VAR28 < VAR23; VAR28++)
                {
                    int VAR52 = FUN9(VAR45[VAR28] << 1);
                    VAR45[VAR28] = FUN9(VAR52 + VAR22[VAR28]);
                }
                VAR45 += VAR23;
            }
            VAR45 = VAR8->VAR42 + VAR44;
            VAR8->VAR53 = FUN10(VAR8, VAR8->VAR51[1], &VAR8->VAR54, &VAR8->VAR55);
            if (VAR8->VAR56)
            {
                VAR27 = VAR44;
                for (VAR28 = 0; VAR28 < VAR18; VAR27 += VAR23, VAR28++)
                    FUN11(VAR8, VAR27, VAR8->VAR51[VAR28 >> 1], VAR17 + VAR28, VAR8->VAR50);
                for (VAR27 = 0, VAR28 = 0; VAR28 < VAR18; VAR27 += VAR23, VAR28++)
                    FUN12(VAR8->VAR30 + VAR20 + VAR27, VAR45 + VAR27, VAR45 + VAR27 + VAR17[VAR28].VAR57, VAR17[VAR28].VAR58, VAR17[VAR28].VAR59, 1 << 14, 15, VAR23);
            }
            else
            {
                VAR30 = VAR45 - VAR20;
            }
            memcpy(VAR8->VAR43, VAR8->VAR42 + VAR38, VAR44 * sizeof(*VAR8->VAR42));
        }
        else
        {
            VAR8->VAR46 = (VAR8->VAR46 * 3 + 2) >> 2;
            if (VAR8->VAR39 == 3)
            {
                memset(VAR8->VAR42, 0, (VAR38 + VAR44) * sizeof(*VAR8->VAR42));
                memset(VAR8->VAR43, 0, VAR44 * sizeof(*VAR8->VAR42));
                memset(VAR11->VAR3[0], 0, (VAR38 + VAR20) * sizeof(VAR24));
            }
            else
            {
                VAR24 *VAR13 = VAR8->VAR30 + VAR20;
                FUN13(VAR8->VAR42, VAR13, VAR8->VAR53, VAR8->VAR46, &VAR8->VAR60);
                memcpy(VAR8->VAR43, VAR13 + (VAR38 - VAR44), VAR44 * sizeof(*VAR8->VAR42));
            }
        }
        VAR8->VAR61 = VAR62;
    }
    else
    {
        if (VAR8->VAR35 == VAR63)
        {
            VAR8->VAR54 = FUN14(VAR8->VAR48[0].VAR49);
            FUN5(VAR8->VAR64, VAR8->VAR40, VAR8->VAR41, 0);
        }
        else if (VAR8->VAR33 == VAR34)
        {
            VAR8->VAR54 = FUN15(VAR8);
        }
        if (VAR8->VAR33 == VAR34)
            VAR8->VAR55 = VAR8->VAR54;
        else
            VAR8->VAR55 = (VAR8->VAR55 * 7 + VAR8->VAR54) >> 3;
        FUN16(VAR8);
        FUN6(VAR21, VAR8->VAR64, VAR8->VAR40);
        memcpy(VAR8->VAR40, VAR8->VAR64, VAR20 * sizeof(*VAR8->VAR40));
    }
    VAR8->VAR33 = VAR8->VAR35;
    memcpy(VAR8->VAR30, VAR8->VAR65, VAR20 * sizeof(*VAR8->VAR30));
    for (VAR27 = VAR20, VAR28 = 0; VAR28 < VAR18; VAR27 += VAR23, VAR28++)
        FUN17(VAR8->VAR30 + VAR27, &VAR21[VAR28 * VAR20], VAR30 + VAR27, VAR23, VAR20, 0, 1, 1 << 12);
    memcpy(VAR8->VAR65, VAR8->VAR30 + VAR38, VAR20 * sizeof(*VAR8->VAR30));
    if (VAR8->VAR56)
    {
        FUN18(VAR8, VAR21, VAR8->VAR30, VAR25);
    }
    else
    {
        for (VAR27 = 0; VAR27 < VAR38; VAR27++)
            VAR25[VAR27] = FUN9(VAR8->VAR30[VAR20 + VAR27] << 1);
    }
    *VAR4 = 1;
    return VAR31[VAR16];
}