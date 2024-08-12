static int FUN1(const char *VAR1, int64_t VAR2, const char *VAR3, const char *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    int VAR13, VAR14 = 0;
    QCowHeader VAR15;
    uint64_t VAR16, VAR17;
    QCowCreateState VAR18, *VAR19 = &VAR18;
    QCowExtension VAR20 = {0, 0};
    memset(VAR19, 0, sizeof(*VAR19));
    VAR6 = open(VAR1, VAR21 | VAR22 | VAR23 | VAR24, 0644);
    if (VAR6 < 0)
        return -1;
    memset(&VAR15, 0, sizeof(VAR15));
    VAR15.VAR25 = FUN2(VAR26);
    VAR15.VAR27 = FUN2(VAR28);
    VAR15.VAR29 = FUN3(VAR2 * 512);
    VAR7 = sizeof(VAR15);
    VAR8 = 0;
    if (VAR3)
    {
        if (VAR4)
        {
            VAR20.VAR25 = VAR30;
            VAR14 = strlen(VAR4);
            VAR20.VAR31 = (VAR14 + 7) & ~7;
            VAR7 += ((sizeof(VAR20) + VAR20.VAR31 + 7) & ~7);
        }
        VAR15.VAR32 = FUN3(VAR7);
        VAR8 = strlen(VAR3);
        VAR15.VAR33 = FUN2(VAR8);
        VAR7 += VAR8;
    }
    VAR19->VAR34 = 12;
    VAR19->VAR35 = 1 << VAR19->VAR34;
    VAR15.VAR34 = FUN2(VAR19->VAR34);
    VAR7 = (VAR7 + 7) & ~7;
    if (VAR5 & VAR36)
    {
        VAR15.VAR37 = FUN2(VAR38);
    }
    else
    {
        VAR15.VAR37 = FUN2(VAR39);
    }
    VAR12 = VAR19->VAR34 - 3;
    VAR11 = VAR19->VAR34 + VAR12;
    VAR9 = (((VAR2 * 512) + (1LL << VAR11) - 1) >> VAR11);
    VAR17 = FUN4(VAR7, VAR19->VAR35);
    VAR19->VAR40 = VAR17;
    VAR15.VAR40 = FUN3(VAR19->VAR40);
    VAR15.VAR9 = FUN2(VAR9);
    VAR17 += FUN4(VAR9 * sizeof(VAR41), VAR19->VAR35);
    VAR19->VAR42 = FUN5(VAR19->VAR35);
    VAR19->VAR43 = VAR17;
    VAR15.VAR43 = FUN3(VAR17);
    VAR15.VAR44 = FUN2(1);
    VAR17 += VAR19->VAR35;
    VAR19->VAR45 = VAR17;
    VAR16 = VAR17 >> VAR19->VAR34;
    VAR13 = (VAR16 >> (VAR19->VAR34 - VAR46)) + 1;
    for (VAR10 = 0; VAR10 < VAR13; VAR10++)
    {
        VAR19->VAR42[VAR10] = FUN3(VAR17);
        VAR17 += VAR19->VAR35;
    }
    VAR19->VAR47 = FUN5(VAR13 * VAR19->VAR35);
    FUN6(VAR19, 0, VAR7);
    FUN6(VAR19, VAR19->VAR40, VAR9 * sizeof(VAR41));
    FUN6(VAR19, VAR19->VAR43, VAR19->VAR35);
    FUN6(VAR19, VAR19->VAR45, VAR13 * VAR19->VAR35);
    write(VAR6, &VAR15, sizeof(VAR15));
    if (VAR3)
    {
        if (VAR14)
        {
            char VAR48[16];
            int VAR49 = VAR20.VAR31 - VAR14;
            memset(VAR48, 0, sizeof(VAR48));
            FUN7(&VAR20.VAR25);
            FUN7(&VAR20.VAR31);
            write(VAR6, &VAR20, sizeof(VAR20));
            write(VAR6, VAR4, VAR14);
            if (VAR49 > 0)
            {
                write(VAR6, VAR48, VAR49);
            }
        }
        write(VAR6, VAR3, VAR8);
    }
    FUN8(VAR6, VAR19->VAR40, VAR50);
    VAR16 = 0;
    for (VAR10 = 0; VAR10 < VAR9; VAR10++)
    {
        write(VAR6, &VAR16, sizeof(VAR16));
    }
    FUN8(VAR6, VAR19->VAR43, VAR50);
    write(VAR6, VAR19->VAR42, VAR19->VAR35);
    FUN8(VAR6, VAR19->VAR45, VAR50);
    write(VAR6, VAR19->VAR47, VAR13 * VAR19->VAR35);
    FUN9(VAR19->VAR42);
    FUN9(VAR19->VAR47);
    close(VAR6);
    return 0;
}