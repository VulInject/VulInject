static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    VAR9 *VAR10 = VAR3;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14 = VAR6->VAR15;
    float VAR16[VAR17], VAR18[VAR17], VAR19[VAR20];
    float *VAR21;
    int VAR22, VAR23, VAR24, VAR25 = 0;
    VAR10->VAR26 = 160;
    if ((VAR24 = FUN2(VAR2, VAR10, 0)) < 0)
        return VAR24;
    VAR21 = (float *)VAR10->VAR3[0];
    if ((VAR12->VAR27 = FUN3(VAR2, &VAR14, &VAR8)) == VAR28)
    {
        FUN4(VAR2, "");
        goto VAR29;
    }
    if (VAR12->VAR27 <= VAR30 || VAR12->VAR27 == VAR31)
        goto VAR29;
    if (VAR12->VAR27 == VAR32 && VAR12->VAR33 == VAR34 && !VAR12->VAR35)
        goto VAR29;
    FUN5(&VAR12->VAR36, VAR8, 8 * VAR14);
    memset(&VAR12->VAR10, 0, sizeof(VAR37));
    FUN6(VAR12);
    if (VAR12->VAR27 != VAR32)
    {
        VAR7 *VAR38 = (VAR7 *)&VAR12->VAR10;
        for (VAR22 = 0; VAR22 < sizeof(VAR37); VAR22++)
        {
            if (VAR38[VAR22])
                break;
        }
        if (VAR22 == sizeof(VAR37))
            goto VAR29;
    }
    else if (VAR12->VAR10.VAR39[0] == 0xf && VAR12->VAR10.VAR39[1] == 0xf && VAR12->VAR10.VAR40 == 0xff)
    {
        goto VAR29;
    }
    if (FUN7(VAR12) < 0)
        goto VAR29;
    if (VAR12->VAR27 == VAR34 || VAR12->VAR27 == VAR41)
    {
        if (VAR12->VAR10.VAR42 > VAR43 - VAR44)
            goto VAR29;
        VAR12->VAR42 = VAR12->VAR10.VAR42 + VAR44;
        if (VAR12->VAR10.VAR45)
        {
            int VAR38 = VAR12->VAR42 - VAR12->VAR10.VAR45 + 16;
            if (VAR38 < VAR44 || VAR38 > VAR43)
                goto VAR29;
        }
        if (VAR12->VAR10.VAR45 && VAR12->VAR27 == VAR34 && VAR12->VAR35)
        {
            float VAR46;
            memcpy(VAR12->VAR47, VAR12->VAR48, VAR49 * sizeof(float));
            VAR46 = VAR12->VAR50;
            VAR12->VAR50 = VAR46 - VAR12->VAR10.VAR45 + 16.0;
            if (FUN8(VAR12->VAR42 - VAR46) > 15)
                VAR46 = VAR12->VAR42;
            for (VAR22 = 0; VAR22 < VAR20; VAR22++)
            {
                int VAR51 = VAR52[VAR22];
                FUN9(VAR19, VAR46, VAR12->VAR50, VAR22);
                FUN10(VAR12, VAR12->VAR47 + VAR49, VAR12->VAR53, VAR19, VAR51);
                memmove(VAR12->VAR47, VAR12->VAR47 + VAR51, VAR49 * sizeof(float));
            }
        }
        if (FUN8(VAR12->VAR42 - VAR12->VAR50) > 15)
            VAR12->VAR50 = VAR12->VAR42;
        VAR12->VAR53 = VAR12->VAR54 = 0.0;
    }
    else
    {
        VAR19[0] = VAR19[1] = VAR19[2] = VAR44;
        for (VAR22 = 0; VAR22 < VAR20; VAR22++)
            VAR12->VAR55[VAR22] = FUN11(10, VAR56[VAR12->VAR10.VAR40][VAR22]);
        VAR12->VAR57 = VAR12->VAR10.VAR40;
    }
    for (VAR22 = 0; VAR22 < VAR20; VAR22++)
    {
        float VAR58[VAR59 + 6] = {0};
        int VAR51 = VAR52[VAR22];
        int VAR60;
        FUN12(VAR16, VAR12->VAR61, VAR12->VAR62, VAR22);
        if (VAR12->VAR27 != VAR32)
            FUN9(VAR19, VAR12->VAR42, VAR12->VAR50, VAR22);
        VAR60 = FUN13((VAR19[1] + VAR19[0]) / 2.0);
        FUN14(VAR16, VAR18);
        if (VAR12->VAR10.VAR63 && VAR12->VAR35)
            FUN15(VAR18, VAR18, 0.75);
        if (VAR12->VAR27 != VAR32)
        {
            float VAR64, VAR65;
            VAR65 = FUN16((VAR12->VAR27 == VAR41 ? 0.5 : 0.25) * (VAR12->VAR10.VAR66[VAR22] + 1));
            VAR64 = VAR67[VAR12->VAR10.VAR68[VAR22]];
            VAR12->VAR53 += VAR64 / VAR20;
            VAR12->VAR54 += VAR65 / VAR20;
            FUN10(VAR12, VAR12->VAR47 + VAR49, VAR64, VAR19, VAR51);
            FUN17(VAR12, VAR12->VAR10.VAR69[VAR22], VAR58, VAR64, VAR60, VAR51);
            for (VAR23 = 0; VAR23 < VAR51; VAR23++)
                VAR12->VAR47[VAR49 + VAR23] += VAR65 * VAR58[VAR23];
            VAR12->VAR70 = FUN18(VAR12->VAR70 + 0.2, 1.0);
        }
        else
        {
            for (VAR23 = 0; VAR23 < VAR51; VAR23++)
                VAR12->VAR47[VAR49 + VAR23] = VAR12->VAR55[VAR22];
        }
        memmove(VAR12->VAR47, VAR12->VAR47 + VAR51, VAR49 * sizeof(float));
        FUN19(VAR12->VAR47 + VAR49, VAR18, VAR12->VAR71, VAR51, VAR58);
        FUN20(VAR12, VAR58, VAR18, VAR21, VAR60, &VAR72[VAR12->VAR27], VAR51);
        VAR21 += VAR51;
    }
    if (VAR25)
    {
    VAR29:
        VAR25 = 1;
        FUN21(VAR2, VAR73, "");
        FUN22(VAR12, VAR21);
    }
    memcpy(VAR12->VAR62, VAR12->VAR61, sizeof(VAR12->VAR62));
    VAR12->VAR35 = VAR25;
    VAR12->VAR33 = VAR12->VAR27;
    if (VAR12->VAR27 != VAR32)
        VAR12->VAR50 = VAR12->VAR42;
    VAR21 = (float *)VAR10->VAR3[0];
    for (VAR22 = 0; VAR22 < 160; VAR22++)
        VAR21[VAR22] /= 32768;
    *VAR4 = 1;
    return VAR6->VAR15;
}