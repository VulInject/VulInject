static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    VAR8 *VAR9;
    unsigned int VAR10;
    FUN2(VAR7, 3);
    VAR4->VAR11 = FUN3(VAR7);
    VAR4->VAR12 = FUN3(VAR7);
    FUN2(VAR7, 32);
    VAR4->VAR13 = FUN4(VAR7);
    VAR4->VAR14 = FUN5(VAR7);
    VAR4->VAR15 = FUN4(VAR7);
    VAR4->VAR16 = FUN6(VAR7) >> 3;
    VAR4->VAR17 = FUN5(VAR7);
    VAR4->VAR18 = FUN5(VAR7);
    VAR4->VAR19 = FUN5(VAR7);
    if (VAR4->VAR16 != VAR20)
    {
        FUN7(VAR2, VAR21, "", VAR4->VAR16);
        VAR4->VAR16 = VAR20;
    }
    if (!VAR4->VAR17 && VAR4->VAR18)
        VAR4->VAR17 = VAR4->VAR19 / (VAR4->VAR16) / VAR4->VAR18;
    if (!VAR4->VAR18 && VAR4->VAR17)
        VAR4->VAR18 = VAR4->VAR19 / (VAR4->VAR16) / VAR4->VAR17;
    if (!VAR4->VAR18 || !VAR4->VAR17 || !VAR4->VAR19)
    {
        FUN7(VAR2, VAR22, "");
        return FUN8(VAR23);
    }
    FUN2(VAR7, 4);
    VAR10 = FUN5(VAR7);
    if (VAR10 == 0)
    {
        FUN9(VAR2, "");
        return VAR24;
    }
    VAR4->VAR25 = VAR10 * (VAR26 + VAR27) + VAR4->VAR19;
    VAR4->VAR28 = (VAR4->VAR14 / 4) / VAR10;
    VAR9 = FUN10(VAR2, NULL);
    if (!VAR9)
        return FUN8(VAR29);
    FUN11(VAR9, 64, 1, VAR4->VAR28);
    VAR9->VAR30->VAR31 = VAR32;
    VAR9->VAR30->VAR33 = VAR34;
    VAR9->VAR30->VAR35 = VAR36;
    VAR9->VAR30->VAR37 = VAR4->VAR17;
    VAR9->VAR30->VAR38 = VAR4->VAR18;
    VAR9->VAR30->VAR39 = VAR4->VAR28;
    VAR9->VAR30->VAR40 = FUN12("");
    VAR9->VAR30->VAR41 = 9;
    VAR9 = FUN10(VAR2, NULL);
    if (!VAR9)
        return FUN8(VAR29);
    FUN11(VAR9, 64, 1, VAR42);
    VAR9->VAR30->VAR31 = VAR43;
    VAR9->VAR30->VAR33 = VAR44;
    VAR9->VAR30->VAR45 = VAR4->VAR14;
    VAR9->VAR46 = VAR47;
    if (FUN13(VAR7, VAR48, VAR49) != VAR48)
        return FUN8(VAR50);
    return 0;
}