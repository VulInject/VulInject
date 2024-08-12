static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    uint8_t VAR8[8 * 1024] = {0};
    int VAR9;
    int64_t VAR10, VAR11 = VAR2->VAR11;
    if (FUN2(VAR7, VAR11) < 0)
        FUN3(VAR2, VAR12, "");
    VAR10 = FUN4(VAR7);
    VAR9 = FUN5(VAR7, VAR8, sizeof(VAR8));
    VAR4->VAR13 = FUN6(VAR8, VAR9);
    if (VAR4->VAR13 <= 0)
    {
        FUN3(VAR2, VAR12, "");
        VAR4->VAR13 = VAR14;
    }
    VAR4->VAR15 = VAR2;
    VAR4->VAR16 = 0;
    if (VAR2->VAR17 == &VAR18)
    {
        FUN7(VAR2, VAR7, VAR10);
        FUN8(VAR4, VAR19, VAR20, VAR4, 1);
        FUN8(VAR4, VAR21, VAR22, VAR4, 1);
        FUN9(VAR4, VAR11 / VAR4->VAR13);
        VAR4->VAR16 = 1;
        FUN3(VAR4->VAR15, VAR23, "");
        VAR2->VAR24 |= VAR25;
    }
    else
    {
        VAR26 *VAR27;
        int VAR28, VAR29, VAR30, VAR31, VAR32, VAR33;
        int64_t VAR34[2], VAR35;
        int VAR36[2];
        uint8_t VAR37[VAR14];
        const VAR38 *VAR39;
        VAR27 = FUN10(VAR2, NULL);
        if (!VAR27)
            return FUN11(VAR40);
        FUN12(VAR27, 60, 1, 27000000);
        VAR27->VAR41->VAR42 = VAR43;
        VAR27->VAR41->VAR44 = VAR45;
        VAR28 = -1;
        VAR31 = 0;
        VAR30 = 0;
        for (;;)
        {
            VAR32 = FUN13(VAR2, VAR37, VAR4->VAR13, &VAR39);
            if (VAR32 < 0)
                return VAR32;
            VAR29 = FUN14(VAR39 + 1) & 0x1fff;
            if ((VAR28 == -1 || VAR28 == VAR29) && FUN15(&VAR35, &VAR33, VAR39) == 0)
            {
                FUN16(VAR2, VAR4->VAR13);
                VAR28 = VAR29;
                VAR36[VAR31] = VAR30;
                VAR34[VAR31] = VAR35 * 300 + VAR33;
                VAR31++;
                if (VAR31 >= 2)
                    break;
            }
            else
            {
                FUN16(VAR2, VAR4->VAR13);
            }
            VAR30++;
        }
        VAR4->VAR46 = (VAR34[1] - VAR34[0]) / (VAR36[1] - VAR36[0]);
        VAR4->VAR47 = VAR34[0] - VAR4->VAR46 * VAR36[0];
        VAR2->VAR48 = VAR14 * 8 * 27000000LL / VAR4->VAR46;
        VAR27->VAR41->VAR48 = VAR2->VAR48;
        VAR27->VAR49 = VAR4->VAR47;
        FUN3(VAR4->VAR15, VAR23, "", VAR27->VAR49 / 1000000.0, VAR34[0] / 27e6, VAR4->VAR46);
    }
    FUN7(VAR2, VAR7, VAR10);
    return 0;
}