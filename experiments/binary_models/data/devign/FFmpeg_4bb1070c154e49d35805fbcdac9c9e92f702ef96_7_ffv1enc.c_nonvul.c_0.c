static int FUN1(VAR1 *VAR2)
{
    VAR3 *const VAR4 = &VAR2->VAR4;
    uint8_t VAR5[VAR6];
    int VAR7, VAR8, VAR9;
    uint8_t VAR10[32][VAR6];
    unsigned VAR11;
    memset(VAR10, 128, sizeof(VAR10));
    memset(VAR5, 128, sizeof(VAR5));
    VAR2->VAR12->VAR13 = 10000 + 4 + (11 * 11 * 5 * 5 * 5 + 11 * 11 * 11) * 32;
    VAR2->VAR12->VAR14 = FUN2(VAR2->VAR12->VAR13);
    FUN3(VAR4, VAR2->VAR12->VAR14, VAR2->VAR12->VAR13);
    FUN4(VAR4, 0.05 * (1LL << 32), 256 - 8);
    FUN5(VAR4, VAR5, VAR2->VAR15, 0);
    if (VAR2->VAR15 > 2)
    {
        if (VAR2->VAR15 == 3)
            VAR2->VAR16 = 2;
        FUN5(VAR4, VAR5, VAR2->VAR16, 0);
    }
    FUN5(VAR4, VAR5, VAR2->VAR17, 0);
    if (VAR2->VAR17 == VAR18)
        for (VAR7 = 1; VAR7 < 256; VAR7++)
            FUN5(VAR4, VAR5, VAR2->VAR19[VAR7] - VAR4->VAR20[VAR7], 1);
    FUN5(VAR4, VAR5, VAR2->VAR21, 0);
    FUN5(VAR4, VAR5, VAR2->VAR22, 0);
    FUN6(VAR4, VAR5, VAR2->VAR23);
    FUN5(VAR4, VAR5, VAR2->VAR24, 0);
    FUN5(VAR4, VAR5, VAR2->VAR25, 0);
    FUN6(VAR4, VAR5, VAR2->VAR26);
    FUN5(VAR4, VAR5, VAR2->VAR27 - 1, 0);
    FUN5(VAR4, VAR5, VAR2->VAR28 - 1, 0);
    FUN5(VAR4, VAR5, VAR2->VAR29, 0);
    for (VAR7 = 0; VAR7 < VAR2->VAR29; VAR7++)
        FUN7(VAR4, VAR2->VAR30[VAR7]);
    for (VAR7 = 0; VAR7 < VAR2->VAR29; VAR7++)
    {
        for (VAR8 = 0; VAR8 < VAR2->VAR31[VAR7] * VAR6; VAR8++)
            if (VAR2->VAR32[VAR7] && VAR2->VAR32[VAR7][0][VAR8] != 128)
                break;
        if (VAR8 < VAR2->VAR31[VAR7] * VAR6)
        {
            FUN6(VAR4, VAR5, 1);
            for (VAR8 = 0; VAR8 < VAR2->VAR31[VAR7]; VAR8++)
                for (VAR9 = 0; VAR9 < VAR6; VAR9++)
                {
                    int VAR33 = VAR8 ? VAR2->VAR32[VAR7][VAR8 - 1][VAR9] : 128;
                    FUN5(VAR4, VAR10[VAR9], (VAR34)(VAR2->VAR32[VAR7][VAR8][VAR9] - VAR33), 1);
                }
        }
        else
        {
            FUN6(VAR4, VAR5, 0);
        }
    }
    if (VAR2->VAR15 > 2)
    {
        FUN5(VAR4, VAR5, VAR2->VAR35, 0);
    }
    VAR2->VAR12->VAR13 = FUN8(VAR4);
    VAR11 = FUN9(FUN10(VAR36), 0, VAR2->VAR12->VAR14, VAR2->VAR12->VAR13);
    FUN11(VAR2->VAR12->VAR14 + VAR2->VAR12->VAR13, VAR11);
    VAR2->VAR12->VAR13 += 4;
    return 0;
}