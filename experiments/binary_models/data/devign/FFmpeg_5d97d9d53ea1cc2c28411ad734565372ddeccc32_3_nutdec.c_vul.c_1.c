static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR8;
    VAR9 *VAR10;
    int class, VAR11, VAR12, VAR13;
    uint64_t VAR14, VAR15;
    VAR16 *VAR17;
    VAR15 = FUN2(VAR2, VAR7, 1);
    VAR15 += FUN3(VAR7) - 4;
    FUN4(VAR13, VAR14 < VAR4->VAR18 && !VAR2->VAR19[VAR14].VAR20.VAR21);
    VAR10 = &VAR2->VAR19[VAR13];
    VAR17 = VAR4->VAR22[VAR13];
    if (!VAR17)
        return VAR23;
    class = FUN5(VAR7);
    VAR14 = FUN6(VAR7);
    VAR17->VAR24->VAR25 = VAR14;
    switch (class)
    {
    case 0:
        VAR17->VAR24->VAR26 = VAR27;
        VAR17->VAR24->VAR28 = FUN7(VAR14);
        if (VAR17->VAR24->VAR28 == VAR29)
            FUN8(VAR4, VAR30, "");
        break;
    case 1:
        VAR17->VAR24->VAR26 = VAR31;
        VAR17->VAR24->VAR28 = FUN9(VAR14);
        if (VAR17->VAR24->VAR28 == VAR29)
            FUN8(VAR4, VAR30, "");
        break;
    case 2:
    case 3:
        VAR17->VAR24->VAR26 = VAR32;
        break;
    default:
        FUN8(VAR4, VAR30, "", class);
        return -1;
    }
    FUN4(VAR10->VAR33, VAR14 < VAR2->VAR34);
    FUN4(VAR10->VAR35, VAR14 < 16);
    VAR10->VAR36 = FUN5(VAR7);
    FUN4(VAR10->VAR37, VAR14 < 1000);
    VAR17->VAR24->VAR38 = VAR10->VAR37;
    FUN5(VAR7);
    FUN4(VAR17->VAR24->VAR39, VAR14 < (1 << 30));
    if (VAR17->VAR24->VAR39)
    {
        VAR17->VAR24->VAR40 = FUN10(VAR17->VAR24->VAR39 + VAR41);
        FUN11(VAR7, VAR17->VAR24->VAR40, VAR17->VAR24->VAR39);
    }
    if (VAR17->VAR24->VAR26 == VAR27)
    {
        FUN4(VAR17->VAR24->VAR42, VAR14 > 0)
        FUN4(VAR17->VAR24->VAR43, VAR14 > 0) VAR17->VAR24->VAR44.VAR21 = FUN5(VAR7);
        VAR17->VAR24->VAR44.VAR45 = FUN5(VAR7);
        if ((!VAR17->VAR24->VAR44.VAR21) != (!VAR17->VAR24->VAR44.VAR45))
        {
            FUN8(VAR4, VAR30, "");
            return -1;
        }
        FUN5(VAR7);
    }
    else if (VAR17->VAR24->VAR26 == VAR31)
    {
        FUN4(VAR17->VAR24->VAR46, VAR14 > 0)
        VAR14 = FUN5(VAR7);
        if (VAR14 > VAR17->VAR24->VAR46)
        {
            FUN8(VAR4, VAR30, "");
            VAR17->VAR24->VAR46 = VAR14;
        }
        FUN4(VAR17->VAR24->VAR47, VAR14 > 0)
    }
    if (FUN12(VAR7, VAR15) || FUN13(VAR7))
    {
        FUN8(VAR4, VAR30, "", VAR13);
        return -1;
    }
    VAR10->VAR20 = VAR2->VAR20[VAR10->VAR33];
    FUN14(VAR4->VAR22[VAR13], 63, VAR10->VAR20.VAR21, VAR10->VAR20.VAR45);
    return 0;
}