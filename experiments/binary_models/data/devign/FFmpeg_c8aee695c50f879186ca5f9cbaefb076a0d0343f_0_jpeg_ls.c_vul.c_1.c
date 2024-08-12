static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    VAR6 *const VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR5;
    VAR9 *const VAR11 = (VAR9 *)&VAR7->VAR12;
    const int VAR13 = VAR2->VAR14;
    PutBitContext VAR15, VAR16;
    GetBitContext VAR17;
    VAR18 *VAR19, *VAR20, *VAR21, *VAR22;
    VAR23 *VAR24;
    int VAR25, VAR26;
    int VAR27;
    VAR19 = FUN2(VAR4);
    FUN3(&VAR15, VAR3, VAR4);
    FUN3(&VAR16, VAR19, VAR4);
    *VAR11 = *VAR10;
    VAR11->VAR28 = VAR29;
    VAR11->VAR30 = 1;
    if (VAR2->VAR31 == VAR32 || VAR2->VAR31 == VAR33)
        VAR27 = 1;
    else
        VAR27 = 3;
    FUN4(&VAR15, VAR34);
    FUN4(&VAR15, VAR35);
    FUN5(&VAR15, 16, 8 + VAR27 * 3);
    FUN5(&VAR15, 8, (VAR2->VAR31 == VAR33) ? 16 : 8);
    FUN5(&VAR15, 16, VAR2->VAR36);
    FUN5(&VAR15, 16, VAR2->VAR37);
    FUN5(&VAR15, 8, VAR27);
    for (VAR25 = 1; VAR25 <= VAR27; VAR25++)
    {
        FUN5(&VAR15, 8, VAR25);
        FUN5(&VAR15, 8, 0x11);
        FUN5(&VAR15, 8, 0);
    }
    FUN4(&VAR15, VAR38);
    FUN5(&VAR15, 16, 6 + VAR27 * 2);
    FUN5(&VAR15, 8, VAR27);
    for (VAR25 = 1; VAR25 <= VAR27; VAR25++)
    {
        FUN5(&VAR15, 8, VAR25);
        FUN5(&VAR15, 8, 0);
    }
    FUN5(&VAR15, 8, VAR13);
    FUN5(&VAR15, 8, (VAR27 > 1) ? 1 : 0);
    FUN5(&VAR15, 8, 0);
    VAR24 = FUN6(sizeof(VAR23));
    VAR24->VAR13 = VAR13;
    VAR24->VAR39 = (VAR2->VAR31 == VAR33) ? 16 : 8;
    FUN7(VAR24, 0);
    FUN8(VAR24);
    FUN9(VAR24, &VAR15);
    VAR20 = FUN6(VAR11->VAR40[0]);
    VAR22 = VAR20;
    VAR21 = VAR11->VAR5[0];
    if (VAR2->VAR31 == VAR32)
    {
        int VAR41 = 0;
        for (VAR25 = 0; VAR25 < VAR2->VAR36; VAR25++)
        {
            FUN10(VAR24, &VAR16, VAR22, VAR21, VAR41, VAR2->VAR37, 1, 0, 8);
            VAR41 = VAR22[0];
            VAR22 = VAR21;
            VAR21 += VAR11->VAR40[0];
        }
    }
    else if (VAR2->VAR31 == VAR33)
    {
        int VAR41 = 0;
        for (VAR25 = 0; VAR25 < VAR2->VAR36; VAR25++)
        {
            FUN10(VAR24, &VAR16, VAR22, VAR21, VAR41, VAR2->VAR37, 1, 0, 16);
            VAR41 = *((VAR42 *)VAR22);
            VAR22 = VAR21;
            VAR21 += VAR11->VAR40[0];
        }
    }
    else if (VAR2->VAR31 == VAR43)
    {
        int VAR44, VAR37;
        int VAR45[3] = {0, 0, 0};
        VAR37 = VAR2->VAR37 * 3;
        for (VAR25 = 0; VAR25 < VAR2->VAR36; VAR25++)
        {
            for (VAR44 = 0; VAR44 < 3; VAR44++)
            {
                FUN10(VAR24, &VAR16, VAR22 + VAR44, VAR21 + VAR44, VAR45[VAR44], VAR37, 3, VAR44, 8);
                VAR45[VAR44] = VAR22[VAR44];
            }
            VAR22 = VAR21;
            VAR21 += VAR7->VAR12.VAR40[0];
        }
    }
    else if (VAR2->VAR31 == VAR46)
    {
        int VAR44, VAR37;
        int VAR45[3] = {0, 0, 0};
        VAR37 = VAR2->VAR37 * 3;
        for (VAR25 = 0; VAR25 < VAR2->VAR36; VAR25++)
        {
            for (VAR44 = 2; VAR44 >= 0; VAR44--)
            {
                FUN10(VAR24, &VAR16, VAR22 + VAR44, VAR21 + VAR44, VAR45[VAR44], VAR37, 3, VAR44, 8);
                VAR45[VAR44] = VAR22[VAR44];
            }
            VAR22 = VAR21;
            VAR21 += VAR7->VAR12.VAR40[0];
        }
    }
    FUN11(VAR20);
    FUN11(VAR24);
    FUN12(&VAR16);
    VAR26 = FUN13(&VAR16) >> 3;
    FUN14(&VAR17, VAR19, VAR26);
    while (FUN15(&VAR17) < VAR26 * 8)
    {
        int VAR47;
        VAR47 = FUN16(&VAR17, 8);
        FUN5(&VAR15, 8, VAR47);
        if (VAR47 == 0xFF)
        {
            VAR47 = FUN16(&VAR17, 7);
            FUN5(&VAR15, 8, VAR47);
        }
    }
    FUN17(&VAR15);
    FUN11(VAR19);
    FUN4(&VAR15, VAR48);
    FUN12(&VAR15);
    FUN18();
    return FUN13(&VAR15) >> 3;
}