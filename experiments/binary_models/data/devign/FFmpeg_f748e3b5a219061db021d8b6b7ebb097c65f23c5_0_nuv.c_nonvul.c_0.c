static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    char VAR8[12];
    double VAR9, VAR10;
    int VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
    VAR17 *VAR18 = NULL, *VAR19 = NULL;
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
    if (VAR10 < 0.0f)
    {
        if (VAR2->VAR20 & VAR21)
        {
            FUN8(VAR2, VAR22, "", VAR10);
            return VAR23;
        }
        else
        {
            FUN8(VAR2, VAR24, "", VAR10);
            VAR10 = 0.0f;
        }
    }
    VAR14 = FUN4(VAR7);
    VAR15 = FUN4(VAR7);
    FUN4(VAR7);
    FUN4(VAR7);
    if (VAR14)
    {
        VAR18 = FUN9(VAR2, NULL);
        if (!VAR18)
            return FUN10(VAR25);
        VAR4->VAR26 = VAR18->VAR27;
        VAR16 = FUN11(VAR12, VAR13, 0, VAR2);
        if (VAR16 < 0)
            return VAR16;
        VAR18->VAR28->VAR29 = VAR30;
        VAR18->VAR28->VAR31 = VAR32;
        VAR18->VAR28->VAR12 = VAR12;
        VAR18->VAR28->VAR13 = VAR13;
        VAR18->VAR28->VAR33 = 10;
        VAR18->VAR34 = FUN12(VAR9 * VAR13 / VAR12, 10000);
        VAR18->VAR35 = VAR18->VAR36 = FUN12(VAR10, 60000);
        FUN13(VAR18, 32, 1, 1000);
    }
    else
        VAR4->VAR26 = -1;
    if (VAR15)
    {
        VAR19 = FUN9(VAR2, NULL);
        if (!VAR19)
            return FUN10(VAR25);
        VAR4->VAR37 = VAR19->VAR27;
        VAR19->VAR28->VAR29 = VAR38;
        VAR19->VAR28->VAR31 = VAR39;
        VAR19->VAR28->VAR40 = 2;
        VAR19->VAR28->VAR41 = VAR42;
        VAR19->VAR28->VAR43 = 44100;
        VAR19->VAR28->VAR44 = 2 * 2 * 44100 * 8;
        VAR19->VAR28->VAR45 = 2 * 2;
        VAR19->VAR28->VAR33 = 16;
        FUN13(VAR19, 32, 1, 1000);
    }
    else
        VAR4->VAR37 = -1;
    if ((VAR16 = FUN14(VAR2, VAR7, VAR18, VAR19, VAR11)) < 0)
        return VAR16;
    VAR4->VAR46 = VAR18 && VAR18->VAR28->VAR31 == VAR32;
    return 0;
}