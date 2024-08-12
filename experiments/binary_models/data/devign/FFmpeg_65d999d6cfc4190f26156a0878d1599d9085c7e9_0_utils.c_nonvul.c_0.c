int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    int VAR6 = VAR2->VAR7;
    int VAR8 = VAR2->VAR9;
    VAR10 *VAR11;
    int *VAR12;
    if (VAR4->VAR13[0] != NULL)
    {
        FUN2(VAR2, VAR14, "");
        return -1;
    }
    if (VAR2->VAR15 >= VAR16)
    {
        FUN2(VAR2, VAR14, "");
        return -1;
    }
    if (FUN3(VAR2, VAR6, VAR8))
        return -1;
    if (VAR2->VAR17 == NULL)
    {
        VAR2->VAR17 = FUN4(VAR16 * sizeof(VAR10));
    }
    VAR2->VAR17 = FUN5(VAR2->VAR17, &VAR2->VAR18, sizeof(VAR10) * FUN6(99, VAR2->VAR15 + 1));
    VAR11 = &((VAR10 *)VAR2->VAR17)[VAR2->VAR15];
    VAR12 = &(((VAR10 *)VAR2->VAR17)[VAR16 - 1]).VAR19;
    (*VAR12)++;
    if (VAR11->VAR20[0])
    {
        VAR4->VAR21 = *VAR12 - VAR11->VAR19;
        VAR11->VAR19 = *VAR12;
    }
    else
    {
        int VAR22, VAR23;
        int VAR24, VAR25[3];
        AVPicture VAR26;
        FUN7(VAR2->VAR27, &VAR22, &VAR23);
        FUN8(VAR2, &VAR6, &VAR8);
        if (!(VAR2->VAR28 & VAR29))
        {
            VAR6 += VAR30 * 2;
            VAR8 += VAR30 * 2;
        }
        FUN9(&VAR26, NULL, VAR2->VAR27, VAR6, VAR8);
        VAR24 = VAR26.VAR31[0] * 8 / VAR6;
        assert(VAR24 >= 1);
        if (VAR24 == 3 * 8)
            VAR6 = FUN10(VAR6, VAR32 << VAR22);
        else
            VAR6 = FUN10(VAR24 * VAR6, VAR32 << (VAR22 + 3)) / VAR24;
        VAR25[1] = FUN9(&VAR26, NULL, VAR2->VAR27, VAR6, VAR8);
        VAR25[0] = VAR26.VAR31[0] * VAR8;
        VAR25[1] -= VAR25[0];
        if (VAR26.VAR13[2])
            VAR25[1] = VAR25[2] = VAR25[1] / 2;
        else
            VAR25[2] = 0;
        VAR11->VAR19 = -256 * 256 * 256 * 64;
        memset(VAR11->VAR20, 0, sizeof(VAR11->VAR20));
        memset(VAR11->VAR13, 0, sizeof(VAR11->VAR13));
        for (VAR5 = 0; VAR5 < 3 && VAR25[VAR5]; VAR5++)
        {
            const int VAR33 = VAR5 == 0 ? 0 : VAR22;
            const int VAR34 = VAR5 == 0 ? 0 : VAR23;
            VAR11->VAR31[VAR5] = VAR26.VAR31[VAR5];
            VAR11->VAR20[VAR5] = FUN11(VAR25[VAR5] + 16);
            if (VAR11->VAR20[VAR5] == NULL)
                return -1;
            memset(VAR11->VAR20[VAR5], 128, VAR25[VAR5]);
            if ((VAR2->VAR28 & VAR29) || (VAR2->VAR27 == VAR35) || !VAR25[2])
                VAR11->VAR13[VAR5] = VAR11->VAR20[VAR5];
            else
                VAR11->VAR13[VAR5] = VAR11->VAR20[VAR5] + FUN10((VAR11->VAR31[VAR5] * VAR30 >> VAR34) + (VAR30 >> VAR33), VAR32);
        }
        VAR4->VAR21 = 256 * 256 * 256 * 64;
    }
    VAR4->VAR36 = VAR37;
    for (VAR5 = 0; VAR5 < 4; VAR5++)
    {
        VAR4->VAR20[VAR5] = VAR11->VAR20[VAR5];
        VAR4->VAR13[VAR5] = VAR11->VAR13[VAR5];
        VAR4->VAR31[VAR5] = VAR11->VAR31[VAR5];
    }
    VAR2->VAR15++;
    return 0;
}