static int FUN1(const char *VAR1, int64_t VAR2, const char *VAR3, const char *VAR4, int VAR5, size_t VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    int VAR15, VAR16 = 0;
    int VAR17 = 0;
    QCowHeader VAR18;
    uint64_t VAR19, VAR20;
    QCowCreateState VAR21, *VAR22 = &VAR21;
    QCowExtension VAR23 = {0, 0};
    memset(VAR22, 0, sizeof(*VAR22));
    VAR8 = open(VAR1, VAR24 | VAR25 | VAR26 | VAR27, 0644);
    if (VAR8 < 0)
        return -1;
    memset(&VAR18, 0, sizeof(VAR18));
    VAR18.VAR28 = FUN2(VAR29);
    VAR18.VAR30 = FUN2(VAR31);
    VAR18.VAR32 = FUN3(VAR2 * 512);
    VAR9 = sizeof(VAR18);
    VAR10 = 0;
    if (VAR3)
    {
        if (VAR4)
        {
            VAR23.VAR28 = VAR33;
            VAR16 = strlen(VAR4);
            VAR23.VAR34 = VAR16;
            VAR17 = (sizeof(VAR23) + VAR23.VAR34 + 7) & ~7;
            VAR9 += VAR17;
        }
        VAR18.VAR35 = FUN3(VAR9);
        VAR10 = strlen(VAR3);
        VAR18.VAR36 = FUN2(VAR10);
        VAR9 += VAR10;
    }
    VAR22->VAR37 = FUN4(VAR6);
    if (VAR22->VAR37 < VAR38 || VAR22->VAR37 > VAR39)
    {
        fprintf(VAR40, ""
                        "",
                1 << VAR38, 1 << (VAR39 - 10));
        return -VAR41;
    }
    VAR22->VAR6 = 1 << VAR22->VAR37;
    VAR18.VAR37 = FUN2(VAR22->VAR37);
    VAR9 = (VAR9 + 7) & ~7;
    if (VAR5 & VAR42)
    {
        VAR18.VAR43 = FUN2(VAR44);
    }
    else
    {
        VAR18.VAR43 = FUN2(VAR45);
    }
    VAR14 = VAR22->VAR37 - 3;
    VAR13 = VAR22->VAR37 + VAR14;
    VAR11 = (((VAR2 * 512) + (1LL << VAR13) - 1) >> VAR13);
    VAR20 = FUN5(VAR9, VAR22->VAR6);
    VAR22->VAR46 = VAR20;
    VAR18.VAR46 = FUN3(VAR22->VAR46);
    VAR18.VAR11 = FUN2(VAR11);
    VAR20 += FUN5(VAR11 * sizeof(VAR47), VAR22->VAR6);
    VAR22->VAR48 = FUN6(VAR22->VAR6);
    VAR22->VAR49 = VAR20;
    VAR18.VAR49 = FUN3(VAR20);
    VAR18.VAR50 = FUN2(1);
    VAR20 += VAR22->VAR6;
    VAR22->VAR51 = VAR20;
    VAR19 = VAR20 >> VAR22->VAR37;
    VAR15 = (VAR19 >> (VAR22->VAR37 - VAR52)) + 1;
    for (VAR12 = 0; VAR12 < VAR15; VAR12++)
    {
        VAR22->VAR48[VAR12] = FUN3(VAR20);
        VAR20 += VAR22->VAR6;
    }
    VAR22->VAR53 = FUN6(VAR15 * VAR22->VAR6);
    FUN7(VAR22, 0, VAR9);
    FUN7(VAR22, VAR22->VAR46, VAR11 * sizeof(VAR47));
    FUN7(VAR22, VAR22->VAR49, VAR22->VAR6);
    FUN7(VAR22, VAR22->VAR51, VAR15 * VAR22->VAR6);
    write(VAR8, &VAR18, sizeof(VAR18));
    if (VAR3)
    {
        if (VAR16)
        {
            char VAR54[16];
            int VAR55 = VAR17 - (VAR23.VAR34 + sizeof(VAR23));
            memset(VAR54, 0, sizeof(VAR54));
            FUN8(&VAR23.VAR28);
            FUN8(&VAR23.VAR34);
            write(VAR8, &VAR23, sizeof(VAR23));
            write(VAR8, VAR4, VAR16);
            if (VAR55 > 0)
            {
                write(VAR8, VAR54, VAR55);
            }
        }
        write(VAR8, VAR3, VAR10);
    }
    FUN9(VAR8, VAR22->VAR46, VAR56);
    VAR19 = 0;
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        write(VAR8, &VAR19, sizeof(VAR19));
    }
    FUN9(VAR8, VAR22->VAR49, VAR56);
    write(VAR8, VAR22->VAR48, VAR22->VAR6);
    FUN9(VAR8, VAR22->VAR51, VAR56);
    write(VAR8, VAR22->VAR53, VAR15 * VAR22->VAR6);
    FUN10(VAR22->VAR48);
    FUN10(VAR22->VAR53);
    close(VAR8);
    if (VAR7)
    {
        VAR57 *VAR58;
        VAR58 = FUN11("");
        FUN12(VAR58, VAR1, VAR59);
        FUN13(VAR58);
        FUN14(VAR58);
    }
    return 0;
}