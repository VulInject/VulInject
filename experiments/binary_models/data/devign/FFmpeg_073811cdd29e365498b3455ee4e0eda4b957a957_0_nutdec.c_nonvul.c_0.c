static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR8;
    VAR9 *VAR10;
    int class, VAR11;
    uint64_t VAR12, VAR13;
    VAR14 *VAR15;
    VAR13 = FUN2(VAR2, VAR7, 1, VAR16);
    VAR13 += FUN3(VAR7);
    FUN4(VAR11, VAR12 < VAR4->VAR17 && !VAR2->VAR18[VAR12].VAR19);
    VAR10 = &VAR2->VAR18[VAR11];
    VAR15 = VAR4->VAR20[VAR11];
    if (!VAR15)
        return FUN5(VAR21);
    class = FUN6(VAR7);
    VAR12 = FUN7(VAR7);
    VAR15->VAR22->VAR23 = VAR12;
    switch (class)
    {
    case 0:
        VAR15->VAR22->VAR24 = VAR25;
        VAR15->VAR22->VAR26 = FUN8(VAR27, VAR12);
        if (VAR15->VAR22->VAR26 == VAR28)
            FUN9(VAR4, VAR29, "");
        break;
    case 1:
        VAR15->VAR22->VAR24 = VAR30;
        VAR15->VAR22->VAR26 = FUN8(VAR31, VAR12);
        if (VAR15->VAR22->VAR26 == VAR28)
            FUN9(VAR4, VAR29, "");
        break;
    case 2:
    case 3:
        VAR15->VAR22->VAR24 = VAR32;
        break;
    default:
        FUN9(VAR4, VAR29, "", class);
        return -1;
    }
    FUN4(VAR10->VAR33, VAR12 < VAR2->VAR34);
    FUN4(VAR10->VAR35, VAR12 < 16);
    VAR10->VAR36 = FUN6(VAR7);
    FUN4(VAR10->VAR37, VAR12 < 1000);
    VAR15->VAR22->VAR38 = VAR10->VAR37;
    FUN6(VAR7);
    FUN4(VAR15->VAR22->VAR39, VAR12 < (1 << 30));
    if (VAR15->VAR22->VAR39)
    {
        VAR15->VAR22->VAR40 = FUN10(VAR15->VAR22->VAR39 + VAR41);
        FUN11(VAR7, VAR15->VAR22->VAR40, VAR15->VAR22->VAR39);
    }
    if (VAR15->VAR22->VAR24 == VAR25)
    {
        FUN4(VAR15->VAR22->VAR42, VAR12 > 0)
        FUN4(VAR15->VAR22->VAR43, VAR12 > 0) VAR15->VAR22->VAR44.VAR45 = FUN6(VAR7);
        VAR15->VAR22->VAR44.VAR46 = FUN6(VAR7);
        if ((!VAR15->VAR22->VAR44.VAR45) != (!VAR15->VAR22->VAR44.VAR46))
        {
            FUN9(VAR4, VAR29, "");
            return -1;
        }
        FUN6(VAR7);
    }
    else if (VAR15->VAR22->VAR24 == VAR30)
    {
        FUN4(VAR15->VAR22->VAR47, VAR12 > 0)
        VAR12 = FUN6(VAR7);
        if (VAR12 > VAR15->VAR22->VAR47)
        {
            FUN9(VAR4, VAR29, "");
            VAR15->VAR22->VAR47 = VAR12;
        }
        FUN4(VAR15->VAR22->VAR48, VAR12 > 0)
    }
    if (FUN12(VAR7, VAR13) || FUN13(VAR7))
    {
        FUN9(VAR4, VAR29, "", VAR11);
        return -1;
    }
    VAR10->VAR19 = &VAR2->VAR19[VAR10->VAR33];
    FUN14(VAR4->VAR20[VAR11], 63, VAR10->VAR19->VAR45, VAR10->VAR19->VAR46);
    return 0;
}