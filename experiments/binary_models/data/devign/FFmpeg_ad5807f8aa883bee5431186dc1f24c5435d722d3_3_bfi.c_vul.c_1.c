static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    VAR8 *VAR9;
    VAR8 *VAR10;
    int VAR11, VAR12;
    VAR9 = FUN2(VAR2, NULL);
    if (!VAR9)
        return FUN3(VAR13);
    VAR10 = FUN2(VAR2, NULL);
    if (!VAR10)
        return FUN3(VAR13);
    FUN4(VAR7, 8);
    VAR12 = FUN5(VAR7);
    VAR4->VAR14 = FUN5(VAR7);
    FUN5(VAR7);
    FUN5(VAR7);
    FUN5(VAR7);
    VAR11 = FUN5(VAR7);
    FUN4(VAR7, 12);
    VAR9->VAR15->VAR16 = FUN5(VAR7);
    VAR9->VAR15->VAR17 = FUN5(VAR7);
    FUN4(VAR7, 8);
    VAR9->VAR15->VAR18 = FUN6(768);
    if (!VAR9->VAR15->VAR18)
        return FUN3(VAR13);
    VAR9->VAR15->VAR19 = 768;
    FUN7(VAR7, VAR9->VAR15->VAR18, VAR9->VAR15->VAR19);
    VAR10->VAR15->VAR20 = FUN5(VAR7);
    if (VAR10->VAR15->VAR20 <= 0)
    {
        FUN8(VAR2, VAR21, "", VAR10->VAR15->VAR20);
        return VAR22;
    }
    FUN9(VAR9, 32, 1, VAR11);
    VAR9->VAR15->VAR23 = VAR24;
    VAR9->VAR15->VAR25 = VAR26;
    VAR9->VAR15->VAR27 = VAR28;
    VAR9->VAR29 = VAR9->VAR30 = VAR4->VAR14;
    VAR10->VAR15->VAR23 = VAR31;
    VAR10->VAR15->VAR25 = VAR32;
    VAR10->VAR15->VAR33 = 1;
    VAR10->VAR15->VAR34 = VAR35;
    VAR10->VAR15->VAR36 = 8;
    VAR10->VAR15->VAR37 = VAR10->VAR15->VAR20 * VAR10->VAR15->VAR36;
    FUN10(VAR7, VAR12 - 3, VAR38);
    FUN9(VAR10, 64, 1, VAR10->VAR15->VAR20);
    return 0;
}