static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    char VAR8[12];
    double VAR9, VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15;
    VAR16 *VAR17 = NULL, *VAR18 = NULL;
    FUN2(VAR7, VAR8, 12);
    VAR11 = !memcmp(VAR8, "", 12);
    FUN3(VAR7, 5);
    FUN3(VAR7, 3);
    VAR12 = FUN4(VAR7);
    VAR13 = FUN4(VAR7);
    FUN4(VAR7);
    FUN4(VAR7);
    FUN5(VAR7);
    FUN3(VAR7, 3);
    VAR9 = FUN6(FUN7(VAR7));
    if (VAR9 > 0.9999 && VAR9 < 1.0001)
        VAR9 = 4.0 / 3.0;
    VAR10 = FUN6(FUN7(VAR7));
    VAR14 = FUN4(VAR7);
    VAR15 = FUN4(VAR7);
    FUN4(VAR7);
    FUN4(VAR7);
    if (VAR14)
    {
        VAR17 = FUN8(VAR2, NULL);
        if (!VAR17)
            return FUN9(VAR19);
        VAR4->VAR20 = VAR17->VAR21;
        VAR17->VAR22->VAR23 = VAR24;
        VAR17->VAR22->VAR25 = VAR26;
        VAR17->VAR22->VAR12 = VAR12;
        VAR17->VAR22->VAR13 = VAR13;
        VAR17->VAR22->VAR27 = 10;
        VAR17->VAR28 = FUN10(VAR9 * VAR13 / VAR12, 10000);
        VAR17->VAR29 = VAR17->VAR30 = FUN10(VAR10, 60000);
        FUN11(VAR17, 32, 1, 1000);
    }
    else
        VAR4->VAR20 = -1;
    if (VAR15)
    {
        VAR18 = FUN8(VAR2, NULL);
        if (!VAR18)
            return FUN9(VAR19);
        VAR4->VAR31 = VAR18->VAR21;
        VAR18->VAR22->VAR23 = VAR32;
        VAR18->VAR22->VAR25 = VAR33;
        VAR18->VAR22->VAR34 = 2;
        VAR18->VAR22->VAR35 = VAR36;
        VAR18->VAR22->VAR37 = 44100;
        VAR18->VAR22->VAR38 = 2 * 2 * 44100 * 8;
        VAR18->VAR22->VAR39 = 2 * 2;
        VAR18->VAR22->VAR27 = 16;
        FUN11(VAR18, 32, 1, 1000);
    }
    else
        VAR4->VAR31 = -1;
    FUN12(VAR7, VAR17, VAR18, VAR11);
    VAR4->VAR40 = VAR17 && VAR17->VAR22->VAR25 == VAR26;
    return 0;
}