static int FUN1(const char *VAR1, int64_t VAR2, const char *VAR3, const char *VAR4, int VAR5, size_t VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    int VAR15, VAR16 = 0;
    int VAR17 = 0;
    QCowHeader VAR18;
    uint64_t VAR19, VAR20;
    QCowCreateState VAR21, *VAR22 = &VAR21;
    QCowExtension VAR23 = {0, 0};
    int VAR24;
    memset(VAR22, 0, sizeof(*VAR22));
    VAR8 = open(VAR1, VAR25 | VAR26 | VAR27 | VAR28, 0644);
    if (VAR8 < 0)
        return -1;
    memset(&VAR18, 0, sizeof(VAR18));
    VAR18.VAR29 = FUN2(VAR30);
    VAR18.VAR31 = FUN2(VAR32);
    VAR18.VAR33 = FUN3(VAR2 * 512);
    VAR9 = sizeof(VAR18);
    VAR10 = 0;
    if (VAR3)
    {
        if (VAR4)
        {
            VAR23.VAR29 = VAR34;
            VAR16 = strlen(VAR4);
            VAR23.VAR35 = VAR16;
            VAR17 = (sizeof(VAR23) + VAR23.VAR35 + 7) & ~7;
            VAR9 += VAR17;
        }
        VAR18.VAR36 = FUN3(VAR9);
        VAR10 = strlen(VAR3);
        VAR18.VAR37 = FUN2(VAR10);
        VAR9 += VAR10;
    }
    VAR22->VAR38 = FUN4(VAR6);
    if (VAR22->VAR38 < VAR39 || VAR22->VAR38 > VAR40)
    {
        fprintf(VAR41, ""
                        "",
                1 << VAR39, 1 << (VAR40 - 10));
        return -VAR42;
    }
    VAR22->VAR6 = 1 << VAR22->VAR38;
    VAR18.VAR38 = FUN2(VAR22->VAR38);
    VAR9 = (VAR9 + 7) & ~7;
    if (VAR5 & VAR43)
    {
        VAR18.VAR44 = FUN2(VAR45);
    }
    else
    {
        VAR18.VAR44 = FUN2(VAR46);
    }
    VAR14 = VAR22->VAR38 - 3;
    VAR13 = VAR22->VAR38 + VAR14;
    VAR11 = (((VAR2 * 512) + (1LL << VAR13) - 1) >> VAR13);
    VAR20 = FUN5(VAR9, VAR22->VAR6);
    VAR22->VAR47 = VAR20;
    VAR18.VAR47 = FUN3(VAR22->VAR47);
    VAR18.VAR11 = FUN2(VAR11);
    VAR20 += FUN5(VAR11 * sizeof(VAR48), VAR22->VAR6);
    VAR22->VAR49 = FUN6(VAR22->VAR6);
    VAR22->VAR50 = VAR20;
    VAR18.VAR50 = FUN3(VAR20);
    VAR18.VAR51 = FUN2(1);
    VAR20 += VAR22->VAR6;
    VAR22->VAR52 = VAR20;
    VAR19 = VAR20 >> VAR22->VAR38;
    VAR15 = (VAR19 >> (VAR22->VAR38 - VAR53)) + 1;
    for (VAR12 = 0; VAR12 < VAR15; VAR12++)
    {
        VAR22->VAR49[VAR12] = FUN3(VAR20);
        VAR20 += VAR22->VAR6;
    }
    VAR22->VAR54 = FUN6(VAR15 * VAR22->VAR6);
    FUN7(VAR22, 0, VAR9);
    FUN7(VAR22, VAR22->VAR47, VAR11 * sizeof(VAR48));
    FUN7(VAR22, VAR22->VAR50, VAR22->VAR6);
    FUN7(VAR22, VAR22->VAR52, VAR15 * VAR22->VAR6);
    VAR24 = FUN8(VAR8, &VAR18, sizeof(VAR18));
    if (VAR24 != sizeof(VAR18))
    {
        VAR24 = -1;
        goto VAR55;
    }
    if (VAR3)
    {
        if (VAR16)
        {
            char VAR56[16];
            int VAR57 = VAR17 - (VAR23.VAR35 + sizeof(VAR23));
            memset(VAR56, 0, sizeof(VAR56));
            FUN9(&VAR23.VAR29);
            FUN9(&VAR23.VAR35);
            VAR24 = FUN8(VAR8, &VAR23, sizeof(VAR23));
            if (VAR24 != sizeof(VAR23))
            {
                VAR24 = -1;
                goto VAR55;
            }
            VAR24 = FUN8(VAR8, VAR4, VAR16);
            if (VAR24 != VAR16)
            {
                VAR24 = -1;
                goto VAR55;
            }
            if (VAR57 > 0)
            {
                VAR24 = FUN8(VAR8, VAR56, VAR57);
                if (VAR24 != VAR57)
                {
                    VAR24 = -1;
                    goto VAR55;
                }
            }
        }
        VAR24 = FUN8(VAR8, VAR3, VAR10);
        if (VAR24 != VAR10)
        {
            VAR24 = -1;
            goto VAR55;
        }
    }
    FUN10(VAR8, VAR22->VAR47, VAR58);
    VAR19 = 0;
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        VAR24 = FUN8(VAR8, &VAR19, sizeof(VAR19));
        if (VAR24 != sizeof(VAR19))
        {
            VAR24 = -1;
            goto VAR55;
        }
    }
    FUN10(VAR8, VAR22->VAR50, VAR58);
    VAR24 = FUN8(VAR8, VAR22->VAR49, VAR22->VAR6);
    if (VAR24 != VAR22->VAR6)
    {
        VAR24 = -1;
        goto VAR55;
    }
    FUN10(VAR8, VAR22->VAR52, VAR58);
    VAR24 = FUN8(VAR8, VAR22->VAR54, VAR15 * VAR22->VAR6);
    if (VAR24 != VAR22->VAR6)
    {
        VAR24 = -1;
        goto VAR55;
    }
    VAR24 = 0;
VAR55:
    FUN11(VAR22->VAR49);
    FUN11(VAR22->VAR54);
    close(VAR8);
    if (VAR7)
    {
        VAR59 *VAR60;
        VAR60 = FUN12("");
        FUN13(VAR60, VAR1, VAR61 | VAR62);
        FUN14(VAR60);
        FUN15(VAR60);
    }
    return VAR24;
}