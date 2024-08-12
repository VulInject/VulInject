static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    int VAR8, VAR9;
    uint32_t VAR10;
    int VAR11 = VAR12;
    int VAR13, VAR14;
    int VAR15;
    uint64_t VAR16;
    int64_t VAR17 = FUN2(VAR7);
    VAR18 *VAR19 = FUN3(VAR2, NULL);
    if (!VAR19)
        return FUN4(VAR20);
    VAR19->VAR21->VAR22 = VAR23;
    FUN5(VAR7, 8);
    switch (FUN6(VAR7))
    {
    case 0:
        VAR19->VAR21->VAR24 = VAR25;
        break;
    case 1:
        VAR19->VAR21->VAR24 = VAR26;
        break;
    default:
        FUN7(VAR2, VAR27, "");
        break;
    }
    VAR10 = FUN6(VAR7);
    VAR19->VAR21->VAR28 = FUN6(VAR7);
    VAR19->VAR21->VAR29 = FUN6(VAR7);
    VAR8 = FUN6(VAR7);
    VAR9 = FUN6(VAR7);
    FUN8(VAR19, 32, VAR8, VAR9);
    VAR19->VAR30 = VAR10;
    VAR19->VAR31 = VAR10;
    switch (FUN6(VAR7))
    {
    case 0:
        VAR11 = VAR32;
        break;
    case 1:
        FUN7(VAR2, VAR27, "");
        VAR11 = VAR33;
        break;
    default:
        FUN7(VAR2, VAR27, "");
        break;
    }
    VAR4->VAR34 = FUN9(VAR7) + 1;
    FUN5(VAR7, 10);
    VAR13 = FUN6(VAR7);
    VAR14 = FUN6(VAR7) + 1;
    VAR16 = FUN10(VAR7) + 4 * VAR10;
    for (VAR15 = 0; VAR15 < VAR10; VAR15++)
    {
        uint32_t VAR35 = FUN6(VAR7);
        int VAR36 = VAR35 & 1 ? VAR37 : 0;
        if (FUN11(VAR7))
        {
            FUN7(VAR2, VAR38, "");
            return VAR39;
        }
        VAR35 >>= 1;
        if (VAR35 < 9 + 4 * VAR4->VAR34)
        {
            FUN7(VAR2, VAR27, "");
            return VAR39;
        }
        FUN12(VAR19, VAR16, VAR15, VAR35, 0, VAR36);
        VAR16 += VAR35;
        if (VAR17 > 0 && VAR15 == 0 && VAR16 > VAR17)
        {
            FUN7(VAR2, VAR27, "");
            return VAR39;
        }
    }
    for (VAR15 = 1; VAR15 < VAR4->VAR34; VAR15++)
    {
        VAR18 *VAR40 = FUN3(VAR2, NULL);
        if (!VAR40)
            return FUN4(VAR20);
        VAR40->VAR21->VAR22 = VAR41;
        VAR40->VAR21->VAR24 = VAR11;
        VAR40->VAR21->VAR14 = VAR14;
        VAR40->VAR21->VAR42 = VAR13;
        FUN8(VAR40, 32, 1, VAR13);
    }
    return 0;
}