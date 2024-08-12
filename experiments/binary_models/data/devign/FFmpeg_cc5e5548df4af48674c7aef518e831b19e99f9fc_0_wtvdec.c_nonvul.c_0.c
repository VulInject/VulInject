static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    uint8_t VAR8[VAR9];
    VAR10 *VAR11;
    int64_t VAR12;
    int64_t VAR13;
    VAR4->VAR14 = VAR4->VAR15 = VAR4->VAR16 = VAR17;
    FUN2(VAR2->VAR11, 0x30);
    VAR7 = FUN3(VAR2->VAR11);
    if (VAR7 > sizeof(VAR8))
    {
        FUN4(VAR2, VAR18, "");
        return VAR19;
    }
    FUN2(VAR2->VAR11, 4);
    VAR6 = FUN3(VAR2->VAR11);
    VAR13 = FUN5(VAR2->VAR11, VAR6, 0);
    if (VAR13 < 0)
        return VAR13;
    VAR7 = FUN6(VAR2->VAR11, VAR8, VAR7);
    if (VAR7 < 0)
        return VAR19;
    VAR4->VAR11 = FUN7(VAR2, VAR8, VAR7, VAR20);
    if (!VAR4->VAR11)
    {
        FUN4(VAR2, VAR18, "");
        return VAR19;
    }
    VAR13 = FUN8(VAR2, VAR21, 0, 0);
    if (VAR13 < 0)
        return VAR13;
    FUN9(VAR4->VAR11, -32, VAR22);
    VAR12 = FUN10(VAR2->VAR11);
    VAR11 = FUN7(VAR2, VAR8, VAR7, VAR23);
    if (VAR11)
    {
        FUN11(VAR2, VAR11);
        FUN12(VAR11);
    }
    VAR2->VAR24 |= VAR25;
    if (VAR2->VAR26)
    {
        VAR27 *VAR28 = VAR2->VAR29[0];
        VAR11 = FUN7(VAR2, VAR8, VAR7, VAR30);
        if (VAR11)
        {
            while (1)
            {
                uint64_t VAR31 = FUN13(VAR11);
                uint64_t VAR32 = FUN13(VAR11);
                if (FUN14(VAR11))
                    break;
                FUN15(&VAR4->VAR33, &VAR4->VAR34, &VAR4->VAR35, 0, VAR31, VAR32, 0, VAR36);
            }
            FUN12(VAR11);
            if (VAR4->VAR34)
            {
                VAR11 = FUN7(VAR2, VAR8, VAR7, VAR37);
                if (VAR11)
                {
                    VAR38 *VAR39 = VAR4->VAR33;
                    VAR38 *VAR40 = VAR4->VAR33 + VAR4->VAR34 - 1;
                    uint64_t VAR41 = 0;
                    while (1)
                    {
                        uint64_t VAR32 = FUN13(VAR11);
                        uint64_t VAR42 = FUN13(VAR11);
                        while (VAR39 <= VAR40 && VAR32 > VAR39->VAR43)
                        {
                            VAR39->VAR44 = VAR41;
                            VAR39++;
                        }
                        if (FUN14(VAR11))
                            break;
                        VAR41 = VAR42;
                    }
                    VAR40->VAR44 = VAR41;
                    FUN12(VAR11);
                    VAR28->VAR45 = VAR40->VAR31;
                }
            }
        }
    }
    FUN9(VAR2->VAR11, VAR12, VAR46);
    return 0;
}