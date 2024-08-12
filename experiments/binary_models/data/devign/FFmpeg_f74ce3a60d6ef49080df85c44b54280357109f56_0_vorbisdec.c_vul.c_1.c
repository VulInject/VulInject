static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR4;
    VAR5 *VAR6;
    unsigned VAR7 = VAR2->VAR7;
    unsigned VAR8, VAR9, VAR10;
    int VAR11, VAR12;
    uint8_t VAR13[255];
    uint8_t VAR14[255];
    VAR15 *VAR16;
    float *VAR17 = VAR2->VAR18;
    float *VAR19 = VAR2->VAR20;
    uint8_t VAR21[255];
    unsigned VAR22 = 0;
    int VAR23 = 0;
    int VAR24 = VAR2->VAR25;
    if (FUN2(VAR4))
    {
        FUN3(VAR2->VAR26, VAR27, "");
        return VAR28;
    }
    if (VAR2->VAR29 == 1)
    {
        VAR8 = 0;
    }
    else
    {
        FUN4(VAR8, FUN5(VAR2->VAR29 - 1), VAR2->VAR29)
    }
    VAR2->VAR8 = VAR8;
    VAR16 = &VAR2->VAR30[VAR2->VAR31[VAR8].VAR16];
    FUN6(NULL, "", VAR8, VAR2->VAR31[VAR8].VAR16, VAR2->VAR31[VAR8].VAR9);
    VAR9 = VAR2->VAR31[VAR8].VAR9;
    VAR10 = VAR2->VAR10[VAR9];
    if (VAR9)
        FUN7(VAR4, 2);
    memset(VAR17, 0, sizeof(float) * VAR2->VAR25 * VAR10 / 2);
    memset(VAR19, 0, sizeof(float) * VAR2->VAR25 * VAR10 / 2);
    for (VAR11 = 0; VAR11 < VAR2->VAR25; ++VAR11)
    {
        VAR32 *VAR33;
        int VAR34;
        if (VAR16->VAR35 > 1)
        {
            VAR33 = &VAR2->VAR36[VAR16->VAR37[VAR16->VAR38[VAR11]]];
        }
        else
        {
            VAR33 = &VAR2->VAR36[VAR16->VAR37[0]];
        }
        VAR34 = VAR33->FUN8(VAR2, &VAR33->VAR39, VAR19);
        if (VAR34 < 0)
        {
            FUN3(VAR2->VAR26, VAR27, "");
            return VAR28;
        }
        VAR13[VAR11] = VAR34;
        VAR19 += VAR10 / 2;
    }
    for (VAR11 = VAR16->VAR40 - 1; VAR11 >= 0; --VAR11)
    {
        if (!(VAR13[VAR16->VAR41[VAR11]] & VAR13[VAR16->VAR42[VAR11]]))
        {
            VAR13[VAR16->VAR41[VAR11]] = 0;
            VAR13[VAR16->VAR42[VAR11]] = 0;
        }
    }
    for (VAR11 = 0; VAR11 < VAR16->VAR35; ++VAR11)
    {
        VAR43 *VAR44;
        unsigned VAR45 = 0;
        for (VAR12 = 0; VAR12 < VAR2->VAR25; ++VAR12)
        {
            if ((VAR16->VAR35 == 1) || (VAR11 == VAR16->VAR38[VAR12]))
            {
                VAR21[VAR12] = VAR22;
                if (VAR13[VAR12])
                {
                    VAR14[VAR45] = 1;
                }
                else
                {
                    VAR14[VAR45] = 0;
                }
                ++VAR45;
                ++VAR22;
            }
        }
        VAR44 = &VAR2->VAR46[VAR16->VAR47[VAR11]];
        if (VAR24 < VAR45)
        {
            FUN3(VAR2->VAR26, VAR27, "");
            return -1;
        }
        FUN9(VAR2, VAR44, VAR45, VAR14, VAR17, VAR10 / 2);
        VAR17 += VAR45 * VAR10 / 2;
        VAR24 -= VAR45;
    }
    for (VAR11 = VAR16->VAR40 - 1; VAR11 >= 0; --VAR11)
    {
        float *VAR48, *VAR49;
        VAR48 = VAR2->VAR18 + VAR21[VAR16->VAR41[VAR11]] * VAR10 / 2;
        VAR49 = VAR2->VAR18 + VAR21[VAR16->VAR42[VAR11]] * VAR10 / 2;
        VAR2->VAR50.FUN10(VAR48, VAR49, VAR10 / 2);
    }
    VAR6 = &VAR2->VAR6[VAR9];
    for (VAR12 = VAR2->VAR25 - 1; VAR12 >= 0; VAR12--)
    {
        VAR19 = VAR2->VAR20 + VAR12 * VAR10 / 2;
        VAR17 = VAR2->VAR18 + VAR21[VAR12] * VAR10 / 2;
        VAR2->VAR50.FUN11(VAR19, VAR19, VAR17, VAR10 / 2);
        VAR6->FUN12(VAR6, VAR17, VAR19);
    }
    VAR23 = (VAR10 + VAR2->VAR10[VAR7]) / 4;
    for (VAR12 = 0; VAR12 < VAR2->VAR25; VAR12++)
    {
        unsigned VAR51 = VAR2->VAR10[0];
        unsigned VAR52 = VAR2->VAR10[1];
        float *VAR44 = VAR2->VAR18 + VAR21[VAR12] * VAR10 / 2;
        float *VAR53 = VAR2->VAR53 + VAR12 * VAR52 / 4;
        float *VAR34 = VAR2->VAR20 + VAR12 * VAR23;
        float *VAR54 = VAR44;
        const float *VAR55 = VAR2->VAR55[VAR9 & VAR7];
        if (VAR9 == VAR7)
        {
            VAR2->VAR50.FUN13(VAR34, VAR53, VAR54, VAR55, VAR10 / 4);
        }
        else if (VAR9 > VAR7)
        {
            VAR2->VAR50.FUN13(VAR34, VAR53, VAR54, VAR55, VAR51 / 4);
            memcpy(VAR34 + VAR51 / 2, VAR54 + VAR51 / 4, ((VAR52 - VAR51) / 4) * sizeof(float));
        }
        else
        {
            memcpy(VAR34, VAR53, ((VAR52 - VAR51) / 4) * sizeof(float));
            VAR2->VAR50.FUN13(VAR34 + (VAR52 - VAR51) / 4, VAR53 + (VAR52 - VAR51) / 4, VAR54, VAR55, VAR51 / 4);
        }
        memcpy(VAR53, VAR54 + VAR10 / 4, VAR10 / 4 * sizeof(float));
    }
    VAR2->VAR7 = VAR9;
    return VAR23;
}