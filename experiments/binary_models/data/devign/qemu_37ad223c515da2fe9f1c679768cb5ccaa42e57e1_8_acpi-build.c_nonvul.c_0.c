FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    int VAR10;
    uint64_t VAR11;
    int VAR12, VAR13, VAR14;
    uint64_t VAR15, VAR16, VAR17;
    VAR18 *VAR19 = FUN2(FUN3());
    ram_addr_t VAR20 = FUN4(FUN5(VAR19), VAR21, NULL);
    VAR12 = VAR2->VAR22;
    VAR5 = FUN6(VAR2, sizeof *VAR5);
    VAR5->VAR23 = FUN7(1);
    VAR7 = (void *)(VAR5 + 1);
    for (VAR10 = 0; VAR10 < VAR19->VAR24; ++VAR10)
    {
        VAR7 = FUN6(VAR2, sizeof *VAR7);
        VAR7->VAR25 = VAR26;
        VAR7->VAR27 = sizeof(*VAR7);
        VAR7->VAR28 = VAR10;
        VAR11 = VAR19->VAR29[VAR10];
        VAR7->VAR30 = VAR11;
        memset(VAR7->VAR31, 0, 3);
        VAR7->VAR32 = 0;
        VAR7->VAR33 = FUN7(1);
    }
    VAR17 = 0;
    VAR13 = VAR2->VAR22;
    VAR9 = FUN6(VAR2, sizeof *VAR9);
    FUN8(VAR9, 0, 640 * 1024, 0, VAR34);
    VAR17 = 1024 * 1024;
    for (VAR10 = 1; VAR10 < VAR19->VAR35 + 1; ++VAR10)
    {
        VAR16 = VAR17;
        VAR15 = VAR19->VAR36[VAR10 - 1];
        if (VAR10 == 1)
        {
            VAR15 -= 1024 * 1024;
        }
        VAR17 = VAR16 + VAR15;
        if (VAR16 <= VAR19->VAR37 && VAR17 > VAR19->VAR37)
        {
            VAR15 -= VAR17 - VAR19->VAR37;
            if (VAR15 > 0)
            {
                VAR9 = FUN6(VAR2, sizeof *VAR9);
                FUN8(VAR9, VAR16, VAR15, VAR10 - 1, VAR34);
            }
            VAR16 = 1ULL << 32;
            VAR15 = VAR17 - VAR19->VAR37;
            VAR17 += (1ULL << 32) - VAR19->VAR37;
        }
        VAR9 = FUN6(VAR2, sizeof *VAR9);
        FUN8(VAR9, VAR16, VAR15, VAR10 - 1, VAR34);
    }
    VAR14 = (VAR2->VAR22 - VAR13) / sizeof *VAR9;
    for (; VAR14 < VAR19->VAR35 + 2; VAR14++)
    {
        VAR9 = FUN6(VAR2, sizeof *VAR9);
        FUN8(VAR9, 0, 0, 0, VAR38);
    }
    if (VAR20)
    {
        VAR9 = FUN6(VAR2, sizeof *VAR9);
        FUN8(VAR9, VAR19->VAR39.VAR40, VAR20, 0, VAR41 | VAR34);
    }
    FUN9(VAR3, VAR2, (void *)(VAR2->VAR42 + VAR12), "", VAR2->VAR22 - VAR12, 1, NULL, NULL);
}